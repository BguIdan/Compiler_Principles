;;; torture-test-for-compiler-008.scm
;;; << WHAT DOES THIS FILE CONTAIN >>
;;;
;;; Programmer: Mayer Goldberg, 2012

(define with (lambda (s f) (apply f s)))

(define fact
  (letrec ((fact-1
	    (lambda (n r)
	      (if (zero? n)
		  r
		 5))))
    (lambda (n)
      (fact-1 n 1))))
      
(fact 5)      