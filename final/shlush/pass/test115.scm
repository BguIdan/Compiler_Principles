(define tail_test (lambda (n1) ((lambda (n2 n3) (+ n1 n3)) 10 15))) (tail_test 1)                               ; 16
