(load "pattern-matcher.scm")
(load "pc.scm")


;nadavIdan
(define <whitespace>
  (const
   (lambda (ch)
     (char<=? ch #\space))))

(define <line-comment>
  (let ((<end-of-line-comment>
	 (new (*parser (char #\newline))
	      (*parser <end-of-input>)
	      (*disj 2)
	      done)))
    (new (*parser (char #\;))
	 
	 (*parser <any-char>)
	 (*parser <end-of-line-comment>)
	 *diff *star

	 (*parser <end-of-line-comment>)
	 (*caten 3)
	 done)))

(define <sexpr-comment>
  (new 
  	(*parser (word "#;"))
       (*delayed (lambda () <Sexpr>))
       (*caten 2)
       done))

(define <sexpr-comment-in-infix>
  (new 
  	(*parser (word "#;"))
       (*delayed (lambda () <InfixExpression>))
       (*caten 2)
       done))

(define <commentForinfix>
  (disj <line-comment>
	<sexpr-comment-in-infix>))

(define <comment>
  (disj <line-comment>
	<sexpr-comment>))

(define <commentOrSpaceforinfix>
	(new 
		(*parser  <commentForinfix>)
		(*parser (range (integer->char 0) (integer->char 32)))
		(*disj 2)
		done))

(define <commentOrSpace>
	(new 
		(*parser  <comment>)
		(*parser (range (integer->char 0) (integer->char 32)))
		(*disj 2)
		done))

(define <Boolean>
	(new
		(*parser (word-ci "#t"))
		(*pack (lambda (_) #t))

		(*parser (word-ci "#f"))
		(*pack (lambda (_) #f))

		(*disj 2)
		done))

(define <digit-0-9>
	(range #\0 #\9))


(define <Natural>
	(new
		(*parser <digit-0-9>) 
		(*parser <digit-0-9>) *star
		(*caten 2)
		(*pack-with (lambda (x s) 
						(string->number (list->string `(,x ,@s)))))
		done))


(define <Integer>
  	(new 
  	   (*parser (char #\+))
       (*parser <Natural>)
       (*caten 2)
       (*pack-with
			(lambda (x n) n))

       (*parser (char #\-))
       (*parser <Natural>)
       (*caten 2)
       (*pack-with
			(lambda (x n) (- n)))

       (*parser <Natural>)

       (*disj 3)

       done))

(define <NumberOnlyMinus>
  	(new 
       (*parser (char #\-))

       (*parser <Natural>)

       
       (*parser <Natural>)
       	(*parser (char #\/))
		(*parser <Natural>)
		(*guard (lambda (n) (not (zero? n))))
		(*caten 3)
		(*pack-with 
			(lambda (num div den)
				(/ num den)))

       (*disj 2)

        (*caten 2)
        (*pack-with
			(lambda (x n) (- n)))
       done))

(define <Fraction>
	(new
		(*parser <Integer>)
		(*parser (char #\/))
		(*parser <Natural>)
		(*guard (lambda (n) (not (zero? n))))
		(*caten 3)
		(*pack-with 
			(lambda (num div den)
				(/ num den)))
		done))

(define <op>
	(new 
		(*delayed (lambda () <PowerSymbol>))
		(*parser (char #\*))
		(*parser (char #\-))
		(*parser (char #\+))
		(*parser (char #\/))

		(*disj 5)
		done))

(define <Number> 
(new 
	(*parser <Fraction>)
	(*parser <Integer>)
	(*disj 2)

	(*delayed (lambda () <Symbol>))

	(*parser <op>)
	*diff

	*not-followed-by

	done))



(define <SymbolChar>
	(new
		(*parser <digit-0-9>)

		(*parser (range #\a #\z))
		(*parser (range #\A #\Z))
		(*pack (lambda (ch) (integer->char (+ 32 (char->integer ch)))))
		(*parser (char #\!))
		(*parser (char #\$))
		(*parser (char #\^))
		(*parser (char #\*))
		(*parser (char #\-))
		(*parser (char #\_))
		(*parser (char #\=))
		(*parser (char #\+))
		(*parser (char #\<))
		(*parser (char #\>))
		(*parser (char #\?))
		(*parser (char #\/))

		(*disj 15)
		
	done))


(define <Symbol>
	(new
		(*parser <SymbolChar>)

		(*parser <SymbolChar>) *star
		(*caten 2)
		(*pack-with (lambda (x s) 
						 (string->symbol (list->string `(,x ,@s)))))
	done))

(define <NumberWithOutSymbolAfter> 
	(new
		(*parser <Number>)

		(*parser <Symbol>)
		(*parser (range #\0 #\9))
		*diff

		*not-followed-by

	done))

(define <make-meta-char>
	(lambda (str ch)
		(new 
			(*parser (word-ci str))
			(*pack (lambda (_) ch))
			done)))


(define <StringMetaChar>
	(new 
		(*parser (<make-meta-char> "\\\\" #\\))
        (*parser (<make-meta-char>  "\\\"" #\"))
        (*parser (<make-meta-char>  "\\n" #\newline))
        (*parser (<make-meta-char>  "\\r" #\return))
        (*parser (<make-meta-char>  "\\t" #\tab))
        (*parser (<make-meta-char>  "\\f" #\page))

		(*disj 6)
		done))

(define <charToIgonre>
	(new
		(*parser (range-ci #\a #\z))
		(*parser (range #\0 #\9))
	   	(*disj 2)
	 done))

(define <VisibleSimpleChar>
	(new 
		(*parser  (range #\! #\~))
		(*parser <charToIgonre>)
   		*not-followed-by 
		done))


(define <StringLiteralChar>
	(new 
		(*parser <any-char>)
		(*parser (char #\\))
		*diff
		done))


(define <HexChar>
	(new 
		(*parser  <digit-0-9>)
		(*parser  (range-ci (integer->char 97) (integer->char 102)))

		(*disj 2)
		done))


(define <OneOrMoreHexChar>
	(new  
		(*parser <HexChar>)
		(*parser <HexChar>) *star
		(*caten 2)
		(*pack-with (lambda (x s)  `(,x ,@s)))
		done))


(define <HexUnicodeChar>
	(new 
		(*parser (word-ci "x"))
		(*parser <OneOrMoreHexChar>)
			(*guard (lambda (hexNum) 
				(let ((decNum (string->number (list->string hexNum) 16))) 
						(and (>= decNum 0) (<= decNum 1114111)))))
		(*caten 2)
		(*pack-with (lambda (x str)   
		 	(integer->char (string->number (list->string 
		 		`(#\# #\x ,@str))))))
	
		 done))


(define <StringHexChar> 
	(new 
		(*parser (word-ci "\\x"))
		(*parser <OneOrMoreHexChar>)
		(*guard (lambda (hexNum) 
			(let ((decNum (string->number (list->string hexNum) 16))) 
									(and (>= decNum 0) (<= decNum 1114111)))))
		(*parser (word ";"))
		(*caten 3)
		 (*pack-with (lambda (y str comma)  
		 	(integer->char (string->number (list->string 
		 		`(#\# #\x ,@str))))))
		 done))



(define <StringChar> 
	(new 
		(*parser <StringHexChar>)
		(*parser <StringMetaChar>)
		(*parser <StringLiteralChar>)		
		(*disj 3)
		done))


(define <String> 
	(new
		(*parser (char #\")) 
		(*parser <StringChar>) 
		(*parser (char #\"))
       	 *diff *star
		(*parser (char #\"))

		(*caten 3)

   		(*pack-with (lambda (open-delim chars close-delim) 
	  					(list->string chars)))
		done))


 (define <CharPrefix> 
	(new 
		(*parser (word "#\\"))
		(*pack (lambda (_) #\\))
		done))


(define <NamedChar>
	(new 
		(*parser (<make-meta-char> "lambda" (integer->char 955)))
        (*parser (<make-meta-char>  "newline" #\newline))
        (*parser (<make-meta-char>  "nul" #\nul))
        (*parser (<make-meta-char>  "page" #\page))
        (*parser (<make-meta-char>  "return" #\return))
        (*parser (<make-meta-char>  "space" #\space))
        (*parser (<make-meta-char>  "tab" #\tab))

		(*disj 7)
		done))


(define <Char>
	(new
		(*parser <CharPrefix>)

		(*parser <HexUnicodeChar>)
		(*parser <NamedChar>)
		(*parser <VisibleSimpleChar>)

		(*disj 3)

		(*caten 2)
		(*pack-with (lambda (CharPrefix char)  char))
		done))


(define <ProperList> 
	(new 
		(*parser (char #\( ))
		(*parser <commentOrSpace>) *star
		(*delayed (lambda () <Sexpr>)) 
		(*parser <commentOrSpace>) *star 
		(*caten 2)
		(*pack-with (lambda (exp space) exp))
		*star
		(*parser (char #\) ))
		(*caten 4)
		(*pack-with (lambda (paren1 space1 exp paren2)   exp))
		done))


(define <ImproperList> 
	(new 

		(*parser (char #\( ))

		(*parser <commentOrSpace>) *star
		(*delayed (lambda() <Sexpr>))
		(*parser <commentOrSpace>) *star
		(*caten 2)
		(*pack-with (lambda (exp space) exp))
		*plus
		(*parser (char #\.))

		(*parser <commentOrSpace>) *star
		(*delayed (lambda() <Sexpr>))
		(*parser <commentOrSpace>) *star
		(*caten 3)
		(*pack-with (lambda (space exp space2) exp))
	
		(*parser (char #\) ))

		(*caten 6)
		(*pack-with (lambda (paren1 space1 exps dot exp paren2) 
								`(,@exps . ,exp)))
	done))


(define <Vector> 
	(new 
		(*parser (char #\#))
		(*delayed (lambda() <ProperList>))
		(*caten 2)
		(*pack-with (lambda (paren1 exp ) (list->vector exp)))
	done))


(define <Quoted> 
	(new 
		(*parser (char #\'))
		(*delayed (lambda() <Sexpr>))
		(*caten 2)
		(*pack-with (lambda (sign exp) `',exp))

	done ))
 

(define <QuasiQuoted> 
	(new 
		(*parser (char #\`))
		(*delayed (lambda() <Sexpr>))
		(*caten 2)
		(*pack-with (lambda (q exp) 

		(list 'quasiquote  exp)))
	done ))


(define <Unquoted> 
	(new 
		(*parser (char #\,))
		(*delayed (lambda() <Sexpr>))
		(*caten 2)
		(*pack-with (lambda (q exp) 

		(list 'unquote  exp)))
	done ))


(define <UnquoteAndSpliced> 
	(new 
		(*parser (word ",@"))
		(*delayed (lambda() <Sexpr>))
		(*caten 2)
		(*pack-with (lambda (q exp) 
		(list 'unquote-splicing  exp)))
	done ))


(define <InfixPrefixExtensionPrefix> 
	(new 
		(*parser (word "##"))
		(*parser (word "#%"))
		(*disj 2)
	done))

	(define <InfixSexprEscape> 
	(new
		(*parser <commentOrSpaceforinfix>) *star
	 	(*parser <InfixPrefixExtensionPrefix>)
	 	(*parser <commentOrSpace>) *star
		(*delayed (lambda () <Sexpr>))
		(*parser <commentOrSpace>) *star
		(*caten 5)
		(*pack-with (lambda (spcae1 inf space2 exp space3) exp))
	done))



(define <PowerSymbol> 
	(new 
		(*parser (char #\^))
		(*parser (word "**"))
		(*disj 2)
	done))




(define <SymbolForInfix>
	(new
		(*parser <digit-0-9>)
		(*parser (range #\a #\z))
		(*parser (range #\A #\Z))
		(*pack (lambda (ch)  (integer->char (+ 32 (char->integer ch)))))
		(*parser (char #\!))
		(*parser (char #\$))
		(*parser (char #\_))
		(*parser (char #\=))
		(*parser (char #\<))
		(*parser (char #\>))
		(*parser (char #\?))
		(*disj 10)
		done))

(define <InfixSymbol> 
	(new 
		(*parser <SymbolForInfix>)
		(*parser <SymbolForInfix>) *star
		(*caten 2)
		(*pack-with (lambda (exp1  exp2) (string->symbol (list->string `(,exp1 ,@exp2)))))
	done))
	

(define toPrefix (lambda (exp rest)
	(if (not (null? rest)) 
		(toPrefix (list (caar rest) exp (cadar rest)) (cdr rest))
		exp 
		)))

(define stillPrefix (lambda (exp rest)
	(if  (null? rest) exp 
		(list (caar rest) exp  (stillPrefix (cadar rest)  (cdr rest)))
		)))





(define <base> 
	(new 	

			(*parser <Number>)
			(*delayed (lambda () <InfixNeg>))
			(*parser <InfixSymbol>)
			(*disj 3)

	done))


(define <InfixNeg> 
	(new 
		

		(*parser <commentOrSpaceforinfix>) *star
		(*parser (char #\-))

		(*parser <commentOrSpaceforinfix>) *star
		(*delayed (lambda () <InfixArrayGet>))
		(*parser <commentOrSpaceforinfix>) *star	
		(*caten 5)
		(*pack-with (lambda (space1 op spcae2 num space3) `(- ,num)))	

		done))


(define <InfixParen>
		(new 

		(*parser <commentOrSpaceforinfix>) *star
		(*parser (word "(" ))				
		(*parser <commentOrSpaceforinfix>) *star
		(*delayed (lambda () <InfixExpression>))
		(*parser <commentOrSpaceforinfix>) *star
		(*parser (word ")" ))
		(*caten 6)
		(*pack-with (lambda (space paren1 space1 exp space2 paren2)  exp))

		done))

(define <InfixArgList> 
	(new	
		(*parser <commentOrSpaceforinfix>) *star
		(*delayed (lambda () <InfixExpression>))
		(*parser <commentOrSpaceforinfix>) *star

		(*parser <commentOrSpaceforinfix>) *star
		(*parser (word ","))
		(*parser <commentOrSpaceforinfix>) *star
		(*delayed (lambda () <InfixExpression>))
		(*parser <commentOrSpaceforinfix>) *star
		(*caten 5)
		(*pack-with (lambda (space1 comma space2 x space3)  x))
		*star
		(*caten 4)
		(*pack-with (lambda (space1 exp1 space2 exp2)  `(,exp1 ,@exp2)))
		(*parser <epsilon>)
		(*disj 2)
	 done))



(define funCallHelper (lambda (func args) 
	(if (not (null? args)) 
		(funCallHelper `(,func  ,@(car args)) (cdr args))
		func
		)))


(define <InfixFuncall> 
	(new 
		(*parser <commentOrSpaceforinfix>) *star


		(*parser <InfixParen>)
		(*parser <InfixSexprEscape>)
		(*parser <base>)
		(*disj 3)
			
	
		(*parser <commentOrSpaceforinfix>) *star
		(*caten 3)
		(*pack-with (lambda (space1 func space2) func))

		(*parser (char #\( ))
		(*parser <commentOrSpaceforinfix>) *star
		(*parser <InfixArgList>)
		(*parser <commentOrSpaceforinfix>) *star
		(*parser (char #\) ))

		(*caten 5)
		(*pack-with (lambda (paren1 space1 arglist space2 paren2) 
				 arglist))
		*star

		(*caten 2)
		(*pack-with (lambda (func args) 
			(funCallHelper func args)))
		
		done))



(define <InfixArrayGet> 
	(new
			
		(*parser <commentOrSpaceforinfix>) *star

		(*parser <InfixFuncall>)

		(*parser <commentOrSpaceforinfix>) *star
		(*caten 3)
		(*pack-with (lambda (space1 exp space2)   exp))

		(*parser (char #\[ ))
	
		(*parser <commentOrSpaceforinfix>) *star
		(*delayed (lambda () <InfixExpression>))
		(*parser <commentOrSpaceforinfix>) *star

		(*parser (char #\] ))

		(*caten 5)
		(*pack-with (lambda (paren1 space1 exp space2 paren2) 
				 (list (string->symbol "vector-ref") exp)))
		*star
		(*caten 2)
		(*pack-with (lambda (exp1 exp2) 
			(toPrefix exp1 exp2)))

	 done))



(define <InfixPow>
	(new 	
		(*parser <commentOrSpaceforinfix>) *star

		(*delayed (lambda () <InfixArrayGet>))
	

		(*parser <commentOrSpaceforinfix>) *star
		(*caten 3)
		(*pack-with (lambda (space1 exp space2)  exp))


		(*parser <PowerSymbol>)

		(*parser <commentOrSpaceforinfix>) *star

		(*delayed (lambda () <InfixArrayGet>))

		(*parser <commentOrSpaceforinfix>) *star
		(*caten 4)
			(*pack-with (lambda ( op space1 exp space2) 
				 (list (string->symbol "expt") exp)))
		*star

		(*caten 2)
		(*pack-with (lambda (exp1 exp2) 
			(stillPrefix exp1 exp2)))

	done))

(define <InfixMulDiv> 
	(new 	
		(*parser <commentOrSpaceforinfix>) *star
		(*parser <InfixPow>)
		(*parser <commentOrSpaceforinfix>) *star
		(*caten 3)
		(*pack-with (lambda (space1 exp space2)  exp))

		(*parser (char #\* ))
		(*parser (char #\/ ))
		(*disj 2)

		(*parser <commentOrSpaceforinfix>) *star
		(*parser <InfixPow>)
		(*parser <commentOrSpaceforinfix>) *star

		(*caten 4)
		(*pack-with (lambda ( op space1 exp space2) 
				 (list (string->symbol (string op)) exp)))
		*star
		(*caten 2)
		(*pack-with (lambda (exp1 exp2) 
			(toPrefix exp1 exp2)))

	done))

(define <InfixAddSub> 
	(new 	
		(*parser <commentOrSpaceforinfix>) *star
		(*parser <InfixMulDiv>)
		(*parser <commentOrSpaceforinfix>) *star
		(*caten 3)
		(*pack-with (lambda (space1 exp space2)  exp))

		(*parser (char #\-))
		(*parser (char #\+))
		(*disj 2)

		(*parser <commentOrSpaceforinfix>) *star
		
		(*parser <InfixMulDiv>)
	
		(*parser <commentOrSpaceforinfix>) *star
		(*caten 4)
		(*pack-with (lambda ( op  space1 exp space2 ) 
				 (list (string->symbol (string op)) exp)))
		*star
		(*caten 2)
		(*pack-with (lambda (exp1 exp2)
			(toPrefix exp1 exp2)))
	done))



(define <InfixExpression> 
	(new
		(*parser <InfixAddSub>)

	 done))

(define <InfixExtension>
	(new 
		(*parser <commentOrSpace>) *star
		(*delayed (lambda () <InfixPrefixExtensionPrefix>))
		(*parser <commentOrSpaceforinfix>) *star
		(*delayed (lambda () <InfixExpression>))
		(*parser <commentOrSpaceforinfix>) *star
		(*caten 5)
		(*pack-with (lambda (space1 sign space2 exp space3) exp))
		done)
	)

(define <Sexpr> 
	(new 
		(*parser <commentOrSpace>) *star

		(*parser <Boolean>)
		(*parser <Char>)
		(*parser <String>)
		(*parser <NumberWithOutSymbolAfter>)
		(*parser <Symbol>)
		(*parser <ProperList>)
		(*parser <ImproperList>)
		(*parser <Vector>)
		(*parser <Quoted>)
		(*parser <QuasiQuoted>)
		(*parser <Unquoted>)
		(*parser <UnquoteAndSpliced>)
		(*parser <InfixExtension>)
		(*disj 13)
		(*parser <commentOrSpace>) *star
		(*caten 3)
		(*pack-with (lambda (space exp space2) exp))
	done))






;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;;;;;;; Assignment 2 Starts here ;;;;;;;;;;

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define *void-object* (if #f #f))

(define with
	(lambda (x f) (apply f x)))

(define *reserved-words*
	'(and begin cond define do else if lambda
	let let* letrec or quasiquote unquote
		unquote-splicing quote set!))


;;; qq.scm
;;; A naive, one-level quasiquote implementation + optimizations
;;;
;;; Programmer: Mayer Goldberg, 2016


;;;

(define ^quote?
  (lambda (tag)
    (lambda (e)
      (and (pair? e)
	   (eq? (car e) tag)
	   (pair? (cdr e))
	   (null? (cddr e))))))

(define quote? (^quote? 'quote))

(define unquote? (^quote? 'unquote))
(define unquote-splicing? (^quote? 'unquote-splicing))

(define const?
  (let ((simple-sexprs-predicates
	 (list boolean? char? number? string?)))
    (lambda (e)
      (or (ormap (lambda (p?) (p? e))
		 simple-sexprs-predicates)
	  (quote? e)))))

(define quotify
  (lambda (e)
    (if (or (null? e)
	    (pair? e)
	    (symbol? e)
	    (vector? e))
	`',e
	e)))

(define unquotify
  (lambda (e)
    (if (quote? e)
	(cadr e)
	e)))

(define const-pair?
  (lambda (e)
    (and (quote? e)
	 (pair? (cadr e)))))

(define expand-qq
  (letrec ((expand-qq
	    (lambda (e)
	      (cond ((unquote? e) (cadr e))
		    ((unquote-splicing? e)
		     (error 'expand-qq
		       "unquote-splicing here makes no sense!"))
		    ((pair? e)
		     (let ((a (car e))
			   (b (cdr e)))
		       (cond ((unquote-splicing? a)
			      `(append ,(cadr a) ,(expand-qq b)))
			     ((unquote-splicing? b)
			      `(cons ,(expand-qq a) ,(cadr b)))
			     (else `(cons ,(expand-qq a) ,(expand-qq b))))))
		    ((vector? e) `(list->vector ,(expand-qq (vector->list e))))
		    ((or (null? e) (symbol? e)) `',e)
		    (else e))))
	   (optimize-qq-expansion (lambda (e) (optimizer e (lambda () e))))
	   (optimizer
	    (compose-patterns
	     (pattern-rule
	      `(append ,(? 'e) '())
	      (lambda (e) (optimize-qq-expansion e)))
	     (pattern-rule
	      `(append ,(? 'c1 const-pair?) (cons ,(? 'c2 const?) ,(? 'e)))
	      (lambda (c1 c2 e)
		(let ((c (quotify `(,@(unquotify c1) ,(unquotify c2))))
		      (e (optimize-qq-expansion e)))
		  (optimize-qq-expansion `(append ,c ,e)))))
	     (pattern-rule
	      `(append ,(? 'c1 const-pair?) ,(? 'c2 const-pair?))
	      (lambda (c1 c2)
		(let ((c (quotify (append (unquotify c1) (unquotify c2)))))
		  c)))
	     (pattern-rule
	      `(append ,(? 'e1) ,(? 'e2))
	      (lambda (e1 e2)
		(let ((e1 (optimize-qq-expansion e1))
		      (e2 (optimize-qq-expansion e2)))
		  `(append ,e1 ,e2))))
	     (pattern-rule
	      `(cons ,(? 'c1 const?) (cons ,(? 'c2 const?) ,(? 'e)))
	      (lambda (c1 c2 e)
		(let ((c (quotify (list (unquotify c1) (unquotify c2))))
		      (e (optimize-qq-expansion e)))
		  (optimize-qq-expansion `(append ,c ,e)))))
	     (pattern-rule
	      `(cons ,(? 'e1) ,(? 'e2))
	      (lambda (e1 e2)
		(let ((e1 (optimize-qq-expansion e1))
		      (e2 (optimize-qq-expansion e2)))
		  (if (and (const? e1) (const? e2))
		      (quotify (cons (unquotify e1) (unquotify e2)))
		      `(cons ,e1 ,e2))))))))
    (lambda (e)
      (optimize-qq-expansion
       (expand-qq e)))))




;;;;;predicates

(define is-const? (lambda (exp) 
	(or (number? exp)
		(string? exp)
		(boolean? exp)
		(char? exp)
		(vector? exp)
	)))



(define notSpecial? (lambda (exp) 
		(not (ormap (lambda (x) (equal? exp x)) *reserved-words*))))

(define var? (lambda (exp)
	(and (symbol? exp) notSpecial?)))

(define listofLists? (lambda (newlst) 
		(cond ((null? newlst) #t)
			  ((and (list? (car newlst)) (not (>  (length (car newlst)) 1)))  #f)
			  (else (listofLists? (cdr newlst))))))
	


(define notNull? (lambda (exp) (and (not (null? exp)) (not (null? (car exp))))))

(define dupInList? (lambda (lst) 
			(cond ((null? lst) #t)
				  ((member (car lst) (cdr lst)) #f)
				  (else (dupInList? (cdr lst))))))


(define dupImProperList? (lambda (lst) 
	(let ((arranged (arrangeArgList lst)))
	(dupInList? (append (car arranged)  (cdr arranged))))))

;;begin

(define make-begin (lambda (first rest) 
				`(begin ,first ,@rest)))


(define arrangeBegin
			 (lambda (lst)
			 		(if (null? lst) '()

			 			(if (and (list? (car lst)) (equal? 'begin (caar lst))) `( ,@(arrangeBegin (cdar lst)) ,@(arrangeBegin (cdr lst)))
			 				(cons (car lst) (arrangeBegin (cdr lst)))
			 			))))


;;;;lambda-optional procedures

(define checkList (lambda (lst) 
	 (and (pair? lst) (not (list? lst)))))

(define firstlist (lambda (lst) 
		(if (null? (cdr lst)) '()   
			(cons (car lst) (firstlist (cdr lst))))))

(define restlist (lambda (lst) 
	(if (null? (cdr lst)) (car lst)  
			(restlist (cdr lst)))))


(define arrangeArgList (lambda (theList) 
		(letrec ((argsSplitter (lambda (lst) 
			 (if (not (pair? lst))  (list lst)
				(cons (car lst) (argsSplitter (cdr lst)))))))
			
			(let ((newlst (argsSplitter theList))) 
				`(,(firstlist newlst) ,(restlist newlst))))))

;;;;;;Macro


(define mitMacro (lambda (lambdaParen exp rest-exps)
			 `(define  ,(car lambdaParen) (lambda ,(cdr lambdaParen) ,(make-begin exp rest-exps)))))


(define andMacro (lambda (exprs) 
	(cond 
			((null? exprs) #t)
		 	((null? (cdr exprs)) (car exprs))	
			(else `(if ,(car exprs) ,(andMacro (cdr exprs)) #f)))))


(define condMacroHelper (lambda (exp) 
	(if (< (length exp) 2) 
			(car exp)
			(make-begin (car exp) (cdr exp)))))


(define condMacro (lambda (exprs)

	(cond   
			((eq? (caar exprs) 'else) (condMacroHelper (cdar exprs)))
		 	((null? (cdr exprs)) `(if ,(caar exprs) ,(condMacroHelper (cdar exprs))))
			(else `(if ,(caar exprs) ,(condMacroHelper (cdar exprs)) ,(condMacro (cdr exprs)))))))


;;; let procedure helper
(define listVars (lambda (lst)  
		(map car lst)))

(define listValues (lambda (lst)  
		(map cadr lst)))

(define listVarsforLetrec (lambda (lst)  
		(map (lambda (var) (list (car var) #f)) lst)))

(define makeBodyOfLetrec (lambda (vars vals exprs)
	(let ((setList (map (lambda (var val) `(set! ,var ,val)) vars vals)))
		`(,@setList ((lambda () ,@exprs)))))) 

;;;; 'let' macros


(define letMacro (lambda (vars exprs)
			(let ((varibles (listVars vars))
					(values (listValues vars)))
				 `((lambda ,varibles ,@exprs) ,@values))))


(define letStarMacro (lambda (vars exprs) 
			(let ((varibles (listVars vars))
					(values (listValues vars)))
				(cond ((null? vars) (letMacro vars exprs))
					((null? (cdr vars)) `(let ((,(car varibles) ,(car values))) ,@exprs))
					(else `(let ((,(car varibles) ,(car values))) (let* ,(cdr vars) ,@exprs)))))))


(define letrecMacro (lambda (vars exprs)
			(let ((varibles (listVars vars))
					(values (listValues vars))) 
					`(let ,(listVarsforLetrec vars)  ,@(makeBodyOfLetrec varibles values exprs)))
				))


(define parse  
	(let ((run 

	(compose-patterns

			(pattern-rule (? 'const is-const?) (lambda (e) `(const ,e)))
			(pattern-rule `(quote ,(? 'quoted )) (lambda (e) `(const ,e)))
			(pattern-rule (? 'v var?) (lambda (v) `(var ,v)))
			(pattern-rule
				`(if ,(? 'test) ,(? 'dit))
					(lambda (test dit) `(if3 ,(parse test) ,(parse dit) (const ,*void-object*))))
			(pattern-rule
				`(if ,(? 'test) ,(? 'dit) ,(? 'dif))
					(lambda (test dit dif) `(if3 ,(parse test) ,(parse dit) ,(parse dif))))

			(pattern-rule
				`(or  . ,(? 'expr))
					(lambda (expr) (cond ((null? expr) (parse #f))
										((null? (cdr expr)) (parse (car expr)))
						(else `(or (,@(map parse expr)))))))

			(pattern-rule `(lambda ,(? 'args list? dupInList?) ,(? 'body-first) . ,(? 'body-rest)) 
					(lambda (args body-first body-rest) 
								`(lambda-simple ,args  ,(parse (make-begin body-first body-rest)))))

			(pattern-rule `(lambda ,(? 'args checkList dupImProperList?) ,(? 'body-first) . ,(? 'body-rest)) 
					(lambda (args body-first body-rest) 
							`(lambda-opt ,(car (arrangeArgList args)) ,(cadr (arrangeArgList args))  ,(parse (make-begin body-first body-rest)))))
			
			(pattern-rule `(lambda ,(? 'args var?) ,(? 'body-first) . ,(? 'body-rest)) 
					(lambda (args body-first body-rest) 
								`(lambda-var ,args ,(parse (make-begin body-first body-rest)))))

			(pattern-rule
				`(define ,(? 'var var?) ,(? 'exp) . ,(? 'rest-exps))
					(lambda (var exp rest-exps) 
					 `(def ,(parse var) ,(parse (make-begin exp rest-exps)))))


			(pattern-rule
				`(,(? 'op notSpecial?) . ,(? 'exprs))
					(lambda (op exprs) `(applic ,(parse op) (,@(map parse exprs)))))


			(pattern-rule
				`(begin . ,(? 'exps))
					(lambda (exps) (let ((arrangeExps (arrangeBegin exps)))
						(cond 
								((null? exps)  `(const ,*void-object*)) 
								((null? (cdr exps)) (parse (car exps)))
							 (else `(seq ,(map parse arrangeExps)))))))


			(pattern-rule
				`(define ,(? 'lambdaParen pair?) ,(? 'exp) . ,(? 'rest-exps))
					(lambda  (lambdaParen exp rest-exps) (parse (mitMacro lambdaParen exp rest-exps))))

			(pattern-rule
				`(and  . ,(? 'exprs))
					(lambda (exprs) (parse (andMacro exprs))))

			(pattern-rule
				`(cond  . ,(? 'exprs notNull? listofLists?))
					(lambda (exprs) (parse (condMacro exprs))))

			(pattern-rule
				`(let  ,(? 'vars listofLists?) ,(? 'body-first) . ,(? 'body-rest)) 
					(lambda (vars body-first body-rest) (parse (letMacro vars (cons body-first body-rest)))))

			(pattern-rule
				`(let*  ,(? 'vars listofLists?) ,(? 'body-first) . ,(? 'body-rest)) 
					(lambda (vars body-first body-rest) (parse (letStarMacro vars (cons body-first body-rest)))))

			(pattern-rule
				`(letrec  ,(? 'vars listofLists?) ,(? 'body-first) . ,(? 'body-rest)) 
					(lambda (vars body-first body-rest) (parse (letrecMacro vars (cons body-first body-rest)))))

			(pattern-rule
				`(set!  ,(? 'var var?) ,(? 'val)) 
					(lambda (var val) `(set ,(parse var) ,(parse val))))

			(pattern-rule
				`(,'quasiquote  ,(? 'exp)) 
					(lambda (exp) (parse (expand-qq exp))))

	)))
	(lambda (exp) (run exp 
					(lambda ()
						(error 'parse (format "no match for ~s" exp)))))))





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;; Assignment 3 Starts here ;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;



;***********************************************************************************
;;;;;;;;;;;;;;; "Eliminating nested define expressions" Starts here ;;;;;;;;;;;;;;;;
;***********************************************************************************

	

(define carNotNull?  (lambda (e)
		(and (pair? e) (pair? (car e)))))


(define lambda-simple? (lambda (exp)
			(equal? (car exp) 'lambda-simple)
			))

(define lambda-opt? (lambda (exp) 
			(equal? (car exp) 'lambda-opt)
			))

(define lambda-var? (lambda (exp)
			(equal? (car exp) 'lambda-var)
			))

(define lambda? (lambda (exp)
		(or (lambda-simple? exp) (lambda-opt? exp) (lambda-var? exp))))


(define mayerCPS 
	(lambda (pes ret)
			(if (null? pes) (ret '() '())
				(mayerCPS (cdr pes)
					(lambda (ds es)
						(cond ((and (carNotNull? pes) (equal? (caar pes) 'def))
									(ret (cons (car pes) ds) es ))
							   (else (ret ds (cons (car pes) es) ))))))))

(define collectDefsExps (lambda (exp)
	(mayerCPS (cadr exp) (lambda (ds es) (cons ds es)))))


(define listVarsforDefines (lambda (vars bodies)  
		(map (lambda (var body) `(set ,var ,body)) vars bodies)))

(define genFalseList (lambda (vars) 
	(map (lambda (x) `(const #f)) vars)))



(define removeNested 
	(lambda (ds-es-PairExp op)
		(let ((vars (map cadr (car ds-es-PairExp)))
			(onlyVarsNames (map cadadr (car ds-es-PairExp)))
			(vars-body (map caddr (car ds-es-PairExp)))
			(rest-body (cdr ds-es-PairExp)))
			
				`(applic (lambda-simple ,onlyVarsNames 
						(seq 
							,(append (listVarsforDefines vars vars-body) (op rest-body))))
					,(genFalseList vars)))))


(define fixSeq  
	(lambda (seq-exp op) 
			(let ((ds-es-Pair (collectDefsExps seq-exp)))
				(if (null? (car ds-es-Pair)) `(seq ,@(op (cdr seq-exp)))
					(removeNested  ds-es-Pair op)))))


(define oper  
	(lambda (exp) 
			(cond ((null? exp) '())
				  ((not (pair? exp)) exp)
				  ((and (list? exp) (or (lambda-simple? exp) (lambda-var? exp)) (equal? (caaddr exp) 'seq)) `(,(car exp) ,(cadr exp) ,(fixSeq (caddr exp) oper)))
				  ((and (list? exp) (lambda-opt? exp) (equal? (car (cadddr exp)) 'seq)) `(,(car exp) ,(cadr exp) ,(caddr exp) ,(fixSeq (cadddr exp) oper)))
				  (else (cons (oper (car exp)) (oper (cdr exp)))))))

(define eliminate-nested-defines
	(lambda (exp)
		(if (equal? exp (oper exp))
			exp
			(eliminate-nested-defines (oper exp)))))


;***********************************************************************************
;;;;;;;;;;;;;;;; "Eliminating nested define expressions" ends here ;;;;;;;;;;;;;;;;;
;***********************************************************************************


;***********************************************************************************
;;;;;;;;;;;;;;;;; "Removing redundant applications" Starts here ;;;;;;;;;;;;;;;;;;
;***********************************************************************************


;exp = (applic (lambda-simple () ...) ()) 
;(cadr exp) = (lambda-simple () ...)
;(caddr ans) = 'body'
(define fixEmptyLambda (lambda (exp op)

	(op (caddr (cadr exp)))))


(define applic-empty-lambda? 
	(lambda (exp)
		(and 
			(list? exp)
			(equal? (car exp) 'applic)
			(equal? (caadr exp) 'lambda-simple)
			(null? (cadadr exp)))))

(define remove-applic-lambda-nil
 	(lambda (exp) 
			(cond ((null? exp) '())
				  ((not (pair? exp)) exp)
				  ((applic-empty-lambda? exp) (fixEmptyLambda exp remove-applic-lambda-nil))
				  (else (cons (remove-applic-lambda-nil (car exp)) (remove-applic-lambda-nil (cdr exp)))))))

;***********************************************************************************
;;;;;;;;;;;;;;;;;;; "Removing redundant applications" ends here ;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************


;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;; "Boxing of variables" Starts here ;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************


(define isParamBound? 
	(lambda (param body bound)
			(cond
				((null? body) #f)
				((not (list? body)) #f)
				((and bound (list? body) (equal? (car body) 'var) (equal? (cadr body) param)) #t)
				((and (list?  body) (lambda?  body)) 
						(let ((pars (if (lambda-opt? body)
										'(,(caddr body))
										(if (lambda-var? body)
											`(,(cadr body))
											(cadr body)))))
							(if (member param pars)  #f 
								(isParamBound? param (get-body body) #t))))
				((ListAndNotNull? body) 
						(or (isParamBound? param (car body) bound) (isParamBound? param (cdr body) bound)))
				(else (isParamBound? param (cdr body) bound)))))

(define ListAndNotNull?  (lambda (lst) 
	(and (list? lst) (not (null?  lst)))))


(define get-occurrence? (lambda (param body) 
			(cond 
				((null? body) #f)
				((not (list? body)) #f)
				((and (list? body) (equal? (car body) 'var) (equal? (cadr body) param)) #t)
				((and (list?  body) (lambda?  body)) 
						(let ((pars (if (lambda-opt? body)
										'(,(caddr body))
										(if (lambda-var? body)
											`(,(cadr body))
											(cadr body)))))
							(if (member param pars)  #f 
								(get-occurrence? param (get-body body)))))
				((and (list? body) (equal? (car body) 'set)) (get-occurrence? param (cddr body)))
				((ListAndNotNull? body) 
						(or (get-occurrence? param (car body)) (get-occurrence? param (cdr body))))
				(else (get-occurrence? param (cdr body))))))

(define set-occurrence? (lambda (param body) 
				(cond 
				((null? body) #f)
				((not (pair? body)) #f)
				((and (list? body) (equal? (car body) 'set) (equal? (caadr body) 'var) (equal? (cadadr body) param)) #t)
				((and (list?  body) (lambda?  body))
						(let ((pars (if (lambda-opt? body)
										'(,(caddr body))
										(if (lambda-var? body)
											`(,(cadr body))
											(cadr body)))))
							(if (member param pars)  #f 
								(set-occurrence? param (get-body body)))))
				((ListAndNotNull? body) 
						(or (set-occurrence? param (car body)) (set-occurrence? param (cdr body))))
				(else (set-occurrence? param (cdr body))))))

(define replace-occurrence 
	(lambda (param body bound) 
			(cond 
				  ((null? body) '())
				  ((not (pair? body)) body)
				  ((and (list?  body) (lambda?  body))
				  		(let ((pars (if (lambda-opt? body)
										'(,(caddr body))
										(if (lambda-var? body)
											`(,(cadr body))
											(cadr body))))) 
							(if  (member param pars) body
								(if (lambda-opt? body)
								 `(,(car body) ,(cadr body) ,(caddr body) ,@(replace-occurrence param (get-body body) #t))
								 `(,(car body) ,(cadr body) ,@(replace-occurrence param (get-body body) #t))))))
				  ((and bound (list? body) (equal? (car body) 'var) (equal? (cadr body) param)) `(box-get ,body))
				  ((and bound (list? body) (equal? (car body) 'set) (equal? (caadr body) 'var) (equal? (cadadr body) param)) 
				  						`(box-set (var ,param) ,(replace-occurrence param (caddr body) bound)))

				  ((list?  body)  (map (lambda (exp) (replace-occurrence param exp bound)) body))
				  ((pair?  body) (cons (replace-occurrence param (car body) bound) (replace-occurrence param (cdr body) bound)))
				  (else (cons (car  body) (replace-occurrence param (cdr body) bound))))))



;;in = one paramter to check ,  out =  updated body(and maybe #t or #f if the paramter pass the exam)
;; if the paramter didn't change the body, return the old body
(define examingSingleParam (lambda (param body)   
		(if (and (isParamBound? param body #f) (get-occurrence? param body) (set-occurrence? param body))
				(cons #t (replace-occurrence param body #t))
				(cons #f body))))

;;;examingParams return a pair , car = chosen params cdr = updated body
(define examingParams (lambda (params body chosen-list)
		(if (null? params) (cons chosen-list body)
			(let* ((after-exam (examingSingleParam (car params) body))
				   (add-to-chosenlist? (car after-exam))
				   (new-body (cdr after-exam)))
				(examingParams (cdr params) new-body (if add-to-chosenlist? (cons (car params) chosen-list) chosen-list))))))


(define make-set-list (lambda (params) 
		(map (lambda (param) `(set (var ,param) (box (var ,param)))) params)))


(define get-body (lambda (exp)
	(if (lambda-opt? exp) 
		(cdddr exp) 
		(cddr exp))))

(define get-params (lambda (exp) 
	(cond 
		((lambda-simple? exp) (cadr exp))
		((lambda-var? exp) `(,(cadr exp)))
		(else (append (cadr exp) (list (caddr exp)))))))


(define null-body (lambda (new-body chosen-params)
	(if (null? new-body)
		'Nikita-Revenge
		(if (null? (car new-body))
			'bla
			(if (equal? (caar new-body) 'seq) 
					`(,(caar new-body) (,@(make-set-list chosen-params) ,@(cadar new-body)))
					`(seq (,@(make-set-list chosen-params)  ,@new-body)))))))

(define examingLambda 
	(lambda (exp) 
		(let* ((params (get-params exp))
			(body (get-body exp)) 
			(body-after-examing (examingParams params body '() ))
			(chosen-params (reverse (car body-after-examing)))
			(new-body (cdr body-after-examing))
			(seq-list (null-body new-body chosen-params)))	
			(if (null? chosen-params)
				exp 
				(cond 
					  ((lambda-simple? exp) `( ,(car exp) ,params ,seq-list))
					  ((lambda-opt? exp) `( ,(car exp) ,(cadr exp) ,(caddr exp)  ,seq-list))
					  (else `( ,(car exp) ,(cadr exp) ,seq-list))	)))))


(define box-set 
	(lambda (exp)  
			(cond 
				  ((null? exp) '())
				  ((not (pair? exp)) exp)
				  ((and (list? exp) (lambda? exp))
				   	(let ((fixed-lambda-exp (examingLambda exp)))
				   		(if (or (lambda-simple? fixed-lambda-exp) (lambda-var? fixed-lambda-exp)) 
				   			`(,(car fixed-lambda-exp) ,(cadr fixed-lambda-exp) ,@(box-set (cddr fixed-lambda-exp)))
				   			`(,(car fixed-lambda-exp) ,(cadr fixed-lambda-exp) ,(caddr fixed-lambda-exp) ,@(box-set (cdddr fixed-lambda-exp))))))
				 
				  (else (cons (box-set (car exp)) (box-set  (cdr exp)))))))
			





;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;; "Boxing of variables" ends here ;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************



;***********************************************************************************
;;;;;;;;;; "annotating Variables with their Lexical address" Starts here ;;;;;;;;;;;
;***********************************************************************************


(define init-counter 0)

;;;;;; expanding the environment , returning a list ---> car = current parameters.  cdr = bound(old env)
;;;;;; for example , if param = (a b c) , then the procedure would return (((a.0) (b.1) (c.2)) old-env)
(define expand-env 
	(lambda (env param) 
		(letrec ((loop (lambda (params count) 
					(if (null? params) '()
			(cons (cons (car params) count) (loop (cdr params) (+ count 1)))))))

			(cons (loop param init-counter) env))))


;;;;;;;;;; annotate (pvar\bvar\fvar) ;;;;;;;;;;;;;;;;

(define find-minor (lambda (var-name param-list) 
			(cond 
				((null? param-list) #f)
				((equal? (caar param-list) var-name) (cdar param-list))
				(else (find-minor var-name (cdr param-list))))))


(define is-it-bound (lambda (var-name env major)
			(let ((minor (if (null? env) #f (find-minor var-name (car env)))))
			(cond 
				((null? env) #f)
				(minor (list major minor))
				(else (is-it-bound var-name (cdr env) (+ major 1)))))))



(define what-var-is-it  
	(lambda (var-name env) 
		(if (null? env) `(fvar ,var-name)
			(let ((param-varible   (find-minor var-name (car env)))
				  (bound-varible (if (null? (cdr env)) #f (is-it-bound var-name (cdr env) init-counter))))

			(cond (param-varible `(pvar ,var-name ,param-varible))
				 (bound-varible `(bvar ,var-name  ,@bound-varible))
				 (else `(fvar ,var-name)))))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


(define  lex-add-parse  
	(lambda (exp env)
		(let ((run 

		(compose-patterns


			(pattern-rule 
					`(box-get ,(? 'var)) 
						(lambda (var)  `(box-get ,(lex-add-parse var env))))


			(pattern-rule 
					`(box-set ,(? 'var1) ,(? 'var2)) 
						(lambda (var1 var2) `(box-set ,(lex-add-parse var1 env) ,(lex-add-parse var2 env))))

			(pattern-rule 
					`(box ,(? 'var)) 
						(lambda (var)  `(box ,(lex-add-parse var env))))

			(pattern-rule 
					`(var ,(? 'var-name)) 
						(lambda (var-name)  (what-var-is-it var-name env)))


			(pattern-rule `(const ,(? 'const)) (lambda (e) `(const ,e)))

	
			(pattern-rule
				`(if3 ,(? 'test) ,(? 'dit) ,(? 'dif))
					(lambda (test dit dif) `(if3 ,(lex-add-parse test env) ,(lex-add-parse dit env) ,(lex-add-parse dif env))))

			(pattern-rule
				`(or  ,(? 'expr))
					(lambda (exprs) 
						 `(or (,@(map (lambda (e)
						 					(lex-add-parse e env)) exprs)))))

			(pattern-rule 
					`(lambda-simple ,(? 'param) ,(? 'body)) 
						(lambda (param body) 
								`(lambda-simple ,param ,(lex-add-parse body (expand-env env param)))))	

			
			(pattern-rule 
				`(lambda-opt ,(? 'args) ,(? 'rest) ,(? 'body)) 
					(lambda (args rest body) 
							`(lambda-opt ,args ,rest ,(lex-add-parse body (expand-env env (append args (list rest)))))))
			
			(pattern-rule 
				`(lambda-var ,(? 'args ) ,(? 'body)) 
					(lambda (args body) 
								`(lambda-var ,args ,(lex-add-parse body (expand-env env (list args))))))


			(pattern-rule
				`(def ,(? 'var) ,(? 'exps))
					(lambda (var exps) 
					 `(def ,(lex-add-parse var env) ,(lex-add-parse exps env))))


			(pattern-rule
				`(applic ,(? 'op )  ,(? 'exprs))
					(lambda (op exprs)
					 `(applic ,(lex-add-parse op env ) (,@(map (lambda (e) (lex-add-parse e env)) exprs)))))


			(pattern-rule
				`(seq ,(? 'exps))
					(lambda (exps) 	`(seq ,(map (lambda (e) (lex-add-parse e env)) exps))))


			(pattern-rule
				`(set  ,(? 'var ) ,(? 'val)) 
					(lambda (var val) `(set ,(lex-add-parse var env) ,(lex-add-parse val env))))

			)))
		 (run exp
					(lambda ()
							(error 'parse (format "Im not Nikita, you Nikita ~s" exp)))))))


(define pe->lex-pe (lambda (exp)

		(lex-add-parse exp '())))




;***********************************************************************************
;;;;;;;;;; "annotating Variables with their Lexical address" ends here ;;;;;;;;;;;;;
;***********************************************************************************



;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;; "Annotating tail calls" starts here ;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************


(define arrange-exps-list-forTc (lambda (lst suspected op)
				(if (null? (cdr lst))
					`(,(op (car lst) suspected))
					(cons (op (car lst) #f) (arrange-exps-list-forTc (cdr lst) suspected op)))))


(define  annotate-tc-parse  
	(lambda (exp suspected)
		(let ((run 

		(compose-patterns


			(pattern-rule 
					`(box-get ,(? 'var)) 
						(lambda (var)  `(box-get ,(annotate-tc-parse var #f))))

			(pattern-rule 
					`(box-set ,(? 'var1) ,(? 'var2)) 
						(lambda (var1 var2) `(box-set ,(annotate-tc-parse var1 #f) ,(annotate-tc-parse var2 #f))))

			(pattern-rule 
					`(box ,(? 'var)) 
						(lambda (var)  `(box ,(annotate-tc-parse var #f))))

			(pattern-rule 
					`(var ,(? 'var-name)) 
						(lambda (var-name) `(var ,var-name)))

			(pattern-rule 
					`(pvar ,(? 'var-name) ,(? 'minor)) 
						(lambda (var-name minor) `(pvar ,var-name ,minor)))
			
			(pattern-rule 
					`(bvar ,(? 'var-name) ,(? 'major) ,(? 'minor)) 
						(lambda (var-name major minor) `(bvar ,var-name ,major ,minor)))

			(pattern-rule 
					`(fvar ,(? 'var-name)) 
						(lambda (var-name) `(fvar ,var-name)))


			(pattern-rule `(const ,(? 'const)) 
						(lambda (e) `(const ,e)))


			(pattern-rule
				`(if3 ,(? 'test) ,(? 'dit) ,(? 'dif))
					(lambda (test dit dif) `(if3 ,(annotate-tc-parse  test #f) ,(annotate-tc-parse  dit suspected) ,(annotate-tc-parse  dif suspected))))

			(pattern-rule
				`(or  ,(? 'expr))
					(lambda (exprs) 
						 `(or ,(arrange-exps-list-forTc exprs suspected annotate-tc-parse))))

			(pattern-rule 
					`(lambda-simple ,(? 'param) ,(? 'body)) 
						(lambda (param body) 
								`(lambda-simple ,param ,(annotate-tc-parse body #t))))	

			;;;;;;;;lambda-opt --> what to do with "rest"?
			(pattern-rule 
				`(lambda-opt ,(? 'args) ,(? 'rest) ,(? 'body)) 
					(lambda (args rest body) 
							`(lambda-opt ,args ,rest ,(annotate-tc-parse body #t))))
			
			(pattern-rule 
				`(lambda-var ,(? 'args ) ,(? 'body)) 
					(lambda (args body) 
								`(lambda-var ,args ,(annotate-tc-parse body #t))))


			(pattern-rule
				`(def ,(? 'var) ,(? 'exps))
					(lambda (var exps) 
					 `(def ,(annotate-tc-parse var #f) ,(annotate-tc-parse exps #f))))


			(pattern-rule
				`(applic ,(? 'op )  ,(? 'exprs))
					(lambda (op exprs)
						(if suspected
							`(tc-applic ,(annotate-tc-parse op #f) (,@(map (lambda (e) (annotate-tc-parse e #f)) exprs)))
					 		`(applic ,(annotate-tc-parse op #f) (,@(map (lambda (e) (annotate-tc-parse e #f)) exprs))))))

			(pattern-rule
				`(seq ,(? 'exps))
					(lambda (exprs) 
						 `(seq ,(arrange-exps-list-forTc exprs suspected annotate-tc-parse))))


			(pattern-rule
				`(set  ,(? 'var ) ,(? 'val)) 
					(lambda (var val) `(set ,(annotate-tc-parse var #f) ,(annotate-tc-parse val #f))))

			)))

		 (run exp
					(lambda ()
							(error 'parse (format "Tomer was here ~s" exp)))))))


(define annotate-tc (lambda (exp)
		(annotate-tc-parse exp #f)))







;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;; "Annotating tail calls" ends here ;;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************



;********************************************************************************************;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;********************************************************************************************;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;Final Project Starts here;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;********************************************************************************************;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;********************************************************************************************;

;;;auxilary funcs

(define printE (lambda (e) (newline) (display e) (newline) (newline)))

(define void? (lambda (exp) (equal? *void-object* exp)))

(define writeToFile ;;;;file  = new file to write into  , out = what to write(string)
  (lambda (file out)
    (let ((des (open-output-file file)))
      (display out des)
      (close-output-port des)
    )))

(define readFromFile
  (lambda (fileName)
    (let* ((file (open-input-file fileName))
           (output (read file))) 
       (close-input-port file)
      output)))


(define file->string 
	(lambda (in-file)
		(let ((in-port (open-input-file in-file)))
			(letrec ((run (lambda ()
				(let ((ch (read-char in-port)))
					(if (eof-object? ch)
						(begin (close-input-port in-port) '())
						(cons ch (run)))))))
				(list->string (run))))))


;;;;;CISC MACROS
(define call_malloc (lambda (num)
	(string-append "PUSH(IMM(" (number->string num) "));" n  "CALL (MALLOC);" n "DROP(1);" n 
	)))

(define n "\n")

(define CISC_comment (lambda (comment)
	(string-append n "/*************" comment "***********/" n)))

(define MACROS 
	(string-append 
	"#define SOB_NIL IND (CONSTARRAY)" n
	 "#define SOB_VOID INDD (CONSTARRAY,1)" n
	 "#define SOB_TRUE INDD (CONSTARRAY,2)" n
	 "#define SOB_FALSE INDD (CONSTARRAY,3)" n
	))

(define printC (lambda (label reg)
	(string-append n "SHOW(\"" label "\"," reg ");" n)
	))
;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;;;; "Constants Table starts here ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************


;;;SCHEME globals
(define const-address -1)
(define T_NIL "T_NIL_MESSI")
(define T_VOID "T_VOID_RONALDO")
(define T_BOOL0 "T_BOOL0_GERRARD")
(define T_BOOL1 "T_BOOL1_POGBA")

(define SCHEMEconstTable '())

(define get-costa-from-tagged (lambda (tagged) 
		(cadr tagged)
	))

(define get-address-from-tagged (lambda (tagged)
		(car tagged)
	))

(define get-repr-from-tagged  (lambda (tagged)
		(caddr tagged)
	))

(define get_string_address_from_tagged_symbol (lambda (tagged)  
	(caddr tagged)
	))


(define updateAddress (lambda ()
	(set! const-address (+ 1 const-address)) const-address))

(define resetAddress (lambda ()
	(set! const-address -1)
	))

(define dup? (lambda (val ans)
	(ormap (lambda (exp-lst) (equal? val (get-costa-from-tagged exp-lst))) ans)))




(define addIfNotDuplicate (lambda (val ans)  ;;;if we want to change the order of the constlist, we need to change that func
		(if (member val ans) 
			ans 
			(cons val ans))))

(define buildConstList (lambda (ast ans) 

	(cond 
		((null? ast) ans)
		((and (list? ast) (equal? (car ast) 'const)) (buildConstList (cdr ast) (addIfNotDuplicate (cadr ast) ans)))
		((list? ast) (buildConstList (car ast) (buildConstList (cdr ast) ans)))
		(else ans))

	))

(define make-number-tag (lambda (costa ans)
			(if (dup? costa ans)
				ans
				`(,@ans ,(list (updateAddress) costa  costa)))))

(define make-char-tag (lambda (costa ans)
			(if (dup? costa ans)
				ans
				`(,@ans ,(list (updateAddress) costa  (char->integer costa))))))



;;;;;vector&string-funcs

(define searchAdd (lambda (exp tagged-lst) 
	(if (equal? (get-costa-from-tagged (car tagged-lst)) exp) 
			(get-address-from-tagged (car tagged-lst))
			(searchAdd exp (cdr tagged-lst)))))


(define buildAddressList-Vector&String (lambda (lst tagged-lst) 
		(if (null? lst) '()
			(cons (searchAdd (car lst) tagged-lst) (buildAddressList-Vector&String (cdr lst) tagged-lst)))))

(define vector&string-tag (lambda (costa lst ans) 
		`(,@ans  ,(list (updateAddress) costa  `(,(length lst) ,@(buildAddressList-Vector&String lst ans))))))

(define symbol_tag (lambda (costa ans) 
	`(,@ans ,(list (updateAddress) costa (searchAdd (symbol->string costa) ans)))))

(define removeLast (lambda (lst) 
	(reverse (cdr (reverse lst)))))

;(define loop-lst-helper (lambda (lst collectList collectVals) (printE lst)
	
;		(if (null? lst) 
;			(append (reverse collectVals) collectList)
;			(loop-lst-helper (cdr lst) (cons lst collectList) (cons (car lst) collectVals))
;	)))


(define loop-lst-helper (lambda (lst collectList collectVals) 
	
		(if (null? lst) 
			(append (reverse collectVals) collectList)
			(if (not (pair? lst))  
				(loop-lst-helper '() collectList (cons  lst collectVals))

			(loop-lst-helper (cdr lst) (cons lst collectList) (cons (car lst) collectVals))
	))))

(define lst-tag (lambda (costa ans) 
		`(,@ans ,(list (updateAddress) costa `(,(searchAdd (car costa) ans)  ,(searchAdd (cdr costa) ans))))))

;;end vector and string funcs

(define taggingConstsHelper (lambda (costa ans) 
	(cond 
		((null? costa) ans)
		((void? costa) ans)
		((boolean? costa) ans)
		((number? costa) (make-number-tag costa ans))
		((char? costa)  (make-char-tag costa ans))
		((symbol? costa) (if (dup? costa ans) ans (symbol_tag costa (taggingConstsHelper (symbol->string costa) ans))))
		((string? costa) (if (dup? costa ans) ans (vector&string-tag costa (string->list costa) 
						(letrec ((loop-lst (lambda (lst ans) 
							(if (null? lst) ans 
								(loop-lst (cdr lst) (taggingConstsHelper (car lst) ans))))))
						(loop-lst (string->list costa) ans)))))
		((vector? costa) (if (dup? costa ans) ans (vector&string-tag costa (vector->list costa) 
			(letrec ((loop-lst (lambda (lst ans) 
						(if (null? lst) ans 
							(loop-lst (cdr lst) (taggingConstsHelper (car lst) ans))))))
					(loop-lst (vector->list costa) ans)))))
		((pair? costa) (if (dup? costa ans) ans (lst-tag costa
			(letrec ((loop-lst (lambda (lst ans) 
						(if (null? lst) ans 
							(loop-lst (cdr lst) (taggingConstsHelper (car lst) ans))))))
					(loop-lst (removeLast (loop-lst-helper costa '() '())) ans)))))

		(else costa))))

(define taggingConsts (lambda (constList ans)
	(if (null? constList) 
			ans
			(taggingConsts (cdr constList) (taggingConstsHelper (car constList) ans)))))

(define initConstTable (lambda ()
		(list 
			(list (updateAddress) '() T_NIL)
			(list (updateAddress) (if #f 'cr7) T_VOID)
			(list (updateAddress)  #t T_BOOL1)
			(list (updateAddress) #f T_BOOL0)		
	)))


;;code-gen-of-const_table part:
(define code_gen_constNil (lambda ()
	(string-append "CALL (MAKE_SOB_NIL);"  n "MOV (INDD(CONSTARRAY,0),R0);"
)))

(define code_gen_constVoid (lambda ()
	(string-append "CALL (MAKE_SOB_VOID);"  n "MOV(INDD(CONSTARRAY,1) , R0);")))

(define code_gen_constBool (lambda (exp)
	(if (get-costa-from-tagged exp)
	(string-append "PUSH (1);" n "CALL (MAKE_SOB_BOOL);" n "DROP(1);" n "MOV(INDD(CONSTARRAY,2) , R0);")
	(string-append "PUSH (0);" n "CALL (MAKE_SOB_BOOL);" n "DROP(1);" n "MOV(INDD(CONSTARRAY,3) , R0);"))))

(define code_gen_constChar (lambda (exp)
	(string-append "PUSH (" (number->string (get-repr-from-tagged exp)) ");" n
	 			   "CALL (MAKE_SOB_CHAR);" n "DROP (1);"  n 
	 			   "MOV(INDD(CONSTARRAY," (number->string (get-address-from-tagged exp)) ") , R0);")))


;;;changed by Nadav 4.3.2017
;(define code_gen_constStringOrVector_Helper (lambda (chars_lst) (printE chars_lst)
;	(if (null? chars_lst) ""
;		(string-append
;			"PUSH (INDD(CONSTARRAY," (number->string (car chars_lst)) "));" n
;			(code_gen_constStringOrVector_Helper (cdr chars_lst))))))


(define code_gen_constVector_Helper (lambda (chars_lst) 
	(if (null? chars_lst) ""
		(string-append
			"PUSH (INDD(CONSTARRAY," (number->string (car chars_lst)) "));" n
			(code_gen_constVector_Helper (cdr chars_lst))))))

(define code_gen_constString_Helper (lambda (chars_lst) 
	(if (null? chars_lst) ""
		(string-append

			"MOV(R1, (INDD(CONSTARRAY," (number->string (car chars_lst)) ")));" n
			"PUSH (INDD(R1, 1));" n
			(code_gen_constString_Helper (cdr chars_lst))))))




(define code_gen_constStringOrVector (lambda (exp type)
	(string-append 	
		(if (equal? "MAKE_SOB_STRING" type)
				(code_gen_constString_Helper (cdr (get-repr-from-tagged exp)))
				(code_gen_constVector_Helper (cdr (get-repr-from-tagged exp))))
				   "PUSH (" (number->string (car (get-repr-from-tagged exp))) ");" n
	 			   "CALL (" type ")"   n "DROP (" (number->string (car (get-repr-from-tagged exp))) ");"  n 
	 			   "MOV(INDD(CONSTARRAY," (number->string (get-address-from-tagged exp)) ") , R0);")))
;;end changes by nadav 4.3
(define code_gen_constNumber (lambda (exp)
	(string-append "PUSH (" (number->string (get-repr-from-tagged exp)) ");" n
	 			   "CALL (MAKE_SOB_INTEGER);" n "DROP (1);"  n 
	 			   "MOV(INDD(CONSTARRAY," (number->string (get-address-from-tagged exp)) ") , R0);")))


(define code_gen_constPair (lambda (exp) 
	(string-append "PUSH (INDD(CONSTARRAY," (number->string (cadr (get-repr-from-tagged exp))) "));" n
				   "PUSH (INDD(CONSTARRAY," (number->string (car (get-repr-from-tagged exp))) "));" n
				   "CALL (MAKE_SOB_PAIR);" n "DROP (2);"  n
				   "MOV(INDD(CONSTARRAY," (number->string (get-address-from-tagged exp)) ") , R0);")))


(define make_sob_symbol (lambda (str_add)
	(string-append 
		(call_malloc 2)
		"MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY," (number->string str_add) "));" n )))



(define code_gen_constSymbol (lambda (tagged_exp) 
	(string-append 
		(make_sob_symbol (get_string_address_from_tagged_symbol tagged_exp))
		"MOV (INDD (CONSTARRAY ," (number->string (get-address-from-tagged tagged_exp)) ") , R0);" n)))


(define code_gen_constFraction (lambda (exp)
	(string-append "PUSH (" (number->string (numerator (get-repr-from-tagged exp))) ");" n
				   "PUSH (" (number->string (denominator (get-repr-from-tagged exp))) ");" n
	 			   "CALL (MAKE_SOB_FRACTION);" n "DROP (2);"  n 
	 			   "MOV (INDD(CONSTARRAY," (number->string (get-address-from-tagged exp)) ") , R0);" n)))

(define code_gen_consts (lambda (tagged-exp) 
	(cond 
		((null? (get-costa-from-tagged tagged-exp)) (code_gen_constNil))
		((void? (get-costa-from-tagged tagged-exp)) (code_gen_constVoid))
		((boolean? (get-costa-from-tagged tagged-exp)) (code_gen_constBool tagged-exp))
		((char? (get-costa-from-tagged tagged-exp)) (code_gen_constChar tagged-exp))
		((symbol? (get-costa-from-tagged tagged-exp)) (code_gen_constSymbol tagged-exp))
		((string? (get-costa-from-tagged tagged-exp)) (code_gen_constStringOrVector tagged-exp "MAKE_SOB_STRING"))
		((integer? (get-costa-from-tagged tagged-exp)) (code_gen_constNumber tagged-exp))
		((number? (get-costa-from-tagged tagged-exp)) (code_gen_constFraction tagged-exp))
		((vector? (get-costa-from-tagged tagged-exp)) (code_gen_constStringOrVector tagged-exp "MAKE_SOB_VECTOR"))
		((pair? (get-costa-from-tagged tagged-exp)) (code_gen_constPair tagged-exp))
)))

(define code_gen_consts_helper (lambda (constTable)
	(if (null? constTable) ""
		(string-append (code_gen_consts (car constTable)) n (code_gen_consts_helper (cdr constTable))))))


(define buildCiscConstTable 
	(lambda (constTable)
		;;allocate memory for const table
		(string-append 
			(CISC_comment "init Const-Table starts here")
			(call_malloc (length constTable))
			"MOV (CONSTARRAY,R0);" n (code_gen_consts_helper constTable)
			(CISC_comment "init Const-Table ends here"))))



(define buildConstantTable (lambda (ast) 
	(let* ((constList (buildConstList ast '()))
		(ciscConstTable 
		  			(begin 
		  				(set! SCHEMEconstTable (taggingConsts constList (initConstTable)))
		  		(buildCiscConstTable SCHEMEconstTable))))
	
		  				 ;;ciscConstTable is a STRING!
		;(resetAddress) ;;;;not belong here
		ciscConstTable
	)))


;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;;;; "Constants Table ends here ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************



;*****************************************************************************************************************
;;;;;;;;;;;;;;;;;;;;;;;; "Symbol Table(represntitive String-linked-list) starts here" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;*****************************************************************************************************************



(define SCHEMESymbolTable '())

(define SymbolsLookUp (lambda (tagged_const_lst ans)
	(if (null? tagged_const_lst) ans
		(if (symbol? (get-costa-from-tagged (car tagged_const_lst)))
				(SymbolsLookUp (cdr tagged_const_lst) (append ans (list (car tagged_const_lst))))
				(SymbolsLookUp (cdr tagged_const_lst) ans)))))

(define buildCISCSymbolTableHelper (lambda (address_list)
		(if (null? address_list) 

				(string-append 
					(call_malloc 1)
					"MOV (SYMBOLTABLE,R7);" n )
				(string-append
					(call_malloc 2)
					"MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,"  (number->string (car address_list))  "));" n
					"MOV (INDD (R0,1) , R7);" n
					"MOV (R7, R0);" n
					(buildCISCSymbolTableHelper (cdr address_list))))))

(define buildCISCSymbolTable (lambda (lst) 
	(if (null? lst)
		(string-append "MOV (SYMBOLTABLE,R7);" n )
		(buildCISCSymbolTableHelper lst))))

(define buildSymbolTable (lambda () 
	(let* ((symbol_lst  (SymbolsLookUp SCHEMEconstTable '()))
		 (CISC_symbol_table 
		 	(begin 
			 	(set! SCHEMESymbolTable symbol_lst)
			 	(buildCISCSymbolTable (reverse (map get_string_address_from_tagged_symbol SCHEMESymbolTable))))))
	(string-append 
		(CISC_comment "symbol table starts: ")
		"MOV (R7,SOB_NIL);" n 
		CISC_symbol_table
		(CISC_comment "symbol table ends: ")))))

;*****************************************************************************************************************
;;;;;;;;;;;;;;;;;;;;;;;; "Symbol Table(represntitive String-linked-list) ends here" ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;*****************************************************************************************************************



;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;;;; "RUNTIME SUPPORT Starts here ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************



(define empty_env "0x1A85")

(define lookupFvar (lambda (var_name fvar_table) 
	(if (equal? var_name (cadr (car fvar_table)))
		(get-address-from-tagged (car fvar_table))
		(lookupFvar var_name (cdr fvar_table))
	)))



(define RS_makeClosure (lambda (body_label finish_label fvar_address) 
	(string-append 
		(call_malloc 3)
		"MOV(INDD(R0,0),T_CLOSURE);" n 
		"MOV (INDD(R0,1)," empty_env ");" n 
		"MOV(INDD(R0,2),LABEL(" body_label "));" n 
		"MOV(INDD(FVARARRAY," (number->string fvar_address) "),R0);" n
		"JUMP (" finish_label ");" n 
	)))

(define RS_Closure_Code (lambda (body_label finish_label error_label error_show code)
	(string-append 
		body_label ":" n 
		"PUSH(FP);" n "MOV(FP,SP);" n 
		code
		"POP(FP);" n "RETURN;"  n 
		error_label ":" n
		error_show n 
		"HALT;" n
	)))

(define args_check_macro (lambda (num_args_str error_label)
	(string-append
			"CMP (FPARG(1),IMM(" num_args_str "));" n ;;check number of args == 1
			"JUMP_NE (" error_label ");" n	
	)))

(define RS_car
	(lambda ()
		(let
			((finish_label  "RS_make_car_closure_ends")
			(body_label  "RS_LABEL_car_body") 
			(error_label "RS_ERORR_CAR"))
				(string-append 
					(CISC_comment "RS_car starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'car SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure 'car\",R7);"
						(string-append
							(args_check_macro "1" error_label)
							"MOV(R7,FPARG(2)); " n 
							"CMP (INDD (R7,0),IMM(T_PAIR));" n
							"JUMP_NE(" error_label ");" n 
							"MOV(R0,INDD(R7,1));" n ))
					finish_label ":" n
					(CISC_comment "RS_car ends")))))

(define RS_cdr
	(lambda ()
		(let (
			(finish_label "RS_make_cdr_closure_ends")
			(body_label  "RS_LABEL_cdr_body")
			(error_label  "RS_ERORR_CDR"))
				(string-append 
					(CISC_comment "RS_cdr starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'cdr SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure 'cdr\",R0);"
						(string-append
							(args_check_macro "1" error_label)
							"MOV(R7,FPARG(2)); " n 
							"CMP (INDD (R7,0),IMM(T_PAIR));" n
							"JUMP_NE(" error_label ");" n 
							"MOV(R0,INDD(R7,2));" n ))
					finish_label ":" n
					(CISC_comment "RS_cdr ends")))))


(define RS_cons
	(lambda ()
		(let(
			(finish_label "RS_make_cons_closure_ends")
			(body_label "RS_LABEL_cons_body")
			(error_label "RS_ERORR_CONS"))
				(string-append
				(CISC_comment "RS_cons starts") 
					(RS_makeClosure body_label finish_label (lookupFvar 'cons SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure cons\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							"JUMP_NE (" error_label ");" n	
							(call_malloc 3)
							"MOV(INDD(R0,0),T_PAIR);" n
							"MOV(INDD(R0,1),FPARG(2));" n 
							"MOV(INDD(R0,2),FPARG(3));" n ))
					finish_label ":" n
					(CISC_comment "RS_cons ends")))))

(define RS_set_car 
	(lambda ()
		(let
			((finish_label  "RS_make_SETCAR_closure_ends")
			(body_label  "RS_LABEL_SETCAR_body")
			(error_label "RS_ERORR_SETCAR"))
				(string-append 
					(CISC_comment "RS_set_car starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'set-car! SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure 'SET_CAR!\",FPARG(2));"
						(string-append
							(args_check_macro "2" error_label)
							"CMP (IND(FPARG(2)),T_PAIR);" n
							"JUMP_NE (" error_label ");" n	
							"MOV (INDD(FPARG(2),1),FPARG(3));" n
							"MOV(R0,SOB_VOID);" n))
					finish_label ":" n
					(CISC_comment "RS_set_car ends")))))

(define RS_set_cdr 
	(lambda ()
		(let (
			(finish_label "RS_make_SETCDR_closure_ends")
			(body_label "RS_LABEL_SETCDR_body")
			(error_label  "RS_ERORR_SETCDR"))
				(string-append 
					(CISC_comment "RS_set_cdr starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'set-cdr! SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure 'SET_CDR!\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							"CMP (IND(FPARG(2)),T_PAIR);" n
							"JUMP_NE (" error_label ");" n	
							"MOV (INDD(FPARG(2),2),FPARG(3));" n
							"MOV(R0,SOB_VOID);" n))
					finish_label ":" n
					(CISC_comment "RS_set_cdr ends")))))


(define RS_predicate
	(lambda (body_label finish_label error_label true_cond pred_symobl type)
				(string-append 
					(CISC_comment (string-append "RS_" (symbol->string pred_symobl) "starts"))
					(RS_makeClosure body_label finish_label (lookupFvar pred_symobl SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label (string-append "SHOW(\"error in procedure " (symbol->string pred_symobl) "\",FPARG(2));")
						(string-append
							"MOV(R0,SOB_TRUE);" n ;;init R0 to be true
							(args_check_macro "1" error_label)
							"CMP (IND(FPARG(2))," type ");" n ;;the pridacte ;;maybe without IND
							"JUMP_EQ (" true_cond ");" n
							"MOV(R0,SOB_FALSE);" n ))
					true_cond ":" n 
					"POP(FP);" n "RETURN;"  n 
					finish_label ":" n
					(CISC_comment (string-append "RS_" (symbol->string pred_symobl) "ends"))
					)))

(define RS_boolean? (lambda () (RS_predicate "RS_LABEL_boolean_body" "RS_LABEL_boolean_finish" 
	"RS_ERORR_BOOLEAN" "RS_BOOLEAN_TRUE_COND" 'boolean? "T_BOOL")))

(define RS_char? (lambda () (RS_predicate "RS_LABEL_char_body" "RS_LABEL_char_finish" 
	"RS_ERORR_char" "RS_char_TRUE_COND" 'char? "T_CHAR")))

(define RS_integer? (lambda () (RS_predicate "RS_LABEL_integer_body" "RS_LABEL_integer_finish" 
	"RS_ERORR_integer" "RS_integer_TRUE_COND" 'integer? "T_INTEGER")))

(define RS_fraction? (lambda () (RS_predicate "RS_LABEL_fraction_body" "RS_LABEL_fraction_finish" 
	"RS_ERORR_fraction" "RS_fraction_TRUE_COND" 'fraction? "T_FRACTION")))

(define RS_pair? (lambda () (RS_predicate "RS_LABEL_pair_body" "RS_LABEL_pair_finish" 
	"RS_ERORR_pair" "RS_pair_TRUE_COND" 'pair? "T_PAIR")))

(define RS_procedure? (lambda () (RS_predicate "RS_LABEL_procedure_body" "RS_LABEL_procedure_finish" 
	"RS_ERORR_procedure" "RS_procedure_TRUE_COND" 'procedure? "T_CLOSURE")))

(define RS_string? (lambda () (RS_predicate "RS_LABEL_string_body" "RS_LABEL_string_finish" 
	"RS_ERORR_string" "RS_string_TRUE_COND" 'string? "T_STRING")))

(define RS_symbol? (lambda () (RS_predicate "RS_LABEL_symbol_body" "RS_LABEL_symbol_finish" 
	"RS_ERORR_symbol" "RS_symbol_TRUE_COND" 'symbol? "T_SYMBOL")))

(define RS_vector? (lambda () (RS_predicate "RS_LABEL_vector_body" "RS_LABEL_vector_finish" 
	"RS_ERORR_vector" "RS_vector_TRUE_COND" 'vector? "T_VECTOR")))

(define RS_null? (lambda () (RS_predicate "RS_LABEL_null_body" "RS_LABEL_null_finish" 
	"RS_ERORR_null" "RS_null_TRUE_COND" 'null? "T_NIL")))

(define RS_void? (lambda () (RS_predicate "RS_LABEL_void_body" "RS_LABEL_void_finish" 
	"RS_ERORR_void" "RS_void_TRUE_COND" 'void1? "T_VOID")))

(define gen_rational
	(lambda ()
		`(define rational? 
			(lambda (num)
				(or (integer? num) (fraction? num))))))

(define gen_number 
	(lambda()
		`(define number? 
			(lambda (num)
				(rational? num)))))


(define RS_symbolToString 
	(lambda () 
		(let ((finish_label "RS_make_symbolToString_closure_ends")
			(body_label "RS_LABEL_symbolToString_body")
			(error_label  "RS_ERORR_symbolToString"))
				(string-append 
					(CISC_comment "RS_symbolToString  starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'symbol->string SCHEMEFvarsTable))
					(RS_Closure_Code body_label  finish_label error_label "SHOW(\"error in procedure symbolToString!\",R0);"
						(string-append
							(args_check_macro "1" error_label)
							"CMP (IND(FPARG(2)),T_SYMBOL);" n
							"JUMP_NE (" error_label ");" n	
							"MOV(R0,INDD(FPARG(2),1));" n)) ;;maybe without the additional "ind"
					finish_label ":" n
					(CISC_comment "RS_symbolToString  ends")))))


(define RS_zero? 
	(lambda () 
		(let ((finish_label "RS_make_zero_closure_ends")
			(body_label "RS_LABEL_zero_body")
			(error_label  "RS_ERORR_zero")
			(true_cond "RS_zero_true_cond"))
				(string-append 
					(CISC_comment "RS_zero? starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'zero? SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure zero?\",R0);"
						(string-append
							"MOV(R0,SOB_TRUE);" n
							(args_check_macro "1" error_label)
							"CMP (IND(FPARG(2)),T_INTEGER);" n
							"JUMP_NE (" error_label ");" n
							"MOV(R7,INDD(FPARG(2),1));" n
							"CMP(R7,0);" n
							"JUMP_EQ(" true_cond "); " n
							"MOV(R0,SOB_FALSE);" n)) 
					true_cond ":" n 
					"POP(FP);" n "RETURN;"  n 
					finish_label ":" n
					(CISC_comment "RS_zero? ends")))))

(define RS_not 
	(lambda () 
		(let ((finish_label "RS_make_not_closure_ends")
			(body_label "RS_LABEL_not_body")
			(error_label  "RS_ERORR_not")
			(true_cond "RS_not_true_cond"))
				(string-append 
					(CISC_comment "RS_not starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'not SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure not\",R0);"
						(string-append
							(args_check_macro "1" error_label)

							"MOV(R0,SOB_FALSE);" n
							"MOV(R7,FPARG(2));" n
							"CMP (IND(R7),T_BOOL);" n
							"JUMP_NE (" true_cond ");" n

							"CMP (INDD(R7,1) , 1);" n 
							"JUMP_EQ (" true_cond ");" n
							"MOV(R0,SOB_TRUE);" n)) 
					true_cond ":" n 
					"POP(FP);" n "RETURN;"  n
					finish_label ":" n 
					(CISC_comment "RS_not ends")))))


(define RS_vector_length 
	(lambda () 
		(let ((finish_label "RS_make_vector_length_closure_ends")
			(body_label "RS_LABEL_vector_length_body")
			(error_label  "RS_ERORR_vector_length"))
				(string-append 
					(CISC_comment "RS_vector_length starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'vector-length SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure vector_length\",R0);"
						(string-append
							(args_check_macro "1" error_label)
							"CMP (IND(FPARG(2)),T_VECTOR);" n
							"JUMP_NE (" error_label ");" n	
							"MOV(R7,INDD(FPARG(2),1));" n ;;now r7 holds the length-number
							(call_malloc 2)
							"MOV(IND(R0),T_INTEGER);" n
							"MOV(INDD(R0,1),R7);" n 
							))
					finish_label ":" n 
					(CISC_comment "RS_vector_length  ends")))))


(define RS_vector_ref 
	(lambda () 
		(let ((finish_label "RS_vector_ref_closure_ends")
			(body_label "RS_vector_ref_ref_body")
			(error_label  "RS_ERORR_RS_vector_ref"))
				(string-append 
					(CISC_comment "RS_vector_ref starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'vector-ref SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_vector_ref\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							"MOV(R10,FPARG(2));" n
							"CMP (IND(R10),T_VECTOR);" n  ;;;r10 HOLDS THE VECTOR
							"JUMP_NE (" error_label ");" n
							"CMP (IND(FPARG(3)),T_INTEGER);" n
							"JUMP_NE (" error_label ");" n		
							"MOV(R7,INDD(FPARG(2),1));" n ;;now r7 holds the vector' length(actual number,not sob)
							"MOV(R8,INDD(FPARG(3),1));" n ;;R8 holds the argument number(actual number,not sob)
							"CMP(R8,R7);" n
							"JUMP_GE(" error_label ");" n
							"ADD(R8,2);" n ;;repair index
							"MOV(R0,INDD(R10,R8));" n)) 
					finish_label ":" n
					(CISC_comment "RS_vector_ref ends")))))


(define RS_vector_set! 
	(lambda () 
		(let ((finish_label "RS_vector_set_closure_ends")
			(body_label "RS_vector_set_body")
			(error_label  "RS_ERORR_RS_vector_set"))
				(string-append 
					(CISC_comment "RS_vector_set starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'vector-set! SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_vector_set\",R0);"
						(string-append
							(args_check_macro "3" error_label)
							"MOV (R2 , FPARG(2));" n 				;R2 = holds vector
							"MOV (R3 , INDD(FPARG(3),1));" n 		;R3 = holds index
							"CMP (R3 , INDD(R2,1));" n  			;check that index is smaller than the length of the vector
							"JUMP_GE(" error_label ");" n
							"CMP (INDD(R2 ,0) ,T_VECTOR);" n
							"JUMP_NE(" error_label ");" n
							"ADD (R3 , IMM(2));" n 					;fix index
							"MOV (R4 , FPARG(4));" n 				;R4 = holds pointer to obj
							"MOV (INDD(R2,R3) , R4);" n 			;change the vector
							"MOV(R0,SOB_VOID);" n 
							))
					finish_label ":" n
					(CISC_comment "RS_vector_set ends")))))


(define RS_vector 
	(lambda () 
		(let ((finish_label "RS_vector_closure_ends")
			(body_label "RS_vector_body")
			(error_label  "RS_ERORR_RS_vector")
			(empty_vector_label  "RS_Empty_vector")
			(loop_vector_label  "RS_Loop_vector")
			(continue_vector_label  "RS_continue_vector"))
				(string-append 
					(CISC_comment "RS_vector starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'vector SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_vector\",R0);"
						(string-append
							"MOV (R3 , FPARG(1));" n 							;R3 = num of args (also num of loops)
							"CMP (R3 , IMM(0));" n 								;if num of args eq 0 build empty vector
							"JUMP_EQ(" empty_vector_label ");" n
							"MOV (R4 , FPARG(1));" n 									
							"ADD (R4 , IMM(2));" n 								;R4 = num of args + 2 = size of malloc
							"PUSH(R4)" n "CALL(MALLOC);" n "DROP(1)" n
							"MOV (INDD(R0,0) , T_VECTOR);" n
							"MOV (INDD(R0,1) , R3);" n
							"MOV (R5 , IMM(2));" n 								;R5 =  index
							loop_vector_label ":" n
							"CMP (R3 ,IMM(0));" n
							"JUMP_EQ(" continue_vector_label ");" n
							"MOV (INDD(R0,R5) , FPARG(R5));" n
							"DECR(R3);" n "INCR(R5);" n
							"JUMP(" loop_vector_label ");" n
							empty_vector_label ":" n
							(call_malloc 3)
							"MOV (INDD(R0,0) , T_VECTOR);" n
							"MOV (INDD(R0,1) , R3);" n
							"MOV (INDD(R0,2) , SOB_NIL);" n
							continue_vector_label ":" n
							))
					finish_label ":" n
					(CISC_comment "RS_vector ends")))))


(define RS_make_vector 
	(lambda () 
		(let ((finish_label "RS_make_vector_closure_ends")
			(body_label "RS_make_vector_body")
			(error_label  "RS_ERORR_RS_make_vector"))
				(string-append 
					(CISC_comment "RS_make_vector starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'make-vector SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_make_vector\",R0);"
						(string-append

							"MOV (R6, FPARG(1));" n  ;;r6 = NUMBER OF ARGS
							"MOV (R7, INDD(FPARG(2),1));" n  ;; R7 = MAKE-COUNT
							"CMP(R6,2);" n 
							"JUMP_EQ(RS_MAKE_VECTOR_OPERAND);"  n 
							(call_malloc 2)
							"MOV(INDD(R0,0),T_INTEGER);" n
							"MOV(INDD(R0,1),0);" n 
							"MOV(R8,R0);" n 
							"JUMP(RS_MAKE_VECTOR_INIT_VEC);" n 
							"RS_MAKE_VECTOR_OPERAND:" n
							"MOV(R8,FPARG(3));" n ;;R8 = OPERAND
							"RS_MAKE_VECTOR_INIT_VEC:"
							"MOV(R9,2);" n ;;COUNTER FOR INSERT THE OPERAND IN THE VECTOR
							"MOV(R10,R7);" n 
							"ADD(R10,2);" n 
							 "PUSH(R10);" n "CALL (MALLOC);" n  "DROP(1);" n 
							"MOV(INDD(R0,0),T_VECTOR);" n
							"MOV(INDD(R0,1),R7);" n 
							 ;R8 = OPERAND ; R7 = MAKE-COUNT 
							"RS_MAKE_VECTOR_LOOP:" n 
							"CMP(R7,0);" n 
							"JUMP_EQ(RS_MAKE_VECTOR_ENDS);" n 
							"MOV(INDD(R0,R9),R8);" n 
							"ADD(R9,1);" n 
							"SUB(R7,1);" n 
							"JUMP(RS_MAKE_VECTOR_LOOP);" n 
							"RS_MAKE_VECTOR_ENDS:"  n 
							))
					finish_label ":" n
					(CISC_comment "RS_make_vector ends")))))

(define RS_string_length
	(lambda () 
		(let ((finish_label "RS_string_length_closure_ends")
			(body_label "RS_string_length_body")
			(error_label  "RS_ERORR_RS_string_length"))
				(string-append 
					(CISC_comment "RS_string_length starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'string-length SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_string_length\",R0);"
						(string-append
							(args_check_macro "1" error_label)
							"CMP (IND(FPARG(2)),T_STRING);" n
							"JUMP_NE (" error_label ");" n	
							"MOV(R7,INDD(FPARG(2),1));" n 		;;now R7 holds the length-number
							(call_malloc 2)
							"MOV(IND(R0),T_INTEGER);" n
							"MOV(INDD(R0,1),R7);" n )) 
					finish_label ":" n
					(CISC_comment "RS_string_length ends")))))


(define RS_string_ref 
	(lambda () 
		(let ((finish_label "RS_string_ref_closure_ends")
			(body_label "RS_string_ref_body")
			(error_label  "RS_ERORR_RS_string_ref"))
				(string-append 
					(CISC_comment "RS_string_ref starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'string-ref SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_string_ref\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							"MOV(R10,FPARG(2));" n
							"CMP (IND(R10),T_STRING);" n  				;;;R10 HOLDS THE STRING
							"JUMP_NE (" error_label ");" n
							"CMP (IND(FPARG(3)),T_INTEGER);" n
							"JUMP_NE (" error_label ");" n		
							"MOV(R7,INDD(FPARG(2),1));" n 				;;now R7 holds the string length(actual number,not sob)
							"MOV(R8,INDD(FPARG(3),1));" n 				;;R8 holds the argument number(actual number,not sob)
							"CMP(R8,R7);" n
							"JUMP_GE(" error_label ");" n
							"ADD(R8,2);" n 								;;repair index

							(call_malloc 2)
							"MOV(INDD(R0,0),T_CHAR);" n 
							"MOV(INDD(R0,1),INDD(R10,R8));" n 
							)) 
					finish_label ":" n
					(CISC_comment "RS_string_ref ends")))))



(define RS_make_string 
	(lambda () 
		(let ((finish_label "RS_make_string_closure_ends")
			(body_label "RS_make_string_body")
			(error_label  "RS_ERORR_RS_make_string")
			(continue_label  "RS_make_string_Continue")
			(gen_empty_string_label  "RS_make_string_Empty_String")
			(loop_string_label  "RS_make_string_Loop_Label")
			(loop_empty_string_label  "RS_make_string_Loop_Empty_String_Label")
			(loop_exit_empty_string_label  "RS_make_string_Loop_Exit_Empty_String_Label"))
				(string-append 
					(CISC_comment "RS_make_string starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'make-string_LEGACY SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_make_string\",R0);"
						(string-append
						;	"CMP (FPARG(1) , IMM(1));" n 						;if there is one arg gen empty string
							;"JUMP_EQ(" gen_empty_string_label ");" n
							(args_check_macro "2" error_label)
						;	"CMP (FPARG(2) , IMM(0));" n  						;check the string requested length (if equal 0 gen empty string) 
							;"JUMP_EQ(" gen_empty_string_label ");" n 	
							"MOV (R3 , INDD(FPARG(3),1));" n 							;R3 = holds the char
							"MOV (R2 , INDD(FPARG(2),1));" n 					;R2 = holds the string requested length
							"PUSH(2 + R2);" n "CALL(MALLOC);" n "DROP(1);" n
							"MOV (IND(R0) , T_STRING);" n
							"MOV (INDD(R0,1) , R2);" n
							"MOV (R4 , IMM(2));" n 								;R4 = holds the index of the string (init eq 2)
							loop_string_label ":" n
							"CMP (R2 , 0);" n
							"JUMP_EQ(" continue_label ");" n
							"MOV (INDD(R0,R4) , R3);" n
							"DECR(R2);" n "INCR(R4);" n 						;decrease R2 increase R4
							"JUMP(" loop_string_label ");" n

							;gen_empty_string_label ":" n
							;"MOV (R6 , INDD(FPARG(2),1));" n
							;"ADD (R6 , 2);" n
							;"PUSH(R6);" n "CALL(MALLOC);" n "DROP(1);" n
							;"MOV (IND(R0) , T_STRING);" n
							;"MOV (INDD(R0,1) , INDD(FPARG(2),1));" n
							;"MOV (R6 , INDD(FPARG(2),1));" n

							;loop_empty_string_label ":" n
							;"CMP (R6 , 0);" n
							;"JUMP_EQ(" loop_exit_empty_string_label ");" n
							;"MOV (INDD(R0,R6 + 1) , R9);" n
							;"DECR(R6);" n
							;"JUMP(" loop_empty_string_label ");" n
							;loop_exit_empty_string_label ":" n


							continue_label ":" n)) 
					finish_label ":" n
					(CISC_comment "RS_make_string ends")))))

(define RS_string_set! 
	(lambda () 
		(let ((finish_label "RS_string_set_closure_ends")
			(body_label "RS_string_set_body")
			(error_label  "RS_ERORR_RS_string_set"))
				(string-append 
					(CISC_comment "RS_string_set starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'string-set! SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_string_set\",R0);"
						(string-append
							(args_check_macro "3" error_label)
							"MOV (R2 , FPARG(2));" n 				;R2 = holds string
							"MOV (R3 , INDD(FPARG(3),1));" n 		;R3 = holds index
							"CMP (R3 , INDD(R2,1));" n  			;check that index is smaller than the length of the string
							"JUMP_GE(" error_label ");" n
							"ADD (R3 , IMM(2));" n 					;fix index
							"MOV (R4 , INDD (FPARG(4) ,1));" n 				;R4 = holds pointer to char
							"MOV (INDD(R2,R3) , R4);" n 			;change the string

							"MOV(R0,SOB_VOID);" n 
							))
					finish_label ":" n
					(CISC_comment "RS_string_set ends")))))


(define RS_stringToSymbol 
	(lambda () 
		(let ((finish_label "RS_stringToSymbol_closure_ends")
			(body_label "RS_LABEL_stringToSymbol_body")
			(error_label  "RS_ERORR_stringToSymbol")
			(end_calc  "RS_stringToSymbol_end_calc"))
				(string-append 
					(CISC_comment "RS_stringToSymbol starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'string->symbol SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label (string-append "SHOW(\"error in procedure stringToSymbol\",R0);" n)
						(string-append
							(args_check_macro "1" error_label)
							"CMP (IND(FPARG(2)),T_STRING);" n
							"JUMP_NE (" error_label ");" n	
							;;INIT:
							"MOV (R7,FPARG(2));" n ;;R7 HOLDS a pointer to the argument-string
							"MOV (R10,SYMBOLTABLE);" ;;R10 holdS the first node of the symbol linked list
							"MOV (R12,R10);" n ;;R12 IS TEMP, FOR KNOWING WHERE IS THE LAST NODE
							;;LOOP:
							"STRING_TO_SYMBOL_LOOP:"
							"CMP(R10,SOB_NIL);" n  ;;;??
							"JUMP_EQ (STR_TO_SYM_ADD_HERE);"
							;;;ELSE = FIRST LINK IS NOT NULL:
						

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
							"MOV(R13,INDD(R10,0));" n 

							"CMP (R7 , INDD(R10,0));" n 
							"JUMP_EQ(RS_STRING_TO_SYMBOL_STR_FOUND);" n 
							;;R7 = ARG_STR , R13 = LINKED-LIST STR
							"MOV(R14,INDD(R7,1));"  n ;; R14 = STR-LENGTH

							"CMP(INDD(R7,1),INDD(R13,1));" n 
							"JUMP_NE(PROCEED_LOOP_STR_SYM);"  n 

							"MOV(R15 ,0);" n 

							"RS_STR_TO_STR_CMP_LOOP:" n 
							"CMP(R15,R14);" n 
							"JUMP_EQ(RS_STRING_TO_SYMBOL_STR_FOUND);"  n 

							"CMP(INDD(R7,R15+2),INDD(R13,R15+2));"  n 
							"JUMP_NE(PROCEED_LOOP_STR_SYM);" n 

							"ADD (R15,1);" n 	
							"JUMP(RS_STR_TO_STR_CMP_LOOP)" n 
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

							"PROCEED_LOOP_STR_SYM:" n 
							;;IF ITS NOT EQUAL:
							"MOV(R12,R10);"  
							"MOV(R10,INDD(R10,1));" n		
							"JUMP(STRING_TO_SYMBOL_LOOP);" n 
							"STR_TO_SYM_ADD_HERE:" n  
							;;;UPDATE THE LINKEDLIST
							(call_malloc 2)
							"MOV(INDD(R0,0),R7);" n 
							"MOV(INDD(R0,1),SOB_NIL);" n 
							;;CHECK WHO WAS THE LAST NODE,and update it
							"CMP(R12,SOB_NIL);" n 
							"JUMP_EQ(R12_ISNULL);" n 
							"MOV (INDD(R12,1),R0);" n
							"JUMP(STRTOSYM_RETURN_TO_USER);"
							"R12_ISNULL:" n 
							"MOV(SYMBOLTABLE,R0);" n

							"JUMP(STRTOSYM_RETURN_TO_USER);" n 
							;;;;build a symobl for the user:

							"RS_STRING_TO_SYMBOL_STR_FOUND:"  n 
							"MOV(R7,INDD(R10,0));" n 

							"STRTOSYM_RETURN_TO_USER:" n 
							(call_malloc 2)
							"MOV(IND(R0), T_SYMBOL);" n 
							"MOV(INDD(R0,1),R7);" n 	
							end_calc ":"))
					finish_label ":" n 
					(CISC_comment "RS_stringToSymbol ends")))))




(define RS_cahrToInteger 
	(lambda () 
		(let ((finish_label "RS_cahrToInteger_closure_ends")
			(body_label "RS_cahrToInteger_body")
			(error_label  "RS_ERORR_RS_cahrToInteger"))
				(string-append 
					(CISC_comment "RS_cahrToInteger starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'char->integer SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_cahrToInteger\",R0);"
						(string-append
							(args_check_macro "1" error_label)
							"MOV (R2 , FPARG(2));" n 				;R2 = allegedly holds the char 
							"CMP (INDD(R2,0) , T_CHAR);" n
							"JUMP_NE(" error_label ");" n
							(call_malloc 2)
							"MOV (INDD(R0,0) , T_INTEGER);" n
							"MOV (INDD(R0,1) , INDD(R2,1));" n
							))
					finish_label ":" n
					(CISC_comment "RS_cahrToInteger ends")))))

(define RS_integerToChar
	(lambda () 
		(let ((finish_label "RS_integerToChar_closure_ends")
			(body_label "RS_integerToChar_body")
			(error_label  "RS_ERORR_RS_integerToChar"))
				(string-append 
					(CISC_comment "RS_integerToChar starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'integer->char SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_integerToChar\",R0);"
						(string-append
							(args_check_macro "1" error_label)
							"MOV (R2 , FPARG(2));" n 				;R2 = allegedly holds the integer 
							"CMP (INDD(R2,0) , T_INTEGER);" n
							"JUMP_NE(" error_label ");" n
							(call_malloc 2)
							"MOV (INDD(R0,0) , T_CHAR);" n
							"MOV (INDD(R0,1) , INDD(R2,1));" n
							))
					finish_label ":" n
					(CISC_comment "RS_integerToChar ends")))))


(define RS_list
	(lambda () 
		(let ((finish_label "RS_list_closure_ends")
			(body_label "RS_list_body")
			(error_label  "RS_ERORR_RS_list")
			(emptyListLabel  "Gen_Empty_List")
			(loopLabel  "Gen_List_Loop_Label")
			(endLoopLabel  "Gen_List_End_Loop_Label"))
				(string-append 
					(CISC_comment "RS_list starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'list SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_list\",R0);"
						(string-append
							"MOV (R6 ,SOB_NIL);" n 						;R6 initialize to empty list
							"MOV (R5 , R6);" n 							;R5 = iterator, R6 = pointer to head
							"MOV (R4 , FPARG(1));" n 					;R4 = holds the list length (num of args)
							loopLabel ":" n
							"CMP (R4 ,IMM(0));" n 						;If R4 will be 0 at first gen empty list
							"JUMP_EQ(" endLoopLabel ");" n
							(call_malloc 3)
							"MOV (INDD(R0,2) , R5);" n 					;R0 holds the new block that will now point to the old block 
							"MOV (R5 , R0);" n 							;R5 = pointer to the new block
							"MOV (INDD(R5,1) , FPARG(1 + R4));" n 		;update value in new block
							"MOV (INDD(R5,0) , T_PAIR);" n
							"MOV (R6, R5);" n 							;R6 will point to the linked list head
							"DECR(R4);" n
							"JUMP(" loopLabel ");"n
							endLoopLabel ":" n
							"MOV (R0 , R6);" n
							))
					finish_label ":" n
					(CISC_comment "RS_list ends")))))


(define RS_remainder
	(lambda () 
		(let ((finish_label "RS_remainder_closure_ends")
			(body_label "RS_remainder_body")
			(error_label  "RS_ERORR_RS_remainder"))
				(string-append 
					(CISC_comment "RS_remainder starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'remainder SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_remainder\",R0);\n INFO \n"
						(string-append
							(args_check_macro "2" error_label)
							"MOV (R1 ,FPARG(2));" n
							"MOV (R2 ,FPARG(3));" n
							"CMP (INDD(R1 , 0) , T_INTEGER);" n
							"JUMP_NE(" error_label ");" n
							"CMP (INDD(R2 , 0) , T_INTEGER);" n
							"JUMP_NE(" error_label ");" n
							"PUSH(INDD(R1,1));" n
							"CALL (MAKE_SOB_INTEGER);" n 
							"DROP(1);" n
							"MOV(R3 , R0);" n
							"REM (INDD(R3,1) ,INDD(R2,1));" n
							"MOV (R0 , R3);" n
							))
					finish_label ":" n
					(CISC_comment "RS_remainder ends")))))


(define RS_numerator
	(lambda ()
		(let
			((finish_label  "RS_numerator_closure_ends")
			(body_label  "RS_numerator_body")
			(error_label "RS_ERORR_RS_numerator")
			(fractionLabel "RS_numerator_Fraction_Label")
			(exit_label "RS_numerator_Exit_Label"))
				(string-append 
					(CISC_comment "RS_numerator starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'numerator SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_numerator\",R0);"
						(string-append
							(args_check_macro "1" error_label)
							"CMP (IND(FPARG(2)),T_INTEGER);" n
							"JUMP_NE(" fractionLabel ");" n
							"MOV (R0 , FPARG(2));" n
							"JUMP(" exit_label ");" n
							fractionLabel ":" n
							"CMP (IND(FPARG(2)),T_FRACTION);" n
							"JUMP_NE (" error_label ");" n
							"PUSH(INDD(FPARG(2),1));" n
							"CALL (MAKE_SOB_INTEGER);" n 
							"DROP(1);" n	
							;"MOV (R0 , INDD(FPARG(2),1));" n 
							exit_label ":" n))
					finish_label ":" n
					(CISC_comment "RS_numerator ends")))))


(define RS_denominator
	(lambda ()
		(let
			((finish_label  "RS_denominator_closure_ends")
			(body_label  "RS_denominator_body")
			(error_label "RS_ERORR_RS_denominator")
			(fractionLabel "RS_denominator_Fraction_Label")
			(exit_label "RS_denominator_Exit_Label"))
				(string-append 
					(CISC_comment "RS_denominator starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'denominator SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_denominator\",R0);"
						(string-append
							(args_check_macro "1" error_label)
							"CMP (IND(FPARG(2)),T_INTEGER);" n
							"JUMP_NE(" fractionLabel ");" n
							"PUSH(IMM(1));" n
							"CALL (MAKE_SOB_INTEGER);" n 
							"DROP(1);" n
							"JUMP(" exit_label ");" n
							fractionLabel ":" n
							"CMP (IND(FPARG(2)),T_FRACTION);" n
							"JUMP_NE (" error_label ");" n
							"PUSH(INDD(FPARG(2),2));" n
							"CALL (MAKE_SOB_INTEGER);" n 
							"DROP(1);" n		
							;"MOV (R0 , INDD(FPARG(2),2));" n 
							exit_label ":" n ))
					finish_label ":" n
					(CISC_comment "RS_denominator ends")))))


(define RS_compare_vals
	(lambda ()
		(let
			((finish_label  "RS_compare_vals_closure_ends")
			(body_label  "RS_compare_vals_body")
			(error_label "RS_ERORR_RS_compare_vals")
			(false_label "RS_compare_vals_False_Label")
			(exit_label "RS_compare_vals_Exit_Label"))
				(string-append 
					(CISC_comment "RS_compare_vals starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'compare_vals SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_compare_vals\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							"CMP(INDD(FPARG(2),0),T_FRACTION);" n 
							"JUMP_EQ(RS_compare_vals_FRACTION_TYPE);" n 
							"CMP (INDD(FPARG(2),1) , INDD(FPARG(3),1));" n
							"JUMP_NE(" false_label ");" n
							"RS_CV_TRUE_LABEL:" n 
							"MOV (R0 , SOB_TRUE);" n
							"JUMP(" exit_label ");" n
							false_label ":" n
							"MOV (R0 , SOB_FALSE);" n
							"JUMP(" exit_label ");" n
							"RS_compare_vals_FRACTION_TYPE:" n 
							"CMP (INDD(FPARG(2),1) , INDD(FPARG(3),1));" n
							"JUMP_NE(RS_compare_vals_False_Label);" n 
							"CMP (INDD(FPARG(2),2) , INDD(FPARG(3),2));" n
							"JUMP_NE(RS_compare_vals_False_Label);" n 
							"JUMP(RS_CV_TRUE_LABEL);" n 
							exit_label ":" n ))
					finish_label ":" n 
					(CISC_comment "RS_compare_vals ends")))))

(define RS_compare_address
	(lambda ()
		(let
			((finish_label  "RS_compare_address_closure_ends")
			(body_label  "RS_compare_address_body")
			(error_label "RS_ERORR_RS_compare_address")
			(false_label "RS_compare_address_False_Label")
			(exit_label "RS_compare_address_Exit_Label"))
				(string-append 
					(CISC_comment "RS_compare_address starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'compare_address SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_compare_address\",R0);"
						(string-append
							(args_check_macro "2" error_label) 
							"CMP (FPARG(2) , FPARG(3));" n
							"JUMP_NE(" false_label ");" n
							"MOV (R0 , SOB_TRUE);" n
							"JUMP(" exit_label ");" n
							false_label ":" n
							"MOV (R0 , SOB_FALSE);" n
							exit_label ":" n ))
					finish_label ":" n
					(CISC_comment "RS_compare_address ends")))))


					
;;;;;;;;;;;;;;;;;;;;;;;;;;arithmetic procedures;;;;;;;;;;;;;;;;

(define RS_create_frac_from_ints_and_gcd ;;;;;input: 2 integers and their GCD number. output : a fraction of int1/gcd / int2/gcd 
										;;;if denom/gcd == 1 --> make_Sob_intger , else -> make fraction.
	(lambda ()							;; INPUT = NUMER, DENOMER , GCD
		(let
			((finish_label  "RS_create_frac_from_ints_closure_ends")
			(body_label  "RS_create_frac_from_ints_body")
			(error_label "RS_ERORR_RS_create_frac_from_ints"))
				(string-append 
					(CISC_comment "RS_create_frac_from_ints starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'create_frac SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_create_frac_from_ints\",R0);"
						(string-append
							(args_check_macro "3" error_label)
								"MOV (R6 , INDD ( FPARG(2) , 1 ));" n ;;get the number from sob_integer
								"MOV (R7 , INDD ( FPARG(3) , 1 ));" n ;;get the number from sob_integer
								"MOV (R8 , INDD ( FPARG(4) , 1 ));" n ;;get the number from sob_integer
								"CMP(R7,0);" n  ;;CHECK IF DENOM IS NEGATIVE. IF IT IS,I WANT TO TRANSFORM IT FROM 1/-12 TO -1/12
								"JUMP_LT(RS_CREATE_FRACTION_NEGATIVE_DENOM);" n 
								"JUMP(RS_CREATE_FRAC_PROCEED_CREATING);" n 
								
								"RS_CREATE_FRACTION_NEGATIVE_DENOM:" n 
								"MUL (R6,-1);" n 
								"MUL (R7,-1);" n 
								"RS_CREATE_FRAC_PROCEED_CREATING:" n 

								"CMP(R8,0);" n 
								"JUMP_LT(RS_CREATE_FRAC_GCD_IS_NEG);" n 
								"JUMP(RS_CREATE_FRAC_GCD_IS_NOT_NEG);" n 

								"RS_CREATE_FRAC_GCD_IS_NEG:" n 
								"MUL(R8,-1);" n 
								"RS_CREATE_FRAC_GCD_IS_NOT_NEG:" n 
								"DIV (R6 , R8);" n 
								"DIV (R7 , R8);" n 

								"CMP (R7 ,1);" n 
								"JUMP_EQ (RS_CREATE_FRAC_INTEGER_COND);"  n 
								"CMP (R7 ,-1);" n 
								"JUMP_EQ (RS_CREATE_FRAC__NEGETAIVE_INTEGER_COND);"  n 
								(call_malloc 3)
								"MOV (INDD(R0,0),T_FRACTION)"  n
							 
								"MOV (INDD(R0,1),R6)"  n
								"MOV (INDD(R0,2),R7)"  n
								"JUMP(RS_MAKE_FRAC_END);" n 
								"RS_CREATE_FRAC__NEGETAIVE_INTEGER_COND:"  n 
								"MUL(R6,-1);" n 
								"RS_CREATE_FRAC_INTEGER_COND:" n 
								(call_malloc 2)
								"MOV (INDD(R0,0),T_INTEGER)"  n
								"MOV (INDD(R0,1),R6)"  n
								"RS_MAKE_FRAC_END:" n 
								))
					finish_label ":" n
					(CISC_comment "RS_create_frac_from_ints")))))

(define check_if_2_args_are_fracs 
	(lambda (error_label) 
		(string-append
		"MOV (R1 , FPARG(2));" n 							;R1 = is the first number
		"MOV (R2 , FPARG(3));" n 							;R2 = is the second number
		"CMP (IND(R1),T_FRACTION);" n  					;check if R1 is a fraction
		"JUMP_NE( " error_label ");" n 
		"CMP (IND(R2),T_FRACTION);" n  					;check if R2 is a fraction
		"JUMP_NE( " error_label ");" n 
	)))

(define get_denom_and_numer_from_fracs
 (lambda ()
		(string-append
			"MOV (R3 , INDD(R1,2));" n 							;R3 = first number denominator
			"MOV (R4 , INDD(R2,2));" n 							;R4 = second number denominator
			"MOV (R5 , INDD(R1,1));" n 							;R5 = first number numerator
			"MOV (R6 , INDD(R2,1));" n 							;R6 = second number numerator
			)))


(define RS_plus_bin      
	(lambda ()
		(let
			((finish_label  "RS_plus_closure_ends")
			(body_label  "RS_plus_body")
			(error_label "RS_ERORR_RS_plus"))
				(string-append 
					(CISC_comment "RS_plus starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'plus_bin SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_plus\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							(check_if_2_args_are_fracs error_label)  
							;; now R1 = arg1 , R2 = arg2
							(get_denom_and_numer_from_fracs)
							;;now R3 = denom1 , R4 = denom2 , R5 =  numer1 , R6  = numer2
							"MUL(R5,R4);" n ;;common base calc
							"MUL(R6,R3);" n ;;common base calc
							"ADD(R5,R6)"    ;; now R5 is the new numerator
							"MUL(R3,R4);" n ;; now R3 is the new denom
							(call_malloc 3)
							"MOV (INDD(R0,0) , T_FRACTION);" n
							"MOV (INDD(R0,1) , R5);" n
							"MOV (INDD(R0,2) , R3);" n))
					finish_label ":" n
					(CISC_comment "RS_plus ends")))))

(define RS_minus_bin    
	(lambda ()
		(let
			((finish_label  "RS_minus_closure_ends")
			(body_label  "RS_minus_body")
			(error_label "RS_ERORR_RS_minus"))
				(string-append 
					(CISC_comment "RS_minus starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'minus_bin SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_minus\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							(check_if_2_args_are_fracs error_label)  
							;; now R1 = arg1 , R2 = arg2
							(get_denom_and_numer_from_fracs)
							;;now R3 = denom1 , R4 = denom2 , R5 =  numer1 , R6  = numer2
							"MUL(R5,R4);" n ;;common base calc
							"MUL(R6,R3);" n ;;common base calc
							"SUB(R5,R6)"    ;; now R5 is the new numerator
							"MUL(R3,R4);" n ;; now R3 is the new denom
							(call_malloc 3)
							"MOV (INDD(R0,0) , T_FRACTION);" n
							"MOV (INDD(R0,1) , R5);" n
							"MOV (INDD(R0,2) , R3);" n))
					finish_label ":" n
					(CISC_comment "RS_minus ends")))))


(define RS_mul_bin   
	(lambda ()
		(let
			((finish_label  "RS_mul_closure_ends")
			(body_label  "RS_mul_body")
			(error_label "RS_ERORR_RS_mul"))
				(string-append 
					(CISC_comment "RS_mul starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'mul_bin SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_mul\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							(check_if_2_args_are_fracs error_label)  
							;; now R1 = arg1 , R2 = arg2
							(get_denom_and_numer_from_fracs)
							;;now R3 = denom1 , R4 = denom2 , R5 =  numer1 , R6  = numer2
							"MUL(R5,R6);" n  ;; now R5 is the new numerator
							"MUL(R3,R4);" n  ;; now R3 is the new denom 	
							(call_malloc 3)
							"MOV (INDD(R0,0) , T_FRACTION);" n
							"MOV (INDD(R0,1) , R5);" n
							"MOV (INDD(R0,2) , R3);" n))
					finish_label ":" n
					(CISC_comment "RS_mul ends")))))

(define RS_div_bin   
	(lambda ()
		(let
			((finish_label  "RS_div_closure_ends")
			(body_label  "RS_div_body")
			(error_label "RS_ERORR_RS_div"))
				(string-append 
					(CISC_comment "RS_div starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'div_bin SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_div\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							(check_if_2_args_are_fracs error_label)  
							;; now R1 = arg1 , R2 = arg2
							(get_denom_and_numer_from_fracs)
							;;now R3 = denom1 , R4 = denom2 , R5 =  numer1 , R6  = numer2
							"MUL(R5,R4);" n  ;; now R5 is the new numerator
							"MUL(R3,R6);" n  ;; now R3 is the new denom 	
							(call_malloc 3)
							"MOV (INDD(R0,0) , T_FRACTION);" n
							"MOV (INDD(R0,1) , R5);" n
							"MOV (INDD(R0,2) , R3);" n))
					finish_label ":" n
					(CISC_comment "RS_div ends")))))



(define RS_equality_op_bin    
	(lambda ()
		(let
			((finish_label  "RS_equality_op_closure_ends")
			(body_label  "RS_equality_op_body")
			(error_label "RS_ERORR_RS_RS_equality_op")
			(false_label "RS_equality_op_false_Label")
			(exit_label "RS_equality_op_Exit_Label"))
				(string-append 
					(CISC_comment "RS_equality_op starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'eq_bin SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_equality_op\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							(check_if_2_args_are_fracs error_label)  
							;; now R1 = arg1 , R2 = arg2
							(get_denom_and_numer_from_fracs)
							;;now R3 = denom1 , R4 = denom2 , R5 =  numer1 , R6  = numer2
							"CMP (R3 , R4);" n				;compare denominators 					
							"JUMP_NE(" false_label ");" n
							"CMP (R5 , R6);" n 				;compare numerators
							"JUMP_NE(" false_label ");" n
							"MOV (R0 , SOB_TRUE);" n 				
							"JUMP(" exit_label ");" n
							false_label ":" n
							"MOV (R0 , SOB_FALSE);" n
							exit_label ":" n ))
					finish_label ":" n
					(CISC_comment "RS_equality_op ends")))))


(define RS_smaller_bin   
	(lambda ()
		(let
			((finish_label  "RS_smaller_closure_ends")
			(body_label  "RS_smaller_body")
			(error_label "RS_ERORR_RS_smaller")
			(decide_by_numerator_label "RS_smaller_decide_by_numerator_Label")
			(false_label "RS_smaller_false_Label")
			(exit_label "RS_smaller_Exit_Label"))
				(string-append 
					(CISC_comment "RS_smaller starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'smaller_bin SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_smaller\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							(check_if_2_args_are_fracs error_label)  
							;; now R1 = arg1 , R2 = arg2
							(get_denom_and_numer_from_fracs)
							;;now R3 = denom1 , R4 = denom2 , R5 =  numer1 , R6  = numer2
							"CMP (R3 , R4);" n									;compare denominators 
							"JUMP_EQ(" decide_by_numerator_label ");" n
							"MUL (R5 , R4);" n 									;make common denomirators - that also affect numerators
							"MUL (R6 , R3);" n 									;know we can decide by numerators								
							decide_by_numerator_label ":" n
							"CMP (R5 , R6);" n 									;compare numerators
							"JUMP_GE(" false_label ");" n 						;if first number ge than the second number jump & return false
							"MOV (R0 , SOB_TRUE);" n 							;else return true
							"JUMP(" exit_label ");" n
							false_label ":" n
							"MOV (R0 , SOB_FALSE);" n
							exit_label ":" n ))
					finish_label ":" n
					(CISC_comment "RS_smaller ends")))))


(define RS_greater_bin    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;; For now only fractions !!!!!!! ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	(lambda ()
		(let
			((finish_label  "RS_greater_closure_ends")
			(body_label  "RS_greater_body")
			(error_label "RS_ERORR_RS_greater")
			(decide_by_numerator_label "RS_greater_decide_by_numerator_Label")
			(false_label "RS_greater_false_Label")
			(exit_label "RS_greater_Exit_Label"))
				(string-append 
					(CISC_comment "RS_greater starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'greater_bin SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_greater\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							(check_if_2_args_are_fracs error_label)  
							;; now R1 = arg1 , R2 = arg2
							(get_denom_and_numer_from_fracs)
							;;now R3 = denom1 , R4 = denom2 , R5 =  numer1 , R6  = numer2
							"CMP (R3 , R4);" n									;compare denominators 
							"JUMP_EQ(" decide_by_numerator_label ");" n
							"MUL (R5 , R4);" n 									;make common denomirators - that also affect numerators
							"MUL (R6 , R3);" n 									;know we can decide by numerators								
							decide_by_numerator_label ":" n
							"CMP (R5 , R6);" n 									;compare numerators
							"JUMP_LE(" false_label ");" n 						
							"MOV (R0 , SOB_TRUE);" n 							;else return true
							"JUMP(" exit_label ");" n
							false_label ":" n
							"MOV (R0 , SOB_FALSE);" n
							exit_label ":" n ))
					finish_label ":" n
					(CISC_comment "RS_greater ends")))))

(define RS_numberTofraction
	(lambda ()
		(let
			((finish_label  "RS_numberTofraction_closure_ends")
			(body_label  "RS_numberTofraction_body")
			(error_label "RS_ERORR_RS_numberTofraction")
			(changeIntTofrac_Label "RS_numberTofraction_changeIntTofrac_Label")
			(exit_label "RS_numberTofraction_Exit_Label"))
				(string-append 
					(CISC_comment "RS_numberTofraction starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'number->fraction SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_numberTofraction\",R0);\n INFO \n"
						(string-append
							(args_check_macro "1" error_label)
							"MOV (R2 , FPARG(2));" n 				;R2 = allegedly holds the integer 
							"CMP (INDD(R2,0) , T_INTEGER);" n
							"JUMP_EQ(" changeIntTofrac_Label ");" n 
							"CMP (INDD(R2,0) , T_FRACTION);" n
							"JUMP_NE(" error_label ");" n
							"MOV (R0 , R2);" 
							"JUMP(" exit_label ");" n 
							changeIntTofrac_Label ":" n
							(call_malloc 3)
							"MOV (R3 , R0);" n
							"MOV (INDD(R3,0) , T_FRACTION);" n
							"MOV (INDD(R3,1) , INDD(R2,1));" n
							"MOV (INDD(R3,2) , IMM(1));" n
							"MOV (R0 , R3);" n
							exit_label ":" n 
							))
					finish_label ":" n
					(CISC_comment "RS_numberTofraction ends")))))

;;;arithmetics end here



(define RS_apply
	(lambda ()
		(let
			((finish_label  "RS_apply_closure_ends")
			(body_label  "RS_apply_body")
			(error_label "RS_ERORR_RS_apply")
			(exit_label "RS_apply_Exit_Label"))
				(string-append 
					(CISC_comment "RS_apply starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'apply SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_apply\",R0);"
						(string-append
							(args_check_macro "2" error_label)
							"MOV(R6,FPARG(2)); " n  ;;;R6 = the proc 
							"CMP (IND(R6),T_CLOSURE);"  n ;;check if arg1 = proc 
							"JUMP_NE(" error_label ");" n 
							"MOV(R9,0);" n ;; INIT COUNTER OF LIST-LENGTH
							"MOV(R7,FPARG(3)); " n ;; R7  = list of args
							"CMP(R7, SOB_NIL);" n ;;check if we are talking about 'empty list'
							"JUMP_EQ (RS_APPLY_EMPTY_LST);" n 
							"CMP (IND(R7),T_PAIR);"  n ;;check if arg1 = proc 
							"JUMP_NE(" error_label ");" n 	
							;;;;;;;;;;;REVERSE LIST: ;;;;;;;;;;;;;;
							;;init_reverse_looP:
							(call_malloc 2)
							"MOV(INDD(R0,0),INDD(R7,1));" n 
							"MOV(INDD(R0,1),SOB_NIL);" n
							"ADD(R9,1);" n ;;ADD 1 TO LENGTH COUNTER
							;;FINISH INIT,START THE LOOP. 
							;;R8 = previous pointer. R7 = current pointer to original list. R6 = proc
							"RS_APPLY_REVERSE_LOOP:" n
							"MOV(R8,R0);" n ;;MOVING POINTERS
							"CMP(INDD(R7,2),SOB_NIL);"  n  ;;MOVING POINTERS
							"JUMP_EQ(RS_APPLY_FINISH_REVERSE);" n 
							"MOV(R7,INDD(R7,2));" n ;;MOVING POINTERS
							(call_malloc 2) ;;;CREATING NEW NODE
							"MOV(INDD(R0,0),INDD(R7,1));" n 
							"MOV(INDD(R0,1),R8);" n
							"ADD(R9,1);" n ;;ADD 1 TO LENGTH COUNTER
							"JUMP(RS_APPLY_REVERSE_LOOP);" n 
							"RS_APPLY_EMPTY_LST:" n 
							"MOV(R0,R7);" n 	
							"RS_APPLY_FINISH_REVERSE:"	n 
							;;;;;;;;;;; REVERSE LIST ENDS ;;;;;;;;;;;;;; 
							;;;NOW R0 = THE REVERSE LIST. R9 = LENGTH OF LIST R6 = PROC 
							;;;PUSHING ARGS:
							"MOV(R10,R9);" n ;;;R10 IS A TEMP REG THAT HOLDS THE LENGTH. I DONT WANT TO 'RUN-OVER' R9
							"CMP(R10,0);" n 
							"JUMP_EQ(RS_APPLY_FINISH_PUSHING_ARGS);" n 
							"RS_APPLY_PUSH_ARGS_LOOP:" n 
							"CMP(R10,0);" n 
							"JUMP_EQ(RS_APPLY_FINISH_PUSHING_ARGS);" n 
							"PUSH(INDD(R0,0));" n 
							"MOV(R0,INDD(R0,1));" n
							"SUB(R10,1);" n  
							"JUMP(RS_APPLY_PUSH_ARGS_LOOP);" n 
							"RS_APPLY_FINISH_PUSHING_ARGS:" n 
							"PUSH(R9);" n ;;;PUSH THE NUMBER OF ARGUMENTS THAT HAVE BEEN PUSHED
							"MOV(R0,R6);" n 
							;;;FINISH PUSH ARGS . NOW R9 = LENGTH. R0 = PROC 
							"MOV (R7,FPARG(IMM(-1)));" n ;;;save 'ret-address' of old applic
							"MOV (R8, FPARG(IMM(-2)));" n ;;;save old fp
							"PUSH (INDD (R0,1));" n  ;;push env
							"MOV (R9 , FPARG(IMM(1)));" n ;;get the previous applic param number
							"ADD (R9 , IMM(1));" n  ;;add one for the last cell of the previous applic
							(run_over_frame) ;;;;R0 holds pointer to the closure 
							"JUMPA (INDD(R0,2)); " n
				))
					finish_label ":" n
					(CISC_comment "RS_apply ends")))))


(define RS_append_bin   
	(lambda ()
		(let
			((finish_label  "RS_append_bin_closure_ends")
			(body_label  "RS_append_bin_body")
			(error_label "RS_ERORR_RS_append_bin "))
				(string-append 
					(CISC_comment "RS_append_bin  starts")
					(RS_makeClosure body_label finish_label (lookupFvar 'append_bin SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error in procedure RS_append_bin \",R0);"
						(string-append
							(args_check_macro "2" error_label)
							"MOV(R6,FPARG(2));"  n  ;;R6 = FIRST LIST (THE ONE THAT GOT REVERESED)
							"MOV(R7,FPARG(3));"  n  ;;R7 = SECOND LIST


							"CMP(R6,SOB_NIL);" n 
							"JUMP_EQ(RS_APPEND_FINISH_ADDING);" n 
							"CMP (IND(R6) , T_PAIR);" n
							"JUMP_NE(" error_label ");" n

							"CMP (R7 , SOB_NIL);" n
							"JUMP_EQ(RS_APPEND_FINISH_ADDING2);" n

							"RS_APPEND_ADDING_LOOP:" n 	
							(call_malloc 3)
							"MOV(INDD(R0,0) , T_PAIR);" n 
							"MOV(INDD(R0,1) , (INDD(R6 ,1)));" n 
							"MOV(INDD(R0,2) , R7);" n 
							"MOV(R7,R0);" n 
							"CMP(INDD(R6,2),SOB_NIL);" n 
							"JUMP_EQ(RS_APPEND_FINISH_ADDING);" n
							"MOV(R6, INDD(R6,2));" n 
							"JUMP(RS_APPEND_ADDING_LOOP);" n


							 "RS_APPEND_FINISH_ADDING2:" n 
							 "MOV(R0,R6);" n
							 "JUMP(RS_append_END);" n

							"RS_APPEND_FINISH_ADDING:" n 
							"MOV(R0,R7);" n 
							"RS_append_END:" n 
							))
					finish_label ":" n
					(CISC_comment "RS_append_bin  ends")))))					


(define printer_mrt   
	(lambda ()
		(let
			((finish_label  "p_")
			(body_label  "p22")
			(error_label "p2232"))
				(string-append 
					(RS_makeClosure body_label finish_label (lookupFvar 'p SCHEMEFvarsTable))
					(RS_Closure_Code body_label finish_label error_label "SHOW(\"error p \",R0);"
						(string-append
							"SHOW(\"\", FPARG(2));" n
							))
					finish_label ":" n
					(CISC_comment "RS_append_bin  ends")))))



(define add_RS_to_FvarTable 
	(lambda () 
		(string-append 
		(RS_car) (RS_cdr) (RS_cons) (RS_set_car) (RS_set_cdr) 
		(RS_boolean?) (RS_char?) (RS_integer?) (RS_pair?) (RS_procedure?) (RS_string?) (RS_symbol?) (RS_vector?) (RS_null?) (RS_void?) (RS_fraction?)
		(RS_zero?) (RS_not) (RS_compare_address) (RS_compare_vals)
		(RS_symbolToString) (RS_stringToSymbol)
		(RS_vector_length) (RS_vector_ref) (RS_vector_set!) (RS_vector) (RS_make_vector)
		(RS_string_length) (RS_string_ref) (RS_make_string) (RS_string_set!)
		(RS_apply) (RS_append_bin)
		(RS_cahrToInteger) (RS_numberTofraction) (RS_integerToChar) 
		(RS_list) (printer_mrt)
		(RS_remainder) (RS_denominator) (RS_numerator)
		(RS_plus_bin) (RS_minus_bin) (RS_smaller_bin) (RS_greater_bin) (RS_mul_bin) (RS_div_bin) (RS_equality_op_bin) (RS_create_frac_from_ints_and_gcd)
		)))

(define RS_LIST 
	(list 
		'car 'cdr 'cons 'set-car! 'set-cdr! 
		'boolean? 'char? 'integer? 'pair? 'procedure? 'string? 'symbol? 'vector? 'null? 'void1? 'fraction?
		'zero? 'not 'compare_address 'compare_vals
		'string->symbol 'symbol->string
		'vector-length 'vector-ref 'vector-set! 'vector 'make-vector
		'string-length 'string-ref 'make-string_LEGACY 'string-set!
		'apply 'append_bin
		'char->integer 'number->fraction 'integer->char
		'list 'p 
		'remainder 'denominator 'numerator
		'plus_bin 'minus_bin 'smaller_bin 'greater_bin 'div_bin 'mul_bin 'eq_bin 'create_frac
	 ))




;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;;;; "RUNTIME SUPPORT ends here ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************


;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;;;; "Fvar Table Starts here ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************


;;;;scheme part start;;; ((add1 var1) (add2 var2)...)
(define SCHEMEFvarsTable '())

(define fvar_address -1)
(define update_fvar_Address (lambda ()
	(set! fvar_address (+ 1 fvar_address)) fvar_address))
(define reset_fvar_Address (lambda ()
	(set! fvar_address -1)
	))


(define taggingFvarsHelper (lambda (fvar ans)
	`(,@ans ,(list (update_fvar_Address) fvar))
	))

(define taggingFvars (lambda (FvarsTable ans)
	(if (null? FvarsTable) 
			ans
			(taggingFvars (cdr FvarsTable) (taggingFvarsHelper (car FvarsTable) ans)))))

(define buildSchemeFvarList (lambda (ast ans) 

	(cond 
		((null? ast) ans)
		((and (list? ast) (equal? (car ast) 'fvar)) (buildSchemeFvarList (cdr ast) (addIfNotDuplicate (cadr ast) ans)))
		((list? ast) (buildSchemeFvarList (car ast) (buildSchemeFvarList (cdr ast) ans)))
		(else ans))

	))

;;;;scheme part ends;;;
;;;;CISC part start;;;

(define code_gen_init_fvar (lambda (exp)
	(string-append 
	 			   "MOV(INDD(FVARARRAY," (number->string (get-address-from-tagged exp)) ") , 0XDEF);")))

(define code_gen_fvar_helper (lambda (SchemeTaggedFvarTable)
	(if (null? SchemeTaggedFvarTable) ""
		(string-append 
			(code_gen_init_fvar (car SchemeTaggedFvarTable)) n 
			(code_gen_fvar_helper (cdr SchemeTaggedFvarTable))))))

(define buildCiscFvarsTable (lambda (SchemeTaggedFvarTable)
		(string-append 
			(CISC_comment "init Fvar-Table start here")
			(call_malloc (length SchemeTaggedFvarTable))
			"MOV (FVARARRAY,R0);" n 
			(code_gen_fvar_helper SchemeTaggedFvarTable)
			(CISC_comment "init Fvar-Table ends here")
	)))

;;;;CISC part ends;;;


;;RS-procedure : 
(define enlargeFvars (lambda (oldFvarTable rs_list ans)
	(if (null? rs_list) 
		(append oldFvarTable ans) 
		(if (member (car rs_list) oldFvarTable)
			(enlargeFvars oldFvarTable (cdr rs_list) ans)
			(enlargeFvars oldFvarTable (cdr rs_list) (append ans `(,(car rs_list)))))
	)))


;;fvarTable's main : ;;;;
(define buildFvarTable (lambda (ast) 
	(let* ((SchemeFvarTable (buildSchemeFvarList ast '()))
		  (CISCFvarTable 
		  		 (begin 
		  				(set! SCHEMEFvarsTable (taggingFvars (enlargeFvars RS_LIST SchemeFvarTable '()) '()))
		  				(buildCiscFvarsTable SCHEMEFvarsTable) ;;;this is STRING
		  				)))
		(reset_fvar_Address)
	(string-append
		CISCFvarTable
		(add_RS_to_FvarTable)
	))))



;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;;;; "Fvar Table ends here ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************


;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;*************************************** SCHEME RUN TIME FUNCTIONS !!!!!!!!!!!!!!! ************************************** ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

										;according to MR. T need to concatenate this code after output of ass1 as input to ass2

(define gen_foldl_2
	(lambda ()
		`(define foldl_2 
			(lambda (func accum lst)
  				(if (null? lst)
      				accum
      				(foldl_2 func (func accum (car lst)) (cdr lst))))) ))


(define gen_map 										 
	(lambda ()
		`(define map
			(lambda (proc items)
				(if (null? items)
					(list)
					(cons (proc (car items))
				  	  	  (map proc (cdr items))))))))


(define gen_reverseList
	(lambda ()
		`(define reverseList
      		(lambda (lst revList)
        		(if (null? lst)
            		revList
		            (reverseList (cdr lst) (cons (car lst) revList))))) ))


(define gen_append_helper
	(lambda ()
		`(define append_helper
      		(lambda (lists ans)
        		(cond 
        			((null? lists) ans) 
        			((null? ans) (append_helper (cdr lists) (car lists)))
					((and  (not (pair? (car lists))) (null? (car lists))) (append_helper (cdr lists) ans))		
            		(else (pair? (car lists)) (append_helper (cdr lists) (append_bin (reverseList ans '()) (car lists)))))))))

(define gen_append
	(lambda ()
		`(define append
			(lambda args 
					(cond ((null? args) (list))
						  ((null? (cdr args)) (car args))
						  (else (append_helper args '())))))))

(define gen_eq
	(lambda()
		'(define eq? 
			(lambda (exp1 exp2)
				(if (or (and (integer? exp1) (integer? exp2)) 
						(and (fraction? exp1) (fraction? exp2))
						(and (char? exp1) (char? exp2))
						(and (symbol? exp1) (symbol? exp2)))
					(compare_vals exp1 exp2)
					(if (or (and (null? exp1) (null? exp2))
							(and (void1? exp1) (void1? exp2))
							(and (boolean? exp1) (boolean? exp2))
							(and (string? exp1) (string? exp2))
							(and (vector? exp1) (vector? exp2))
							(and (pair? exp1) (pair? exp2)))
						(compare_address exp1 exp2)
						#f )
				)))))

(define gen_gcd
  (lambda ()
    `(define gcd
       (lambda (a b)
         (cond ((eq? b 0) a)
               (else (gcd b (remainder a b)))
         ))
    )))



	;;;;arithmetics:

(define gen_gcd_arthimetics_helper_func ;;input = fraction. output = number after gcd op on numer&denom
	(lambda ()
		`(define gcd_arthimetics_helper
				(lambda (frac)
					(letrec 
							((denom  (denominator frac))
							(numer (numerator frac))
							(gcd_number (gcd numer denom)))
						(if (eq_bin (number->fraction denom) (number->fraction 1)) 
							numer
									(create_frac numer denom gcd_number)))))))


(define gen_plus 
	(lambda ()
		`(define +
			(lambda arguments 
					(letrec ((plus_loop
						 (lambda (args)
								(cond 
									((null? args) (number->fraction 0))
									((null? (cdr args)) (plus_bin (number->fraction (car args)) (number->fraction 0)))
									(else (plus_bin (number->fraction (car args)) (plus_loop (cdr args)))))))
					(result (plus_loop arguments)))
					(gcd_arthimetics_helper result))))))	


(define gen_minus 
	(lambda ()
		`(define -
			(lambda arguments 
					(letrec ((minus_loop
						 (lambda (sum args)
								(cond 
									((null? (cdr args)) (minus_bin (number->fraction sum) (number->fraction (car args))))
									(else (minus_loop (minus_bin (number->fraction sum) (number->fraction (car args))) (cdr args))))))
					(result  (if (null? (cdr arguments)) 
									 (minus_loop  0 arguments)
									(minus_loop (car arguments) (cdr arguments)))))
							(gcd_arthimetics_helper result))))))


(define gen_mul 
	(lambda ()
		`(define *
			(lambda arguments 
					(letrec ((mul_loop
						 (lambda (args)
								(cond 
									((null? args) (number->fraction 1))
									((null? (cdr args)) (mul_bin (number->fraction (car args)) (number->fraction 1)))
									(else (mul_bin (number->fraction (car args)) (mul_loop (cdr args)))))))
					(result (mul_loop arguments)))
					(gcd_arthimetics_helper result))))))	
				
(define gen_div
	(lambda ()
		`(define /
			(lambda arguments 
					(letrec ((div_loop
						 (lambda (sum args)
								(cond 
									((null? (cdr args)) (div_bin (number->fraction sum) (number->fraction (car args))))
									(else (div_loop (div_bin (number->fraction sum) (number->fraction (car args))) (cdr args))))))
					(result  (if (null? (cdr arguments)) 
									 (div_loop  1 arguments)
									(div_loop (car arguments) (cdr arguments)))))
							(gcd_arthimetics_helper result))))))

(define gen_smaller
	(lambda ()
		`(define <
			(lambda arguments 
					(letrec ((smaller_loop
						 (lambda (ans args)
								(cond 
									((null? (cdr args)) ans)
									(else (smaller_loop (and ans (smaller_bin (number->fraction (car args)) (number->fraction (car (cdr args))))) 
										(cdr args))))))
					(result  (if (null? (cdr arguments)) 
									 #t
									(smaller_loop #t arguments))))
							result)))))

(define gen_greater
	(lambda ()
		`(define >
			(lambda arguments 
					(letrec ((greater_loop
						 (lambda (ans args)
								(cond 
									((null? (cdr args)) ans)
									(else (greater_loop (and ans (greater_bin (number->fraction (car args)) (number->fraction (car (cdr args))))) 
										(cdr args))))))
					(result  (if (null? (cdr arguments)) 
									 #t
									(greater_loop #t arguments))))
							result)))))
(define gen_eq_Op
	(lambda ()
		`(define =
			(lambda arguments 
					(letrec ((eq_loop
						 (lambda (ans args)
								(cond 
									((null? (cdr args)) ans)
									(else (eq_loop (and ans (eq_bin (number->fraction (car args)) (number->fraction (car (cdr args))))) 
										(cdr args))))))
					(result  (if (null? (cdr arguments)) 
									 #t
									(eq_loop #t arguments))))
							result)))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;*************************************** VERY IMPORTANT DO NOT DELETE !!!!!!!!!!!!!!! ************************************** ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; (define cadr
; 	(lambda (exp)
; 		(car (cdr exp))))

; (define cdar
; 	(lambda (exp)
; 		(cdr (car exp))))

; (define caar
; 	(lambda (exp)
; 		(car (car exp))))

; (define cddr
; 	(lambda (exp)
; 		(cdr (cdr exp))))

; (define caaar
; 	(lambda (exp)
; 		(cdr (car exp))))

; (define caadr
; 	(lambda (exp)
; 		(cdr (car exp))))

; (define cadar
; 	(lambda (exp)
; 		(cdr (car exp))))

; (define cdaar
; 	(lambda (exp)
; 		(cdr (car exp))))

; (define cdadr
; 	(lambda (exp)
; 		(cdr (car exp))))

; (define cddar
; 	(lambda (exp)
; 		(cdr (car exp))))

; (define cdddr
; 	(lambda (exp)
; 		(cdr (car exp))))


(define gen_make_string
  (lambda()
    `(define make-string (lambda (count . char)
         (if (null? char)
             (make-string_LEGACY count 0)
             (if (char? (car char)) (make-string_LEGACY count (car char)) #f))))))




(define addRSINScheme
	(lambda (src)
		`(begin ,(gen_map) ,(gen_reverseList) ,(gen_foldl_2) ,(gen_make_string)
			,(gen_append_helper) ,(gen_append) 
		 ,(gen_number) ,(gen_rational) ,(gen_eq) ,(gen_gcd)
		  ,(gen_gcd_arthimetics_helper_func) ,(gen_plus) ,(gen_minus) ,(gen_mul) ,(gen_div) ,(gen_smaller) ,(gen_greater) ,(gen_eq_Op)
		 ,@src)))




;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;;;; "CodeGen stars here ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************


(define counter_label -1)

(define updateCounter (lambda ()
	(set! counter_label (+ 1 counter_label)) counter_label))

(define resetAddress (lambda ()
	(set! counter_label -1)
	))


(define fvar_code_gen 
	(lambda  (var_name) 
			(let* ((counter (number->string (updateCounter)))
					(errorlabel (string-append "UNDEF_LABEL" counter))
					(finish_label (string-append "FINISH_FVAR_LABEL" counter)))
				(string-append 
					(CISC_comment "fvar code:")
					"MOV (R0 ,INDD(FVARARRAY," (number->string (lookupFvar var_name SCHEMEFvarsTable)) "));" n 
					"CMP (R0 , 0XDEF);" n 
					"JUMP_EQ (" errorlabel ");" n
					"JUMP (" finish_label ");"  n 
					errorlabel ":" n 
					"SHOW(\"THE VAR YOU ARE LOOKING FOR IS UNDEFINE\",R0);" n 
					"HALT;" n 
					finish_label ":" n))))



(define if_label (lambda (flag)
	(if flag
	(string-append "L_IF3_ELSE" (number->string (updateCounter)))
	(string-append "L_IF3_EXIT" (number->string (updateCounter)))
	)))

(define code_gen_if3 (lambda (test dit dif code_gen major) 
	(let ((else_label (if_label #t))
		 (exit_label (if_label #f)))
	(string-append  
					(CISC_comment "if3 code starts here")
					(code_gen test major) n
					"CMP (R0, SOB_FALSE);" n
				    "JUMP_EQ (" else_label ");" n
				    (code_gen dit major) n
				    "JUMP (" exit_label ");" n
				    else_label ":" n
				    (code_gen dif major) n
				    exit_label ":" n
				    (CISC_comment "if3 code ends here")

	))))

(define searchConstInSCHEMEconstTable (lambda (const constTable) 
		(if (equal? const (get-costa-from-tagged (car constTable)))
				(get-address-from-tagged (car constTable))
				(searchConstInSCHEMEconstTable const (cdr constTable)))))

(define code_gen_constant (lambda (const)
	(string-append "MOV (R0 ,INDD(CONSTARRAY," (number->string (searchConstInSCHEMEconstTable const SCHEMEconstTable)) "));" n)))


(define code_gen_or 
	(lambda (exprs code_gen major label-string)
		(if (null?  exprs) (string-append label-string ":" n)
			(string-append 
				(code_gen (car exprs) major) n
				"CMP (R0, SOB_FALSE);" n
				"JUMP_NE (" label-string ");" n
				(code_gen_or (cdr exprs) code_gen major label-string)))))


;;;should be with the optmizations of seq??
(define code_gen_seq (lambda (exprs code_gen major)
		(if (null? exprs) ""
			(string-append (code_gen (car exprs) major) (code_gen_seq (cdr exprs) code_gen major)))))


(define code_gen_applic_push_args 
	(lambda (argsLst major)
		(if (null? argsLst) 
			""
			(string-append 
				(code_gen (car argsLst) major) n "PUSH(R0);" n 
				(code_gen_applic_push_args (cdr argsLst) major)))))

(define push_args_if_needed
	(lambda (argsLst major)
		(if (null? argsLst)
			(string-append "PUSH (IMM(0));" n)
			(string-append (code_gen_applic_push_args argsLst major)
						    "PUSH(" (number->string (length argsLst)) ");" n) 
		)))

(define code_gen_applic 
	(lambda (op exprs code_gen major)
		(let ((errorLabel (string-append "L_Error_cannot_apply_non_closure_" (number->string (updateCounter)))))
		(string-append
			(push_args_if_needed (reverse exprs) major)
			(code_gen op major) n
			"CMP (INDD (R0,0) ,IMM(T_CLOSURE));" n
			"JUMP_NE("errorLabel");" n
			"MOV (R1 , INDD (R0,1));" n
			"PUSH (R1);" n
			"MOV (R1 , INDD (R0,2));" n
			"CALLA (R1);" n
			"DROP(1);" n "POP(R1);" n "DROP(R1);" n

			errorLabel":" n
		))))



(define run_over_frame (lambda ()
	(let* ((counter (number->string (updateCounter)))
		    (endParamsLabel (string-append "tc_applic_end_param_ranover" counter)) 
		   (forLabel (string-append "tc_applic_for_label" counter)))
	(string-append 
			(CISC_comment "run run_over_frame starts")
			"PUSH (R7);" n ;;push old 'ret address'
			;"PUSH (IMM(1));" n
			;;init 'for'-loop: (R9 = n+1 , n is the num of params of old applic)
			"MOV(R10 , STARG(IMM(1)));" n ;;after that line R10 = m
			"MOV(R12,R10);" n
			"CMP(R10 , IMM(0));" n ;;if there is no params, jump to the end of that func.
			"JUMP_EQ (" endParamsLabel ");" n 
			"ADD (R10 , IMM(1));" n ;;after that line R10 = m+1 , m is the num of params of new applic
			;;for-loop:
			forLabel ":" n
			"CMP (R10 , 1);" n ;;;loop condtion
			"JUMP_LE (" endParamsLabel ");" n
			"MOV (R11,STARG(R10));" n
			"MOV (FPARG(R9),R11);" n 
			"SUB (R9 , 1);" n "SUB (R10 , 1);" n  ;;; n-- , m--
			"JUMP (" forLabel ");" n
			;;for loop ends
			endParamsLabel ":" n
			;"MOV (R11, STARG(R10));" n  ;;;copy the new number of params
			"MOV (R11, R12);" n  ;;;copy the new number of params
			"MOV (FPARG(R9) , R11);" n 
			"SUB (R9 , 1);" n  ;;; n-- 
			"MOV (R11, STARG(0));" n  ;;;copy the new env pointer
			"MOV (FPARG(R9) , R11);" n 
			"SUB (R9 , 1);" n  ;;; n-- 
			"MOV (FPARG(R9) , R7);" n  ;;;assign the old 'ret' address
			"SUB (R9 , 1);" n  ;;; n-- 
			"MOV (SP ,FP);" n ;;repair SP
			"SUB (SP , R9);" n ;;repair SP
			"SUB (SP , 3);" n ;;repair SP
			"MOV (FP , R8);" n ;;that because the next line would be "PUSH FP" , and F8 holds the old fp(the one we need )
			(CISC_comment "run run_over_frame starts")
	))))

(define code_gen_tc_applic 
	(lambda (op exprs code_gen major)
		(let* 
			((counter (number->string (updateCounter)))
			(errorLabel (string-append "L_Error_cannot_tc_apply_non_closure_" counter)))
				(string-append
					(CISC_comment (string-append "tc-applic code starts here" counter))
					(push_args_if_needed (reverse exprs) major)
					(code_gen op major) n
					(CISC_comment (string-append "tc-applic cont" counter))
					"MOV (R7,FPARG(IMM(-1)));" n ;;;save 'ret-address' of old applic
					"MOV (R8, FPARG(IMM(-2)));" n ;;;save old fp
					"CMP (INDD (R0,0) ,IMM(T_CLOSURE));" n
					"JUMP_NE (" errorLabel ");" n
					"PUSH (INDD (R0,1));" n  ;;push env
					"MOV (R9 , FPARG(IMM(1)));" n ;;get the previous applic param number
					"ADD (R9 , IMM(1));" n  ;;add one for the last cell of the previous applic
					(run_over_frame) ;;;;R0 holds pointer to the closure 
					(CISC_comment "tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body")
					"JUMPA (INDD(R0,2)); " n
					errorLabel ":" n
					"SHOW (\"NOT A CLOSURE:\" , INDD(R0,0));" n 	
				))))




(define pvar_code_gen 		
	(lambda (var-name minor)
			(string-append
				(CISC_comment "pvar code starts here") 
				"MOV (R0,FPARG(" (number->string (+  2 minor)) "));" n	;;(+2 num) is for the offset from 'env'
				(CISC_comment "pvar code ends here"))))

(define box_get_code_gen 
	(lambda (var)
		(string-append
			(CISC_comment "box-get code starts here") 
			"MOV (R0,FPARG(2 + " (number->string (caddr var)) "));" n
			"MOV (R0, IND(R0));" n
			(CISC_comment "box-get code ends here"))))


(define pvar_code_gen 		
	(lambda (var-name minor)
		(string-append
			(CISC_comment "pvar code starts here") 
			"MOV (R0,FPARG(2 + " (number->string minor) "));" n	
			(CISC_comment "pvar code ends here"))))



(define bvar_code_gen 
	(lambda (var-name major minor) 
		(string-append 
			(CISC_comment "bvar code starts here") 
			"MOV (R0,FPARG(0));" n 
			"MOV (R0,INDD(R0," (number->string major) "));" n
			"MOV (R0,INDD(R0," (number->string minor) "));" n
			(CISC_comment "bvar code ends here"))))
 

(define repairStackForVarOpt
	(lambda (args)
		(let* ((lengthOfArgs (length args))
			   (counter (number->string (updateCounter)))
			   (loopLabel (string-append "LOOP_ARGS_" counter))
			   (exitLoopLabel (string-append "EXIT_LOOP_ARGS_" counter))
			   (loopOverStackLabel (string-append "FIXING_STACK_" counter))
			   (exitLoopOverStackLabel (string-append "EXIT_FIXING_STACK_" counter))
			   (ifNoOptionalArgs (string-append "NO_OPTIONAL_ARGS_" counter))
			   (loopNilCaseLabel (string-append "NIL_CASE_LOOP_" counter))
			   (exitLoopNilCaseLabel (string-append "EXIT_NIL_CASE_LOOP_" counter))
			   (finalLabel (string-append "FINAL_" counter)))
			(string-append
					(CISC_comment "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
				    "CMP (FPARG(1) , " (number->string lengthOfArgs) ");" n  	;If we should create a liked list from optional args
				    "JUMP_EQ(" ifNoOptionalArgs ");" n
				    "MOV (R8,FPARG(1)-"  (number->string lengthOfArgs) "- 1);" n  ;;ADDED BY NADAV
					"MOV (R6 ,SOB_NIL);" n 						;create linked list for optional args
					"MOV (R5 , R6);" n 							;R5 = iterator, R6 = pointer to head
					"MOV (R4 , FPARG(1));" n
					"DECR(R4);" n 								;R4 = num of args - 1
					loopLabel ":" n
					"CMP (R4 ," (number->string (- lengthOfArgs 1)) ");" n 	;add values to list not include the non optional args
					"JUMP_EQ(" exitLoopLabel ");" n
					;;nadav's changes: 2.3.2017 18:05 
					(call_malloc 3)
					;(call_malloc 2)
					"MOV (INDD(R0,0) , T_PAIR);" n 
					"MOV (INDD(R0,2) , R5);" n
					;"MOV (INDD(R0,1) , R5);" n 					;R0 holds the new block that will now point to the old block 
					"MOV (R5 , R0);" n 							;R5 = pointer to the new block
					"MOV (INDD(R5,1) , FPARG(2 + R4));" n 
					;"MOV (INDD(R5,0) , FPARG(2 + R4));" n 		;update value in new block
					"MOV (R6, R5);" n 							;R6 will point to the linked list head
					"DECR(R4);" n
					"JUMP(" loopLabel ");"n
					exitLoopLabel ":" n
					"MOV (FPARG(2 + " (number->string lengthOfArgs) "), R6);" n 		;move R6 to proper place on stack, hence after "must" args
					"MOV (R4, FPARG(1));" n 											;the old num of total args is on R4 in order to repair the stack
					"MOV (FPARG(1), " (number->string (+ 1 lengthOfArgs)) ");" n 		;the new num of args is the num of "must" args + 1 for the list
					"MOV (R3 , FPARG(1));" n 											;R3 = number of loops  = num of args (= "must" + 1) + 3 (= fp, ret, env ,num)
					"ADD (R3 , IMM(3));" n
					loopOverStackLabel ":" n
					"CMP (R3,IMM(0));"n
					"JUMP_EQ(" exitLoopOverStackLabel ");" n
					"MOV (FPARG(1 + R4), FPARG(-2 + R3));" n
					"DECR(R3);" n  "DECR(R4);" n
					"JUMP(" loopOverStackLabel ");"n
					exitLoopOverStackLabel ":" n
					"MOV (FPARG(1 + R4), FPARG(-2 + R3));" n 
					"MOV (SP , FP);" n 												;repair stack pointer according to Nadav "The Tool" Zilberstein formula
					"SUB (SP , R4);" n
					"SUB (SP , IMM(3));" n
					"SUB (FP,R8);" n  ;;ADDED BY NADAV , MR.T's suggestion
					"JUMP(" finalLabel ");" n
					ifNoOptionalArgs ":" n
					"MOV (R5 , SOB_NIL);" n 										;R5 = holds the data we want to add to the stack
					"MOV (R4 , FPARG(1));" n "ADD(R4 , IMM(4));" n 					;R4 = num of loops
					"ADD (FPARG(1) , IMM(1));" n 									;add nil to args so num of args is FPARG(1) + 1
					loopNilCaseLabel ":" n
					"CMP (R4 , IMM(0));" n
					"JUMP_EQ(" exitLoopNilCaseLabel ");" n
					"MOV (R3 , FPARG(-2 + R4 - 1));" n 								;R3 = holds the data from the stack that we will override
					"MOV (FPARG(-2 + R4 - 1) , R5);" n
					"MOV (R5 , R3);" n
					"DECR(R4);" n
					"JUMP(" loopNilCaseLabel");" n
					exitLoopNilCaseLabel ":" n
					"MOV (FPARG(-2 + R4 - 1) , R5);" n	
					"DECR(R4);" n
					"SUB(FP,R4);" n
					"MOV (SP , FP);" n
					finalLabel ":" n
					(CISC_comment "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
				)				
			)
		))


(define createLambdaBodyInCISC
		(lambda (args body code_gen major variadic optional) 
			(let* ((counter (number->string (updateCounter)))
				   (bodyLabel (string-append "L_CLOSURE_BODY_" counter))
				   (closExitLabel (string-append "L_CLOSURE_EXIT_" counter))
				   (errorLabel (string-append "L_ERROR_LAMBDA_ARGS_COUNT_" counter)))
				(string-append 
					"MOV (INDD(R0 ,2) ,LABEL(" bodyLabel "));" n
					"JUMP(" closExitLabel ");" n 
					bodyLabel":" n
					"PUSH(FP);" n
					"MOV (FP , SP);" n
					(if (and (equal? variadic 0) (equal? optional 0))
						(string-append "CMP(FPARG(1) , IMM(" (number->string (length args)) "));" n
										"JUMP_NE("errorLabel");" n )
						"")
					(if (or (equal? variadic 1) (equal? optional 1))
						(repairStackForVarOpt args)
						"")
					(code_gen body major)
					"POP(FP);" n
					"RETURN;"  n
					errorLabel":" n
					"INFO" n
					"SHOW(\"Wrong number of args!!!\" , FPARG(1));" n
					"HALT;"n
					closExitLabel ":" n
				))
		))

(define code_gen_lambda
	(lambda (newMajor code_gen)
		(let* ((counter (number->string (updateCounter)))
			  (exitLabel (string-append "EXIT_LOOP_COPY_" counter))
			  (copyLoopLabel (string-append "LOOP_COPY_ENV_" counter))
			  (exitExtendLabel (string-append "EXIT_LOOP_EXTEND_ENV_" counter))
			  (extendEnvLoopLabel (string-append "LOOP_EXTEND_ENV_" counter)))
		(string-append
			"MOV (R1,FPARG(0));" n
			"MOV(R2 ,SOB_NIL);" n  ;;;init R2(env)
			"CMP (" (number->string newMajor) ",IMM(1));" n ;;check if we should enlarge the env
			"JUMP_EQ (" exitExtendLabel ");" n 
			"PUSH(" (number->string newMajor) ");" n "CALL(MALLOC);" n "DROP(1);" n
			"MOV (R2,R0);" n
			"MOV (R4 , IMM(0));" n
			"MOV (R5 , IMM(1));" n
			copyLoopLabel":" n
			"CMP(R4," (number->string (- newMajor 1)) ");" n
			"JUMP_EQ("exitLabel");" n
			"MOV (INDD(R2,R5) , INDD(R1,R4) );" n
			"ADD(R4 , IMM(1));" n "ADD(R5 , IMM(1));" n
			"JUMP("copyLoopLabel");" n
			exitLabel":" n
			"MOV (R3 , FPARG(1));" n
			"PUSH(R3);" n "CALL(MALLOC);" n "DROP(1);" n
			"MOV (INDD(R2,0) , R0);"n
			"MOV (R4 , IMM(0));" n
			"MOV (R5 , IMM(2));" n
			extendEnvLoopLabel":" n
			"CMP(R4 , R3);" n
			"JUMP_EQ("exitExtendLabel");" n
			"MOV (INDD(INDD(R2,0), R4) , FPARG(R5));" n
			"ADD(R4 , IMM(1));" n "ADD(R5 , IMM(1));" n
			"JUMP("extendEnvLoopLabel");" n
			exitExtendLabel":" n
			"PUSH (IMM(3));" n "CALL(MALLOC);" n "DROP(1);" n
			"MOV (INDD(R0 ,0) , T_CLOSURE);" n
			"MOV (INDD(R0 ,1) , R2);" n
			))))




(define SCHVarTableLookUp (lambda (var_name fvarTable)   ;; var-name = ('fvar name) , SCHEMEFvarsTable = ((add1 var1) (add2 var2)...)
	(if (equal? (cadr var_name) (cadar fvarTable))
		(caar fvarTable)
		(SCHVarTableLookUp var_name (cdr fvarTable))
	)))

(define define_cod_gen 
	(lambda (var exp code_gen major)
		(let ((var_address (SCHVarTableLookUp var SCHEMEFvarsTable)))
			(string-append
				(CISC_comment "'def' code starts here")
				(code_gen exp major) ;;after that, r0 holds the result of 'exp'
				"MOV(INDD(FVARARRAY," (number->string var_address) "),R0);" n  ;;afther that, R7 holds the pointer to the var's value.  
				"MOV (R0 , SOB_VOID);" n
				(CISC_comment "'def' code ends here")
	))))


;;;box code gen start
(define box_code_gen (lambda (var code_gen major)  
		(call_malloc 1)
		"MOV (R15,R0);" n 
		"PUSH (R15);" n 
		(code_gen var major) ;;;now the CISC-value of 'var' is in R0
		"POP (R15);" n
		"MOV (IND(R15),R0);" n
		"MOV(R0,R15);" n ;;the result should be in R0
	))


(define box_set_code_gen 
	(lambda (var1 var2 code_gen major) 
	 	(string-append 
			(code_gen var1 major)
			"MOV (R14, R0)" n ;now R7 holds the pointer of var1-box
		
			"PUSH (R14);" n 
			(code_gen var2 major) ; now R0 holds the value of var2
			"POP (R14);" n 
			"MOV(IND(R14),R0);" n 
			"MOV (R0 , SOB_VOID);" n )))



(define box_get_code_gen (lambda (var code_gen major)
	(string-append
		(code_gen var major) ;now R0 holds the value of var
		"MOV(R0, IND (R0));" n 
	)))
;;box code gen ends
;;;code-gen of SET

(define code_gen_setFvar (lambda (fvar value code_gen major) 
	;;;;maybe i should check if the Fvar is defined before.
	(let ((fvar_offset (SCHVarTableLookUp fvar SCHEMEFvarsTable)))
		(string-append 
			(code_gen value major)
			"MOV(INDD(FVARARRAY," (number->string fvar_offset) "),R0);" n))))

(define code_gen_setBvar (lambda (bvar value code_gen major_of_code_gen) 
	(let ((major (caddr bvar))
		  (minor (cadddr bvar)))
			(string-append
					(code_gen value major_of_code_gen) ;;r0 = value

					"MOV (R7,FPARG(0));" n ;; now R7 hold the env 
					"MOV (R7,INDD(R7," (number->string major) "));" n
					"MOV (INDD(R7," (number->string minor) "),R0);" n))))

(define code_gen_setPvar (lambda (pvar value code_gen major) 
	(let ((minor (+ 2 (caddr pvar)))) ;;(+2 pvar) is for the offset from 'env'
					(string-append
						(code_gen value major) ;;r0 = value
						"MOV(FPARG(" (number->string minor) "),R0);" n))))
(define set_code_gen 
	(lambda (varible value code_gen major)
		(let ((var_kind (car varible)))
			(string-append 
				(cond
					((equal? var_kind 'fvar) (code_gen_setFvar varible value code_gen major))
					((equal? var_kind 'bvar) (code_gen_setBvar varible value code_gen major))
					((equal? var_kind 'pvar) (code_gen_setPvar varible value code_gen major)))
				"MOV (R0,SOB_VOID);" n 
				))))

;;;end (code-gen of SET)


(define  code_gen  
	(lambda (exp major)
		(let ((run 
		(compose-patterns

			(pattern-rule 
					`(box ,(? 'var)) 
						(lambda (var) (box_code_gen var code_gen major)))

			(pattern-rule 
				`(box-get ,(? 'var)) 
					(lambda (var) (box_get_code_gen var code_gen major)))
				
			(pattern-rule 
					`(box-set ,(? 'var1) ,(? 'var2)) 
						(lambda (var1 var2) (box_set_code_gen var1 var2 code_gen major)))

			(pattern-rule 
				`(pvar ,(? 'var-name) ,(? 'minor)) 
					(lambda (var-name minor) (pvar_code_gen var-name minor)))
			
			(pattern-rule 
				`(bvar ,(? 'var-name) ,(? 'major) ,(? 'minor)) 
					(lambda (var-name major minor) 
							(bvar_code_gen var-name major minor)))

			(pattern-rule 
					`(fvar ,(? 'var-name)) 
						(lambda (var_name) 	
								(fvar_code_gen var_name)
							))


			(pattern-rule `(const ,(? 'const)) 
						(lambda (const) (code_gen_constant const)))


			(pattern-rule
				`(if3 ,(? 'test) ,(? 'dit) ,(? 'dif))
					(lambda (test dit dif) 
						(code_gen_if3 test dit dif code_gen major)))

			(pattern-rule
				`(or  ,(? 'expr))
					(lambda (exprs) 
						(string-append 
							(CISC_comment "or code starts here")
							(code_gen_or exprs code_gen major
								(string-append "L_OR_EXIT" (number->string (updateCounter))))
							(CISC_comment "or code ends here"))))

			(pattern-rule 
					`(lambda-simple ,(? 'params) ,(? 'body))
						(lambda (params body)
							(string-append 
								(CISC_comment "lambda-simple code starts here") 
								(code_gen_lambda (+ 1 major) code_gen)
								(createLambdaBodyInCISC  params body code_gen (+ 1 major) 0 0)
								(CISC_comment "lambda-simple code ends here"))))			
		
			(pattern-rule 
				`(lambda-opt ,(? 'args) ,(? 'rest) ,(? 'body)) 
					(lambda (args rest body) 
							(string-append 
								(CISC_comment "lambda-opt code starts here") 
								(code_gen_lambda (+ 1 major) code_gen)
								(createLambdaBodyInCISC  args body code_gen (+ 1 major) 0 1)
								(CISC_comment "lambda-opt code ends here"))))
			
			(pattern-rule 
				`(lambda-var ,(? 'args ) ,(? 'body)) 
					(lambda (args body) 
							(string-append 
								(CISC_comment "lambda-var code starts here") 
								(code_gen_lambda (+ 1 major) code_gen)
								(createLambdaBodyInCISC  '() body code_gen (+ 1 major) 1 0)
								(CISC_comment "lambda-var code ends here"))))


			(pattern-rule
				`(def ,(? 'var) ,(? 'exps))
					(lambda (var exps)
						(define_cod_gen var exps code_gen major)
					))


			(pattern-rule
				`(applic ,(? 'op )  ,(? 'exprs))
					(lambda (op exprs) 
						(string-append 
							(CISC_comment "applic code starts here")
							(code_gen_applic op exprs code_gen major)
							(CISC_comment "applic code ends here"))))
					
			(pattern-rule
				`(tc-applic ,(? 'op )  ,(? 'exprs))
					(lambda (op exprs)
						(code_gen_tc_applic op exprs code_gen major)))

			(pattern-rule
				`(seq ,(? 'exps))
					(lambda (exprs) (string-append (CISC_comment "seq code starts") 
						(code_gen_seq exprs code_gen major) (CISC_comment "seq code ends"))))

			(pattern-rule
				`(set  ,(? 'var ) ,(? 'val)) 
					(lambda (var val)
							(set_code_gen var val code_gen major)))

			)))

		 (run exp
				(lambda ()
					(error 'parse (format "Zlatan was here ~s" exp)))))))




 (define prolouge "#include <stdio.h>
#include <stdlib.h>
#define DO_SHOW 1
#include \"arch/cisc.h\"
#include \"arch/beneyal.h\"
int main()
{
START_MACHINE;
JUMP(CONTINUE);
#include \"arch/char.lib\"
#include \"arch/io.lib\"
#include \"arch/math.lib\"
#include \"arch/string.lib\"
#include \"arch/system.lib\"
#include \"arch/scheme.lib\"
CONTINUE:
")


(define epilogue 
"

STOP_MACHINE;
return 0;
}")



(define run_ass1
 (lambda (src)  (<Sexpr> src
     (lambda (result remaining)
	       (if (null? remaining)
		   `(,result)   
		   (cons result (run_ass1 remaining))))  (lambda () 'ass1FAIL))))


(define runAss3 (lambda (exp) 
	(annotate-tc (pe->lex-pe (box-set (remove-applic-lambda-nil (eliminate-nested-defines (parse  exp))))))))


(define code_gen_for_exp (lambda (parsed_exp) 
	(let ((void_label (string-append "R0_IS_VOID_number_" (number->string (updateCounter)))))

		(string-append
			(code_gen parsed_exp 0) n 
			"INFO" n 
			"CMP(R0,SOB_VOID);" n 
			"JUMP_EQ(" void_label ");" n 
			"PUSH(R0); " n 
			"CALL(WRITE_SOB);" n 
			"DROP(1);" n 
			"PUSH(10); " n 
			"CALL(PUTCHAR);" n 
			"DROP(1);" n 
			void_label ":" n 
	))))



(define gen_many_exp 
	(lambda (exprs acc) 
		(if (null? exprs)
			acc
			(gen_many_exp (cdr exprs) (string-append acc (car exprs))
	))))

(define compile-scheme-file (lambda (file out)
	(let* (
			(src_after_ass1  (run_ass1 (string->list (file->string file))))
			(shit_and_src   (addRSINScheme src_after_ass1))
			(after_ass3  (runAss3  shit_and_src))
			(CISC-const-table  (buildConstantTable after_ass3))
			(CISC_symbol_table  (buildSymbolTable))
			(CISC-fvar-table (buildFvarTable after_ass3))	
			(all_parsed_exp (map runAss3 (cdr shit_and_src))) ;;cdr = because "gen-list"(in scheme) starts with 'begin'
			(gen_all_code_and_save_it_in_a_list (map code_gen_for_exp all_parsed_exp))
			(codeGen (gen_many_exp  gen_all_code_and_save_it_in_a_list "")))  ;;append all the list to one big string
	;CISC-fvar-table
	(writeToFile out
		(string-append 
				prolouge
				MACROS
				CISC-const-table
				CISC_symbol_table	
				CISC-fvar-table		
				codeGen
				epilogue
			)))))


(define test (lambda () 
	(compile-scheme-file "in.scm" "out.c")
	))



     