(load "pattern-matcher.scm")
(load "pc.scm")



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

(define printE (lambda (e) (newline) (display e) (newline) (newline)))

;***********************************************************************************
;;;;;;;;;;;;;;;;;;;;;;;; "Constants Table starts here ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;***********************************************************************************

;(define listToTopogListHelper (lambda (lst collectList collectVals) 
;		(if (null? lst) 
;			(append (reverse collectVals) collectList)
;			(listToTopogListHelper (cdr lst) (cons lst collectList) (cons (car lst) collectVals))
;	)))

;(define listToTopogList (lambda (lst ans) 
;		(let ((expandedLst (listToTopogListHelper lst '() '())))
;			(letrec ((loopLst 
;				(lambda (expandedLst)
;					(if (null? expandedLst) 
;						'()
;						(if (member (car expandedLst) ans) 
;							(loopLst (cdr expandedLst))
;							(cons (car expandedLst) (loopLst (cdr expandedLst)))
;				)))))
;				(if (null? ans) 
;				  (loopLst expandedLst)
;				  (append ans (loopLst expandedLst)))
;))))	


;(define vectorToTopogList (vec ans)
	;	(map (lambda (exp) (buildTopologList exp ans)) vec) 

	;)

;(define buildTopologList (lambda (lst ans)
;	(cond 
;		((null? lst) ans)
;		((not (list? (car lst))) (buildTopologList (cdr lst) (addIfNotDuplicate (car lst) ans)))
;		((list? (car lst)) (buildTopologList (cdr lst) (listToTopogList (car lst) ans)))
;		;((vector? (car lst)) (buildTopologList (cdr lst) (vectorToTopogList (vector->list (car lst)) ans)))
;		(else ans)  ;;;else - maybe vector condition
;		)))



(define T_NIL "T_NIL_MESSI")
(define T_VOID "T_VOID_RONALDO")
(define T_BOOL0 "T_BOOL0_GERRARD")
(define T_BOOL1 "T_BOOL1_POGBA")



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


(define dup? (lambda (val ans)
	(ormap (lambda (exp-lst) (member val exp-lst)) ans)))


(define make-number&symbol-tag (lambda (costa ans tag)
			(if (dup? costa ans)
				ans
				`(,@ans ,(list 'Numadd costa (cons tag costa))))))

(define make-char-tag (lambda (costa ans)
			(if (dup? costa ans)
				ans
				`(,@ans ,(list 'Charadd costa (cons "T_CHAR" (char->integer costa)))))))

(define get-costa-from-tagged (lambda (tagged) 
		(cadr tagged)
	))

(define get-address-from-tagged (lambda (tagged)
		(car tagged)
	))


;;;;;vector&string-funcs

(define searchAdd (lambda (exp tagged-lst) 
	(if (equal? (get-costa-from-tagged (car tagged-lst)) exp) 
			(get-address-from-tagged (car tagged-lst))
			(searchAdd exp (cdr tagged-lst)))))


(define buildAddressList-Vector&String (lambda (lst tagged-lst) 
		(if (null? lst) '()
			(cons (searchAdd (car lst) tagged-lst) (buildAddressList-Vector&String (cdr lst) tagged-lst)))))

(define vector&string-tag (lambda (costa lst tag ans) 
		`(,@ans  ,(list 'vec&stringAdd costa  `(,tag ,(length lst) ,@(buildAddressList-Vector&String lst ans))))))

;;end vector and string funcs

(define taggingConstsHelper (lambda (costa ans) 
	(cond 
		((null? costa) ans)
		((boolean? costa) ans)
		((number? costa) (make-number&symbol-tag costa ans "T_INT"))
		((symbol? costa) (make-number&symbol-tag costa ans "T_SYMBOL"))
		((char? costa)  (make-char-tag costa ans))
		((string? costa) (if (dup? costa ans) ans (vector&string-tag costa (string->list costa) "T_STRING"
						(letrec ((loop-lst (lambda (lst ans) 
							(if (null? lst) ans 
								(loop-lst (cdr lst) (taggingConstsHelper (car lst) ans))))))
						(loop-lst (string->list costa) ans)))))
		((vector? costa) (if (dup? costa ans) ans (vector&string-tag costa (vector->list costa) "T_Vector"
			(letrec ((loop-lst (lambda (lst ans) 
						(if (null? lst) ans 
							(loop-lst (cdr lst) (taggingConstsHelper (car lst) ans))))))
					(loop-lst (vector->list costa) ans)))))
		;((pair? costa) ...)
		(else costa))))




(define taggingConsts (lambda (constList ans)
	(if (null? constList) 
			ans
			(taggingConsts (cdr constList) (taggingConstsHelper (car constList) ans)))))


(define initConstTable (lambda ()
		(list 
			(list 'nillAdd '() T_NIL)
			(list 'voidAdd (if #f 'cr7) T_VOID)
			(list 'bool0Add #f T_BOOL0)
			(list 'bool1Add  #t T_BOOL1))

	))

(define buildConstantTable (lambda (ast) 
	(let* ((constList (buildConstList ast '()))
		  (constTable (taggingConsts constList (initConstTable))))
		constTable

	)))



;address
;make-tuple


(define file->string (lambda (in-file)
	(let ((in-port (open-input-file in-file)))
		(letrec ((run (lambda ()
			(let ((ch (read-char in-port)))
				(if (eof-object? ch)
					(begin (close-input-port in-port) '())
					(cons ch (run)))))))
			(list->string (run))))))


(define runAss3 (lambda (exp) 
	(annotate-tc (pe->lex-pe (box-set (remove-applic-lambda-nil (eliminate-nested-defines exp)))))))


(define code-gen (lambda () #t))
(define compile-scheme-file (lambda (src CISC) 
	(runAss3 (parse (<Sexpr> (file->string src))))	
	))

(define a (lambda (lst) 
	(buildConstantTable (runAss3 (parse lst)))
	))