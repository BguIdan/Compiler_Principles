(define readsReg (lambda (exp) (cadr exp)))

(define writesReg (lambda (exp) (caddr exp)))

(define shouldStayHelper (lambda (write-exp ans) 
		(if (null? ans) #t 
			(if (member write-exp (readsReg (car ans))) #t 
				(if (not (member write-exp (writesReg (car ans)))) 
					(shouldStayHelper write-exp (cdr ans))
					#f)))))

(define shouldStay (lambda (writesReg ans) 
		(ormap (lambda (write-exp) (shouldStayHelper write-exp ans)) writesReg)))

(define recRemww (lambda (exps ans)  
	(cond ((null? exps) ans)
		  ((null? (writesReg (car exps))) (recRemww (cdr exps) ans))
		  ((shouldStay (writesReg (car exps)) ans) 
		  				(recRemww 
		  					(cdr exps) 
		  					(cons (car exps) ans)))
		  (else (recRemww (cdr exps)  ans)))))

 (define remww (lambda (exps)
 	(recRemww (reverse exps) '())))