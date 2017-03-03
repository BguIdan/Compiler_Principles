#include <stdio.h>
#include <stdlib.h>
#define DO_SHOW 1
#include "cisc.h"
#include "beneyal.h"
int main()
{
START_MACHINE;
JUMP(CONTINUE);
#include "char.lib"
#include "io.lib"
#include "math.lib"
#include "string.lib"
#include "system.lib"
#include "scheme.lib"
CONTINUE:
#define SOB_NIL IND (CONSTARRAY)
#define SOB_VOID INDD (CONSTARRAY,1)
#define SOB_TRUE INDD (CONSTARRAY,2)
#define SOB_FALSE INDD (CONSTARRAY,3)

/*************init Const-Table starts here***********/
PUSH(IMM(8));
CALL (MALLOC);
DROP(1);
MOV (CONSTARRAY,R0);
CALL (MAKE_SOB_NIL);
MOV (INDD(CONSTARRAY,0),R0);
CALL (MAKE_SOB_VOID);
MOV(INDD(CONSTARRAY,1) , R0);
PUSH (1);
CALL (MAKE_SOB_BOOL);
DROP(1);
MOV(INDD(CONSTARRAY,2) , R0);
PUSH (0);
CALL (MAKE_SOB_BOOL);
DROP(1);
MOV(INDD(CONSTARRAY,3) , R0);
PUSH (0);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,4) , R0);
PUSH (1);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,5) , R0);
PUSH (2);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,6) , R0);
PUSH (3);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,7) , R0);

/*************init Const-Table ends here***********/

/*************symbol table starts: ***********/
MOV (R7,SOB_NIL);
MOV (SYMBOLTABLE,R7);

/*************symbol table ends: ***********/

/*************init Fvar-Table start here***********/
PUSH(IMM(63));
CALL (MALLOC);
DROP(1);
MOV (FVARARRAY,R0);
MOV(INDD(FVARARRAY,0) , 0XDEF);
MOV(INDD(FVARARRAY,1) , 0XDEF);
MOV(INDD(FVARARRAY,2) , 0XDEF);
MOV(INDD(FVARARRAY,3) , 0XDEF);
MOV(INDD(FVARARRAY,4) , 0XDEF);
MOV(INDD(FVARARRAY,5) , 0XDEF);
MOV(INDD(FVARARRAY,6) , 0XDEF);
MOV(INDD(FVARARRAY,7) , 0XDEF);
MOV(INDD(FVARARRAY,8) , 0XDEF);
MOV(INDD(FVARARRAY,9) , 0XDEF);
MOV(INDD(FVARARRAY,10) , 0XDEF);
MOV(INDD(FVARARRAY,11) , 0XDEF);
MOV(INDD(FVARARRAY,12) , 0XDEF);
MOV(INDD(FVARARRAY,13) , 0XDEF);
MOV(INDD(FVARARRAY,14) , 0XDEF);
MOV(INDD(FVARARRAY,15) , 0XDEF);
MOV(INDD(FVARARRAY,16) , 0XDEF);
MOV(INDD(FVARARRAY,17) , 0XDEF);
MOV(INDD(FVARARRAY,18) , 0XDEF);
MOV(INDD(FVARARRAY,19) , 0XDEF);
MOV(INDD(FVARARRAY,20) , 0XDEF);
MOV(INDD(FVARARRAY,21) , 0XDEF);
MOV(INDD(FVARARRAY,22) , 0XDEF);
MOV(INDD(FVARARRAY,23) , 0XDEF);
MOV(INDD(FVARARRAY,24) , 0XDEF);
MOV(INDD(FVARARRAY,25) , 0XDEF);
MOV(INDD(FVARARRAY,26) , 0XDEF);
MOV(INDD(FVARARRAY,27) , 0XDEF);
MOV(INDD(FVARARRAY,28) , 0XDEF);
MOV(INDD(FVARARRAY,29) , 0XDEF);
MOV(INDD(FVARARRAY,30) , 0XDEF);
MOV(INDD(FVARARRAY,31) , 0XDEF);
MOV(INDD(FVARARRAY,32) , 0XDEF);
MOV(INDD(FVARARRAY,33) , 0XDEF);
MOV(INDD(FVARARRAY,34) , 0XDEF);
MOV(INDD(FVARARRAY,35) , 0XDEF);
MOV(INDD(FVARARRAY,36) , 0XDEF);
MOV(INDD(FVARARRAY,37) , 0XDEF);
MOV(INDD(FVARARRAY,38) , 0XDEF);
MOV(INDD(FVARARRAY,39) , 0XDEF);
MOV(INDD(FVARARRAY,40) , 0XDEF);
MOV(INDD(FVARARRAY,41) , 0XDEF);
MOV(INDD(FVARARRAY,42) , 0XDEF);
MOV(INDD(FVARARRAY,43) , 0XDEF);
MOV(INDD(FVARARRAY,44) , 0XDEF);
MOV(INDD(FVARARRAY,45) , 0XDEF);
MOV(INDD(FVARARRAY,46) , 0XDEF);
MOV(INDD(FVARARRAY,47) , 0XDEF);
MOV(INDD(FVARARRAY,48) , 0XDEF);
MOV(INDD(FVARARRAY,49) , 0XDEF);
MOV(INDD(FVARARRAY,50) , 0XDEF);
MOV(INDD(FVARARRAY,51) , 0XDEF);
MOV(INDD(FVARARRAY,52) , 0XDEF);
MOV(INDD(FVARARRAY,53) , 0XDEF);
MOV(INDD(FVARARRAY,54) , 0XDEF);
MOV(INDD(FVARARRAY,55) , 0XDEF);
MOV(INDD(FVARARRAY,56) , 0XDEF);
MOV(INDD(FVARARRAY,57) , 0XDEF);
MOV(INDD(FVARARRAY,58) , 0XDEF);
MOV(INDD(FVARARRAY,59) , 0XDEF);
MOV(INDD(FVARARRAY,60) , 0XDEF);
MOV(INDD(FVARARRAY,61) , 0XDEF);
MOV(INDD(FVARARRAY,62) , 0XDEF);

/*************init Fvar-Table ends here***********/

/*************RS_car starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_car_body));
MOV(INDD(FVARARRAY,0),R0);
JUMP (RS_make_car_closure_ends);
RS_LABEL_car_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_CAR);
MOV(R7,FPARG(2)); 
CMP (INDD (R7,0),IMM(T_PAIR));
JUMP_NE(RS_ERORR_CAR);
MOV(R0,INDD(R7,1));
POP(FP);
RETURN;
RS_ERORR_CAR:
SHOW("error in procedure 'car",R7);
HALT;
RS_make_car_closure_ends:

/*************RS_car ends***********/

/*************RS_cdr starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_cdr_body));
MOV(INDD(FVARARRAY,1),R0);
JUMP (RS_make_cdr_closure_ends);
RS_LABEL_cdr_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_CDR);
MOV(R7,FPARG(2)); 
CMP (INDD (R7,0),IMM(T_PAIR));
JUMP_NE(RS_ERORR_CDR);
MOV(R0,INDD(R7,2));
POP(FP);
RETURN;
RS_ERORR_CDR:
SHOW("error in procedure 'cdr",R0);
HALT;
RS_make_cdr_closure_ends:

/*************RS_cdr ends***********/

/*************RS_cons starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_cons_body));
MOV(INDD(FVARARRAY,2),R0);
JUMP (RS_make_cons_closure_ends);
RS_LABEL_cons_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_CONS);
JUMP_NE (RS_ERORR_CONS);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_PAIR);
MOV(INDD(R0,1),FPARG(2));
MOV(INDD(R0,2),FPARG(3));
POP(FP);
RETURN;
RS_ERORR_CONS:
SHOW("error in procedure cons",R0);
HALT;
RS_make_cons_closure_ends:

/*************RS_cons ends***********/

/*************RS_set_car starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_SETCAR_body));
MOV(INDD(FVARARRAY,3),R0);
JUMP (RS_make_SETCAR_closure_ends);
RS_LABEL_SETCAR_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_SETCAR);
CMP (IND(FPARG(2)),T_PAIR);
JUMP_NE (RS_ERORR_SETCAR);
MOV (INDD(FPARG(2),1),FPARG(3));
MOV(R0,SOB_VOID);
POP(FP);
RETURN;
RS_ERORR_SETCAR:
SHOW("error in procedure 'SET_CAR!",FPARG(2));
HALT;
RS_make_SETCAR_closure_ends:

/*************RS_set_car ends***********/

/*************RS_set_cdr starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_SETCDR_body));
MOV(INDD(FVARARRAY,4),R0);
JUMP (RS_make_SETCDR_closure_ends);
RS_LABEL_SETCDR_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_SETCDR);
CMP (IND(FPARG(2)),T_PAIR);
JUMP_NE (RS_ERORR_SETCDR);
MOV (INDD(FPARG(2),2),FPARG(3));
MOV(R0,SOB_VOID);
POP(FP);
RETURN;
RS_ERORR_SETCDR:
SHOW("error in procedure 'SET_CDR!",R0);
HALT;
RS_make_SETCDR_closure_ends:

/*************RS_set_cdr ends***********/

/*************RS_boolean?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_boolean_body));
MOV(INDD(FVARARRAY,5),R0);
JUMP (RS_LABEL_boolean_finish);
RS_LABEL_boolean_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_BOOLEAN);
CMP (IND(FPARG(2)),T_BOOL);
JUMP_EQ (RS_BOOLEAN_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_BOOLEAN:
SHOW("error in procedure boolean?",FPARG(2));
HALT;
RS_BOOLEAN_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_boolean_finish:

/*************RS_boolean?ends***********/

/*************RS_char?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_char_body));
MOV(INDD(FVARARRAY,6),R0);
JUMP (RS_LABEL_char_finish);
RS_LABEL_char_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_char);
CMP (IND(FPARG(2)),T_CHAR);
JUMP_EQ (RS_char_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_char:
SHOW("error in procedure char?",FPARG(2));
HALT;
RS_char_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_char_finish:

/*************RS_char?ends***********/

/*************RS_integer?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_integer_body));
MOV(INDD(FVARARRAY,7),R0);
JUMP (RS_LABEL_integer_finish);
RS_LABEL_integer_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_integer);
CMP (IND(FPARG(2)),T_INTEGER);
JUMP_EQ (RS_integer_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_integer:
SHOW("error in procedure integer?",FPARG(2));
HALT;
RS_integer_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_integer_finish:

/*************RS_integer?ends***********/

/*************RS_pair?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_pair_body));
MOV(INDD(FVARARRAY,8),R0);
JUMP (RS_LABEL_pair_finish);
RS_LABEL_pair_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_pair);
CMP (IND(FPARG(2)),T_PAIR);
JUMP_EQ (RS_pair_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_pair:
SHOW("error in procedure pair?",FPARG(2));
HALT;
RS_pair_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_pair_finish:

/*************RS_pair?ends***********/

/*************RS_procedure?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_procedure_body));
MOV(INDD(FVARARRAY,9),R0);
JUMP (RS_LABEL_procedure_finish);
RS_LABEL_procedure_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_procedure);
CMP (IND(FPARG(2)),T_CLOSURE);
JUMP_EQ (RS_procedure_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_procedure:
SHOW("error in procedure procedure?",FPARG(2));
HALT;
RS_procedure_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_procedure_finish:

/*************RS_procedure?ends***********/

/*************RS_string?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_string_body));
MOV(INDD(FVARARRAY,10),R0);
JUMP (RS_LABEL_string_finish);
RS_LABEL_string_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_string);
CMP (IND(FPARG(2)),T_STRING);
JUMP_EQ (RS_string_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_string:
SHOW("error in procedure string?",FPARG(2));
HALT;
RS_string_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_string_finish:

/*************RS_string?ends***********/

/*************RS_symbol?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_symbol_body));
MOV(INDD(FVARARRAY,11),R0);
JUMP (RS_LABEL_symbol_finish);
RS_LABEL_symbol_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_symbol);
CMP (IND(FPARG(2)),T_SYMBOL);
JUMP_EQ (RS_symbol_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_symbol:
SHOW("error in procedure symbol?",FPARG(2));
HALT;
RS_symbol_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_symbol_finish:

/*************RS_symbol?ends***********/

/*************RS_vector?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_vector_body));
MOV(INDD(FVARARRAY,12),R0);
JUMP (RS_LABEL_vector_finish);
RS_LABEL_vector_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_vector);
CMP (IND(FPARG(2)),T_VECTOR);
JUMP_EQ (RS_vector_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_vector:
SHOW("error in procedure vector?",FPARG(2));
HALT;
RS_vector_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_vector_finish:

/*************RS_vector?ends***********/

/*************RS_null?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_null_body));
MOV(INDD(FVARARRAY,13),R0);
JUMP (RS_LABEL_null_finish);
RS_LABEL_null_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_null);
CMP (IND(FPARG(2)),T_NIL);
JUMP_EQ (RS_null_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_null:
SHOW("error in procedure null?",FPARG(2));
HALT;
RS_null_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_null_finish:

/*************RS_null?ends***********/

/*************RS_void?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_void_body));
MOV(INDD(FVARARRAY,14),R0);
JUMP (RS_LABEL_void_finish);
RS_LABEL_void_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_void);
CMP (IND(FPARG(2)),T_VOID);
JUMP_EQ (RS_void_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_void:
SHOW("error in procedure void?",FPARG(2));
HALT;
RS_void_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_void_finish:

/*************RS_void?ends***********/

/*************RS_fraction?starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_fraction_body));
MOV(INDD(FVARARRAY,15),R0);
JUMP (RS_LABEL_fraction_finish);
RS_LABEL_fraction_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_fraction);
CMP (IND(FPARG(2)),T_FRACTION);
JUMP_EQ (RS_fraction_TRUE_COND);
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_fraction:
SHOW("error in procedure fraction?",FPARG(2));
HALT;
RS_fraction_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_fraction_finish:

/*************RS_fraction?ends***********/

/*************RS_zero? starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_zero_body));
MOV(INDD(FVARARRAY,16),R0);
JUMP (RS_make_zero_closure_ends);
RS_LABEL_zero_body:
PUSH(FP);
MOV(FP,SP);
MOV(R0,SOB_TRUE);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_zero);
CMP (IND(FPARG(2)),T_INTEGER);
JUMP_NE (RS_ERORR_zero);
MOV(R7,INDD(FPARG(2),1));
CMP(R7,0);
JUMP_EQ(RS_zero_true_cond); 
MOV(R0,SOB_FALSE);
POP(FP);
RETURN;
RS_ERORR_zero:
SHOW("error in procedure zero?",R0);
HALT;
RS_zero_true_cond:
POP(FP);
RETURN;
RS_make_zero_closure_ends:

/*************RS_zero? ends***********/

/*************RS_not starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_not_body));
MOV(INDD(FVARARRAY,17),R0);
JUMP (RS_make_not_closure_ends);
RS_LABEL_not_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_not);
MOV(R0,SOB_FALSE);
MOV(R7,FPARG(2));
CMP (IND(R7),T_BOOL);
JUMP_NE (RS_not_true_cond);
CMP (INDD(R7,1) , 1);
JUMP_EQ (RS_not_true_cond);
MOV(R0,SOB_TRUE);
POP(FP);
RETURN;
RS_ERORR_not:
SHOW("error in procedure not",R0);
HALT;
RS_not_true_cond:
POP(FP);
RETURN;
RS_make_not_closure_ends:

/*************RS_not ends***********/

/*************RS_compare_address starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_compare_address_body));
MOV(INDD(FVARARRAY,18),R0);
JUMP (RS_compare_address_closure_ends);
RS_compare_address_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_compare_address);
CMP (FPARG(2) , FPARG(3));
JUMP_NE(RS_compare_address_False_Label);
MOV (R0 , SOB_TRUE);
JUMP(RS_compare_address_Exit_Label);
RS_compare_address_False_Label:
MOV (R0 , SOB_FALSE);
RS_compare_address_Exit_Label:
POP(FP);
RETURN;
RS_ERORR_RS_compare_address:
SHOW("error in procedure RS_compare_address",R0);
HALT;
RS_compare_address_closure_ends:

/*************RS_compare_address ends***********/

/*************RS_compare_vals starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_compare_vals_body));
MOV(INDD(FVARARRAY,19),R0);
JUMP (RS_compare_vals_closure_ends);
RS_compare_vals_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_compare_vals);
CMP (INDD(FPARG(2),1) , INDD(FPARG(3),1));
JUMP_NE(RS_compare_vals_False_Label);
MOV (R0 , SOB_TRUE);
JUMP(RS_compare_vals_Exit_Label);
RS_compare_vals_False_Label:
MOV (R0 , SOB_FALSE);
RS_compare_vals_Exit_Label:
POP(FP);
RETURN;
RS_ERORR_RS_compare_vals:
SHOW("error in procedure RS_compare_vals",R0);
HALT;
RS_compare_vals_closure_ends:

/*************RS_compare_vals ends***********/

/*************RS_symbolToString  starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_symbolToString_body));
MOV(INDD(FVARARRAY,21),R0);
JUMP (RS_make_symbolToString_closure_ends);
RS_LABEL_symbolToString_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_symbolToString);
CMP (IND(FPARG(2)),T_SYMBOL);
JUMP_NE (RS_ERORR_symbolToString);
MOV(R0,INDD(FPARG(2),1));
POP(FP);
RETURN;
RS_ERORR_symbolToString:
SHOW("error in procedure symbolToString!",R0);
HALT;
RS_make_symbolToString_closure_ends:

/*************RS_symbolToString  ends***********/

/*************RS_stringToSymbol starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_stringToSymbol_body));
MOV(INDD(FVARARRAY,20),R0);
JUMP (RS_stringToSymbol_closure_ends);
RS_LABEL_stringToSymbol_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_stringToSymbol);
CMP (IND(FPARG(2)),T_STRING);
JUMP_NE (RS_ERORR_stringToSymbol);
MOV (R7,FPARG(2));
MOV (R10,SYMBOLTABLE);MOV (R12,R10);
STRING_TO_SYMBOL_LOOP:CMP(R10,SOB_NIL);
JUMP_EQ (STR_TO_SYM_ADD_HERE);CMP (R7 , INDD(R10,0));
JUMP_EQ(STRTOSYM_RETURN_TO_USER);
MOV(R12,R10);MOV(R10,INDD(R10,1));
JUMP(STRING_TO_SYMBOL_LOOP);
STR_TO_SYM_ADD_HERE:
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),R7);
MOV(INDD(R0,1),SOB_NIL);
CMP(R12,SOB_NIL);
JUMP_EQ(R12_ISNULL);
MOV (INDD(R12,1),R0);
JUMP(STRTOSYM_RETURN_TO_USER);R12_ISNULL:
MOV(SYMBOLTABLE,R0);
STRTOSYM_RETURN_TO_USER:
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0), T_SYMBOL);
MOV(INDD(R0,1),R7);
RS_stringToSymbol_end_calc:POP(FP);
RETURN;
RS_ERORR_stringToSymbol:
SHOW("error in procedure stringToSymbol",R0);

HALT;
RS_stringToSymbol_closure_ends:

/*************RS_stringToSymbol ends***********/

/*************RS_vector_length starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_vector_length_body));
MOV(INDD(FVARARRAY,22),R0);
JUMP (RS_make_vector_length_closure_ends);
RS_LABEL_vector_length_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_vector_length);
CMP (IND(FPARG(2)),T_VECTOR);
JUMP_NE (RS_ERORR_vector_length);
MOV(R7,INDD(FPARG(2),1));
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0),T_INTEGER);
MOV(INDD(R0,1),R7);
POP(FP);
RETURN;
RS_ERORR_vector_length:
SHOW("error in procedure vector_length",R0);
HALT;
RS_make_vector_length_closure_ends:

/*************RS_vector_length  ends***********/

/*************RS_vector_ref starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_vector_ref_ref_body));
MOV(INDD(FVARARRAY,23),R0);
JUMP (RS_vector_ref_closure_ends);
RS_vector_ref_ref_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_vector_ref);
MOV(R10,FPARG(2));
CMP (IND(R10),T_VECTOR);
JUMP_NE (RS_ERORR_RS_vector_ref);
CMP (IND(FPARG(3)),T_INTEGER);
JUMP_NE (RS_ERORR_RS_vector_ref);
MOV(R7,INDD(FPARG(2),1));
MOV(R8,INDD(FPARG(3),1));
CMP(R8,R7);
JUMP_GE(RS_ERORR_RS_vector_ref);
ADD(R8,2);
MOV(R0,INDD(R10,R8));
POP(FP);
RETURN;
RS_ERORR_RS_vector_ref:
SHOW("error in procedure RS_vector_ref",R0);
HALT;
RS_vector_ref_closure_ends:

/*************RS_vector_ref ends***********/

/*************RS_vector_set starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_vector_set_body));
MOV(INDD(FVARARRAY,24),R0);
JUMP (RS_vector_set_closure_ends);
RS_vector_set_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(3));
JUMP_NE (RS_ERORR_RS_vector_set);
MOV (R2 , FPARG(2));
MOV (R3 , INDD(FPARG(3),1));
CMP (R3 , INDD(R2,1));
JUMP_GE(RS_ERORR_RS_vector_set);
CMP (INDD(R2 ,0) ,T_VECTOR);
JUMP_NE(RS_ERORR_RS_vector_set);
ADD (R3 , IMM(2));
MOV (R4 , FPARG(4));
MOV (INDD(R2,R3) , R4);
POP(FP);
RETURN;
RS_ERORR_RS_vector_set:
SHOW("error in procedure RS_vector_set",R0);
HALT;
RS_vector_set_closure_ends:

/*************RS_vector_set ends***********/

/*************RS_vector starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_vector_body));
MOV(INDD(FVARARRAY,25),R0);
JUMP (RS_vector_closure_ends);
RS_vector_body:
PUSH(FP);
MOV(FP,SP);
MOV (R3 , FPARG(1));
CMP (R3 , IMM(0));
JUMP_EQ(RS_Empty_vector);
MOV (R4 , FPARG(1));
ADD (R4 , IMM(2));
PUSH(R4)
CALL(MALLOC);
DROP(1)
MOV (INDD(R0,0) , T_VECTOR);
MOV (INDD(R0,1) , R3);
MOV (R5 , IMM(2));
RS_Loop_vector:
CMP (R3 ,IMM(0));
JUMP_EQ(RS_continue_vector);
MOV (INDD(R0,R5) , FPARG(R5));
DECR(R3);
INCR(R5);
JUMP(RS_Loop_vector);
RS_Empty_vector:
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_VECTOR);
MOV (INDD(R0,1) , R3);
MOV (INDD(R0,2) , SOB_NIL);
RS_continue_vector:
POP(FP);
RETURN;
RS_ERORR_RS_vector:
SHOW("error in procedure RS_vector",R0);
HALT;
RS_vector_closure_ends:

/*************RS_vector ends***********/

/*************RS_string_length starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_string_length_body));
MOV(INDD(FVARARRAY,26),R0);
JUMP (RS_string_length_closure_ends);
RS_string_length_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_RS_string_length);
CMP (IND(FPARG(2)),T_STRING);
JUMP_NE (RS_ERORR_RS_string_length);
MOV(R7,INDD(FPARG(2),1));
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0),T_INTEGER);
MOV(INDD(R0,1),R7);
POP(FP);
RETURN;
RS_ERORR_RS_string_length:
SHOW("error in procedure RS_string_length",R0);
HALT;
RS_string_length_closure_ends:

/*************RS_string_length ends***********/

/*************RS_string_ref starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_string_ref_body));
MOV(INDD(FVARARRAY,27),R0);
JUMP (RS_string_ref_closure_ends);
RS_string_ref_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_string_ref);
MOV(R10,FPARG(2));
CMP (IND(R10),T_STRING);
JUMP_NE (RS_ERORR_RS_string_ref);
CMP (IND(FPARG(3)),T_INTEGER);
JUMP_NE (RS_ERORR_RS_string_ref);
MOV(R7,INDD(FPARG(2),1));
MOV(R8,INDD(FPARG(3),1));
CMP(R8,R7);
JUMP_GE(RS_ERORR_RS_string_ref);
ADD(R8,2);
MOV(R0,INDD(R10,R8));
POP(FP);
RETURN;
RS_ERORR_RS_string_ref:
SHOW("error in procedure RS_string_ref",R0);
HALT;
RS_string_ref_closure_ends:

/*************RS_string_ref ends***********/

/*************RS_make_string starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_make_string_body));
MOV(INDD(FVARARRAY,28),R0);
JUMP (RS_make_string_closure_ends);
RS_make_string_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1) , IMM(1));
JUMP_EQ(RS_make_string_Empty_String);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_make_string);
CMP (FPARG(2) , IMM(0));
JUMP_EQ(RS_make_string_Empty_String);
MOV (R3 , FPARG(3));
MOV (R2 , INDD(FPARG(2),1));
PUSH(2 + R2);
CALL(MALLOC);
DROP(1);
MOV (IND(R0) , T_STRING);
MOV (INDD(R0,1) , R2);
MOV (R4 , IMM(2));
RS_make_string_Loop_Label:
CMP (R2 , 0);
JUMP_EQ(RS_make_string_Continue);
MOV (INDD(R0,R4) , R3);
DECR(R2);
INCR(R4);
JUMP(RS_make_string_Loop_Label);
RS_make_string_Empty_String:
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (IND(R0) , T_STRING);
MOV (INDD(R0,1) , IMM(0));
MOV (INDD(R0,2) , SOB_NIL);
RS_make_string_Continue:
POP(FP);
RETURN;
RS_ERORR_RS_make_string:
SHOW("error in procedure RS_make_string",R0);
HALT;
RS_make_string_closure_ends:

/*************RS_make_string ends***********/

/*************RS_string_set starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_string_set_body));
MOV(INDD(FVARARRAY,29),R0);
JUMP (RS_string_set_closure_ends);
RS_string_set_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(3));
JUMP_NE (RS_ERORR_RS_string_set);
MOV (R2 , FPARG(2));
MOV (R3 , INDD(FPARG(3),1));
CMP (R3 , INDD(R2,1));
JUMP_GE(RS_ERORR_RS_string_set);
ADD (R3 , IMM(2));
MOV (R4 , FPARG(4));
MOV (INDD(R2,R3) , R4);
POP(FP);
RETURN;
RS_ERORR_RS_string_set:
SHOW("error in procedure RS_string_set",R0);
HALT;
RS_string_set_closure_ends:

/*************RS_string_set ends***********/

/*************RS_apply starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_apply_body));
MOV(INDD(FVARARRAY,30),R0);
JUMP (RS_apply_closure_ends);
RS_apply_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_apply);
MOV(R6,FPARG(2)); 
CMP (IND(R6),T_CLOSURE);
JUMP_NE(RS_ERORR_RS_apply);
MOV(R9,0);
MOV(R7,FPARG(3)); 
CMP(R7, SOB_NIL);
JUMP_EQ (RS_APPLY_EMPTY_LST);
CMP (IND(R7),T_PAIR);
JUMP_NE(RS_ERORR_RS_apply);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),INDD(R7,1));
MOV(INDD(R0,1),SOB_NIL);
ADD(R9,1);
RS_APPLY_REVERSE_LOOP:
MOV(R8,R0);
CMP(INDD(R7,2),SOB_NIL);
JUMP_EQ(RS_APPLY_FINISH_REVERSE);
MOV(R7,INDD(R7,2));
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),INDD(R7,1));
MOV(INDD(R0,1),R8);
ADD(R9,1);
JUMP(RS_APPLY_REVERSE_LOOP);
RS_APPLY_EMPTY_LST:
MOV(R0,R7);
RS_APPLY_FINISH_REVERSE:
MOV(R10,R9);
CMP(R10,0);
JUMP_EQ(RS_APPLY_FINISH_PUSHING_ARGS);
RS_APPLY_PUSH_ARGS_LOOP:
CMP(R10,0);
JUMP_EQ(RS_APPLY_FINISH_PUSHING_ARGS);
PUSH(INDD(R0,0));
MOV(R0,INDD(R0,1));
SUB(R10,1);
JUMP(RS_APPLY_PUSH_ARGS_LOOP);
RS_APPLY_FINISH_PUSHING_ARGS:
PUSH(R9);
MOV(R0,R6);
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover0);
ADD (R10 , IMM(1));
tc_applic_for_label0:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover0);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label0);
tc_applic_end_param_ranover0:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/
JUMPA (INDD(R0,2)); 
POP(FP);
RETURN;
RS_ERORR_RS_apply:
SHOW("error in procedure RS_apply",R0);
HALT;
RS_apply_closure_ends:

/*************RS_apply ends***********/

/*************RS_cahrToInteger starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_cahrToInteger_body));
MOV(INDD(FVARARRAY,31),R0);
JUMP (RS_cahrToInteger_closure_ends);
RS_cahrToInteger_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_RS_cahrToInteger);
MOV (R2 , FPARG(2));
CMP (INDD(R2,0) , T_CHAR);
JUMP_NE(RS_ERORR_RS_cahrToInteger);
MOV (INDD(R2,0) , T_INTEGER);
MOV (R0 , R2);
POP(FP);
RETURN;
RS_ERORR_RS_cahrToInteger:
SHOW("error in procedure RS_cahrToInteger",R0);
HALT;
RS_cahrToInteger_closure_ends:

/*************RS_cahrToInteger ends***********/

/*************RS_numberTofraction starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_numberTofraction_body));
MOV(INDD(FVARARRAY,32),R0);
JUMP (RS_numberTofraction_closure_ends);
RS_numberTofraction_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_RS_numberTofraction);
MOV (R2 , FPARG(2));
CMP (INDD(R2,0) , T_INTEGER);
JUMP_EQ(RS_numberTofraction_changeIntTofrac_Label);
CMP (INDD(R2,0) , T_FRACTION);
JUMP_NE(RS_ERORR_RS_numberTofraction);
MOV (R0 , R2);JUMP(RS_numberTofraction_Exit_Label);
RS_numberTofraction_changeIntTofrac_Label:
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (R3 , R0);
MOV (INDD(R3,0) , T_FRACTION);
MOV (INDD(R3,1) , INDD(R2,1));
MOV (INDD(R3,2) , IMM(1));
MOV (R0 , R3);
RS_numberTofraction_Exit_Label:
POP(FP);
RETURN;
RS_ERORR_RS_numberTofraction:
SHOW("error in procedure RS_numberTofraction",R0);
HALT;
RS_numberTofraction_closure_ends:

/*************RS_numberTofraction ends***********/

/*************RS_integerToChar starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_integerToChar_body));
MOV(INDD(FVARARRAY,33),R0);
JUMP (RS_integerToChar_closure_ends);
RS_integerToChar_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_RS_integerToChar);
MOV (R2 , FPARG(2));
CMP (INDD(R2,0) , T_INTEGER);
JUMP_NE(RS_ERORR_RS_integerToChar);
MOV (INDD(R2,0) , T_CHAR);
MOV (R0 , R2);
POP(FP);
RETURN;
RS_ERORR_RS_integerToChar:
SHOW("error in procedure RS_integerToChar",R0);
HALT;
RS_integerToChar_closure_ends:

/*************RS_integerToChar ends***********/

/*************RS_list starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_list_body));
MOV(INDD(FVARARRAY,34),R0);
JUMP (RS_list_closure_ends);
RS_list_body:
PUSH(FP);
MOV(FP,SP);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
Gen_List_Loop_Label:
CMP (R4 ,IMM(0));
JUMP_EQ(Gen_List_End_Loop_Label);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(1 + R4));
MOV (INDD(R5,0) , T_PAIR);
MOV (R6, R5);
DECR(R4);
JUMP(Gen_List_Loop_Label);
Gen_List_End_Loop_Label:
MOV (R0 , R6);
POP(FP);
RETURN;
RS_ERORR_RS_list:
SHOW("error in procedure RS_list",R0);
HALT;
RS_list_closure_ends:

/*************RS_list ends***********/

/*************RS_remainder starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_remainder_body));
MOV(INDD(FVARARRAY,35),R0);
JUMP (RS_remainder_closure_ends);
RS_remainder_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_remainder);
MOV (R1 ,FPARG(2));
MOV (R2 ,FPARG(3));
CMP (INDD(R1 , 0) , T_INTEGER);
JUMP_NE(RS_ERORR_RS_remainder);
CMP (INDD(R2 , 0) , T_INTEGER);
JUMP_NE(RS_ERORR_RS_remainder);
PUSH(INDD(R1,1));
CALL (MAKE_SOB_INTEGER);
DROP(1);
MOV(R3 , R0);
REM (INDD(R3,1) ,INDD(R2,1));
MOV (R0 , R3);
POP(FP);
RETURN;
RS_ERORR_RS_remainder:
SHOW("error in procedure RS_remainder",R0);
HALT;
RS_remainder_closure_ends:

/*************RS_remainder ends***********/

/*************RS_denominator starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_denominator_body));
MOV(INDD(FVARARRAY,36),R0);
JUMP (RS_denominator_closure_ends);
RS_denominator_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_RS_denominator);
CMP (IND(FPARG(2)),T_INTEGER);
JUMP_NE(RS_denominator_Fraction_Label);
PUSH(IMM(1));
CALL (MAKE_SOB_INTEGER);
DROP(1);
JUMP(RS_denominator_Exit_Label);
RS_denominator_Fraction_Label:
CMP (IND(FPARG(2)),T_FRACTION);
JUMP_NE (RS_ERORR_RS_denominator);
PUSH(INDD(FPARG(2),2));
CALL (MAKE_SOB_INTEGER);
DROP(1);
RS_denominator_Exit_Label:
POP(FP);
RETURN;
RS_ERORR_RS_denominator:
SHOW("error in procedure RS_denominator",R0);
HALT;
RS_denominator_closure_ends:

/*************RS_denominator ends***********/

/*************RS_numerator starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_numerator_body));
MOV(INDD(FVARARRAY,37),R0);
JUMP (RS_numerator_closure_ends);
RS_numerator_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_RS_numerator);
CMP (IND(FPARG(2)),T_INTEGER);
JUMP_NE(RS_numerator_Fraction_Label);
MOV (R0 , FPARG(2));
JUMP(RS_numerator_Exit_Label);
RS_numerator_Fraction_Label:
CMP (IND(FPARG(2)),T_FRACTION);
JUMP_NE (RS_ERORR_RS_numerator);
PUSH(INDD(FPARG(2),1));
CALL (MAKE_SOB_INTEGER);
DROP(1);
RS_numerator_Exit_Label:
POP(FP);
RETURN;
RS_ERORR_RS_numerator:
SHOW("error in procedure RS_numerator",R0);
HALT;
RS_numerator_closure_ends:

/*************RS_numerator ends***********/

/*************RS_plus starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_plus_body));
MOV(INDD(FVARARRAY,38),R0);
JUMP (RS_plus_closure_ends);
RS_plus_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_plus);
MOV (R1 , FPARG(2));
MOV (R2 , FPARG(3));
CMP (IND(R1),T_FRACTION);
JUMP_NE( RS_ERORR_RS_plus);
CMP (IND(R2),T_FRACTION);
JUMP_NE( RS_ERORR_RS_plus);
MOV (R3 , INDD(R1,2));
MOV (R4 , INDD(R2,2));
MOV (R5 , INDD(R1,1));
MOV (R6 , INDD(R2,1));
MUL(R5,R4);
MUL(R6,R3);
ADD(R5,R6)MUL(R3,R4);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_FRACTION);
MOV (INDD(R0,1) , R5);
MOV (INDD(R0,2) , R3);
POP(FP);
RETURN;
RS_ERORR_RS_plus:
SHOW("error in procedure RS_plus",R0);
HALT;
RS_plus_closure_ends:

/*************RS_plus ends***********/

/*************RS_minus starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_minus_body));
MOV(INDD(FVARARRAY,39),R0);
JUMP (RS_minus_closure_ends);
RS_minus_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_minus);
MOV (R1 , FPARG(2));
MOV (R2 , FPARG(3));
CMP (IND(R1),T_FRACTION);
JUMP_NE( RS_ERORR_RS_minus);
CMP (IND(R2),T_FRACTION);
JUMP_NE( RS_ERORR_RS_minus);
MOV (R3 , INDD(R1,2));
MOV (R4 , INDD(R2,2));
MOV (R5 , INDD(R1,1));
MOV (R6 , INDD(R2,1));
MUL(R5,R4);
MUL(R6,R3);
SUB(R5,R6)MUL(R3,R4);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_FRACTION);
MOV (INDD(R0,1) , R5);
MOV (INDD(R0,2) , R3);
POP(FP);
RETURN;
RS_ERORR_RS_minus:
SHOW("error in procedure RS_minus",R0);
HALT;
RS_minus_closure_ends:

/*************RS_minus ends***********/

/*************RS_smaller starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_smaller_body));
MOV(INDD(FVARARRAY,40),R0);
JUMP (RS_smaller_closure_ends);
RS_smaller_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_smaller);
MOV (R1 , FPARG(2));
MOV (R2 , FPARG(3));
CMP (IND(R1),T_FRACTION);
JUMP_NE( RS_ERORR_RS_smaller);
CMP (IND(R2),T_FRACTION);
JUMP_NE( RS_ERORR_RS_smaller);
MOV (R3 , INDD(R1,2));
MOV (R4 , INDD(R2,2));
MOV (R5 , INDD(R1,1));
MOV (R6 , INDD(R2,1));
CMP (R3 , R4);
JUMP_EQ(RS_smaller_decide_by_numerator_Label);
MUL (R5 , R4);
MUL (R6 , R3);
RS_smaller_decide_by_numerator_Label:
CMP (R5 , R6);
JUMP_GE(RS_smaller_false_Label);
MOV (R0 , SOB_TRUE);
JUMP(RS_smaller_Exit_Label);
RS_smaller_false_Label:
MOV (R0 , SOB_FALSE);
RS_smaller_Exit_Label:
POP(FP);
RETURN;
RS_ERORR_RS_smaller:
SHOW("error in procedure RS_smaller",R0);
HALT;
RS_smaller_closure_ends:

/*************RS_smaller ends***********/

/*************RS_greater starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_greater_body));
MOV(INDD(FVARARRAY,41),R0);
JUMP (RS_greater_closure_ends);
RS_greater_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_greater);
MOV (R1 , FPARG(2));
MOV (R2 , FPARG(3));
CMP (IND(R1),T_FRACTION);
JUMP_NE( RS_ERORR_RS_greater);
CMP (IND(R2),T_FRACTION);
JUMP_NE( RS_ERORR_RS_greater);
MOV (R3 , INDD(R1,2));
MOV (R4 , INDD(R2,2));
MOV (R5 , INDD(R1,1));
MOV (R6 , INDD(R2,1));
CMP (R3 , R4);
JUMP_EQ(RS_greater_decide_by_numerator_Label);
MUL (R5 , R4);
MUL (R6 , R3);
RS_greater_decide_by_numerator_Label:
CMP (R5 , R6);
JUMP_LE(RS_greater_false_Label);
MOV (R0 , SOB_TRUE);
JUMP(RS_greater_Exit_Label);
RS_greater_false_Label:
MOV (R0 , SOB_FALSE);
RS_greater_Exit_Label:
POP(FP);
RETURN;
RS_ERORR_RS_greater:
SHOW("error in procedure RS_greater",R0);
HALT;
RS_greater_closure_ends:

/*************RS_greater ends***********/

/*************RS_mul starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_mul_body));
MOV(INDD(FVARARRAY,43),R0);
JUMP (RS_mul_closure_ends);
RS_mul_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_mul);
MOV (R1 , FPARG(2));
MOV (R2 , FPARG(3));
CMP (IND(R1),T_FRACTION);
JUMP_NE( RS_ERORR_RS_mul);
CMP (IND(R2),T_FRACTION);
JUMP_NE( RS_ERORR_RS_mul);
MOV (R3 , INDD(R1,2));
MOV (R4 , INDD(R2,2));
MOV (R5 , INDD(R1,1));
MOV (R6 , INDD(R2,1));
MUL(R5,R6);
MUL(R3,R4);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_FRACTION);
MOV (INDD(R0,1) , R5);
MOV (INDD(R0,2) , R3);
POP(FP);
RETURN;
RS_ERORR_RS_mul:
SHOW("error in procedure RS_mul",R0);
HALT;
RS_mul_closure_ends:

/*************RS_mul ends***********/

/*************RS_div starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_div_body));
MOV(INDD(FVARARRAY,42),R0);
JUMP (RS_div_closure_ends);
RS_div_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_div);
MOV (R1 , FPARG(2));
MOV (R2 , FPARG(3));
CMP (IND(R1),T_FRACTION);
JUMP_NE( RS_ERORR_RS_div);
CMP (IND(R2),T_FRACTION);
JUMP_NE( RS_ERORR_RS_div);
MOV (R3 , INDD(R1,2));
MOV (R4 , INDD(R2,2));
MOV (R5 , INDD(R1,1));
MOV (R6 , INDD(R2,1));
MUL(R5,R4);
MUL(R3,R6);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_FRACTION);
MOV (INDD(R0,1) , R5);
MOV (INDD(R0,2) , R3);
POP(FP);
RETURN;
RS_ERORR_RS_div:
SHOW("error in procedure RS_div",R0);
HALT;
RS_div_closure_ends:

/*************RS_div ends***********/

/*************RS_equality_op starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_equality_op_body));
MOV(INDD(FVARARRAY,44),R0);
JUMP (RS_equality_op_closure_ends);
RS_equality_op_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_RS_equality_op);
MOV (R1 , FPARG(2));
MOV (R2 , FPARG(3));
CMP (IND(R1),T_FRACTION);
JUMP_NE( RS_ERORR_RS_RS_equality_op);
CMP (IND(R2),T_FRACTION);
JUMP_NE( RS_ERORR_RS_RS_equality_op);
MOV (R3 , INDD(R1,2));
MOV (R4 , INDD(R2,2));
MOV (R5 , INDD(R1,1));
MOV (R6 , INDD(R2,1));
CMP (R3 , R4);
JUMP_NE(RS_equality_op_false_Label);
CMP (R5 , R6);
JUMP_NE(RS_equality_op_false_Label);
MOV (R0 , SOB_TRUE);
JUMP(RS_equality_op_Exit_Label);
RS_equality_op_false_Label:
MOV (R0 , SOB_FALSE);
RS_equality_op_Exit_Label:
POP(FP);
RETURN;
RS_ERORR_RS_RS_equality_op:
SHOW("error in procedure RS_equality_op",R0);
HALT;
RS_equality_op_closure_ends:

/*************RS_equality_op ends***********/

/*************RS_create_frac_from_ints starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_create_frac_from_ints_body));
MOV(INDD(FVARARRAY,45),R0);
JUMP (RS_create_frac_from_ints_closure_ends);
RS_create_frac_from_ints_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(3));
JUMP_NE (RS_ERORR_RS_create_frac_from_ints);
MOV (R6 , INDD ( FPARG(2) , 1 ));
MOV (R7 , INDD ( FPARG(3) , 1 ));
MOV (R8 , INDD ( FPARG(4) , 1 ));
DIV (R6 , R8);
DIV (R7 , R8);
CMP (R7 ,1);
JUMP_EQ (RS_CREATE_FRAC_INTEGER_COND);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0),T_FRACTION)
MOV (INDD(R0,1),R6)
MOV (INDD(R0,2),R7)
JUMP(RS_MAKE_FRAC_END);
RS_CREATE_FRAC_INTEGER_COND:
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0),T_INTEGER)
MOV (INDD(R0,1),R6)
RS_MAKE_FRAC_END:
POP(FP);
RETURN;
RS_ERORR_RS_create_frac_from_ints:
SHOW("error in procedure RS_create_frac_from_ints",R0);
HALT;
RS_create_frac_from_ints_closure_ends:

/*************RS_create_frac_from_ints***********/

/*************seq code starts***********/

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_514);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_514:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_514);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_514);
EXIT_LOOP_COPY_514:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_514:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_514);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_514);
EXIT_LOOP_EXTEND_ENV_514:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_496));
JUMP(L_CLOSURE_EXIT_496);
L_CLOSURE_BODY_496:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_496);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL513);
JUMP (FINISH_FVAR_LABEL513);
UNDEF_LABEL513:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL513:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_512);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_512:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE498);

/*************tc-applic code starts here509***********/
PUSH (IMM(0));

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL511);
JUMP (FINISH_FVAR_LABEL511);
UNDEF_LABEL511:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL511:


/*************tc-applic cont509***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_509);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover510);
ADD (R10 , IMM(1));
tc_applic_for_label510:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover510);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label510);
tc_applic_end_param_ranover510:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_509:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT497);
L_IF3_ELSE498:

/*************tc-applic code starts here499***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL508);
JUMP (FINISH_FVAR_LABEL508);
UNDEF_LABEL508:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL508:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_507);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_507:

/*************applic code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,46));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL506);
JUMP (FINISH_FVAR_LABEL506);
UNDEF_LABEL506:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL506:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_505);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_505:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL504);
JUMP (FINISH_FVAR_LABEL504);
UNDEF_LABEL504:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL504:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_503);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_503:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_502);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_502:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,2));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL501);
JUMP (FINISH_FVAR_LABEL501);
UNDEF_LABEL501:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL501:


/*************tc-applic cont499***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_499);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover500);
ADD (R10 , IMM(1));
tc_applic_for_label500:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover500);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label500);
tc_applic_end_param_ranover500:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_499:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT497:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_496:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_496:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,46),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_495);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_495:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_495);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_495);
EXIT_LOOP_COPY_495:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_495:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_495);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_495);
EXIT_LOOP_EXTEND_ENV_495:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_481));
JUMP(L_CLOSURE_EXIT_481);
L_CLOSURE_BODY_481:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_481);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL494);
JUMP (FINISH_FVAR_LABEL494);
UNDEF_LABEL494:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL494:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_493);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_493:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE483);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT482);
L_IF3_ELSE483:

/*************tc-applic code starts here484***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL492);
JUMP (FINISH_FVAR_LABEL492);
UNDEF_LABEL492:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL492:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_491);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_491:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,2));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL490);
JUMP (FINISH_FVAR_LABEL490);
UNDEF_LABEL490:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL490:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_489);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_489:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL488);
JUMP (FINISH_FVAR_LABEL488);
UNDEF_LABEL488:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL488:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_487);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_487:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,50));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL486);
JUMP (FINISH_FVAR_LABEL486);
UNDEF_LABEL486:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL486:


/*************tc-applic cont484***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_484);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover485);
ADD (R10 , IMM(1));
tc_applic_for_label485:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover485);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label485);
tc_applic_end_param_ranover485:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_484:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT482:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_481:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_481:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,50),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_480);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_480:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_480);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_480);
EXIT_LOOP_COPY_480:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_480:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_480);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_480);
EXIT_LOOP_EXTEND_ENV_480:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_467));
JUMP(L_CLOSURE_EXIT_467);
L_CLOSURE_BODY_467:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_467);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 2));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL479);
JUMP (FINISH_FVAR_LABEL479);
UNDEF_LABEL479:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL479:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_478);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_478:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE469);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT468);
L_IF3_ELSE469:

/*************tc-applic code starts here470***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 2));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL477);
JUMP (FINISH_FVAR_LABEL477);
UNDEF_LABEL477:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL477:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_476);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_476:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 2));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL475);
JUMP (FINISH_FVAR_LABEL475);
UNDEF_LABEL475:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL475:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_474);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_474:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_473);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_473:

/*************applic code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(3);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,48));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL472);
JUMP (FINISH_FVAR_LABEL472);
UNDEF_LABEL472:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL472:


/*************tc-applic cont470***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_470);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover471);
ADD (R10 , IMM(1));
tc_applic_for_label471:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover471);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label471);
tc_applic_end_param_ranover471:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_470:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT468:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_467:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_467:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,48),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_466);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_466:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_466);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_466);
EXIT_LOOP_COPY_466:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_466:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_466);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_466);
EXIT_LOOP_EXTEND_ENV_466:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_452));
JUMP(L_CLOSURE_EXIT_452);
L_CLOSURE_BODY_452:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_452);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL465);
JUMP (FINISH_FVAR_LABEL465);
UNDEF_LABEL465:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL465:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_464);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_464:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE454);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT453);
L_IF3_ELSE454:

/*************tc-applic code starts here455***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL463);
JUMP (FINISH_FVAR_LABEL463);
UNDEF_LABEL463:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL463:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_462);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_462:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,49));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL461);
JUMP (FINISH_FVAR_LABEL461);
UNDEF_LABEL461:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL461:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_460);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_460:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL459);
JUMP (FINISH_FVAR_LABEL459);
UNDEF_LABEL459:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL459:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_458);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_458:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,2));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL457);
JUMP (FINISH_FVAR_LABEL457);
UNDEF_LABEL457:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL457:


/*************tc-applic cont455***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_455);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover456);
ADD (R10 , IMM(1));
tc_applic_for_label456:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover456);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label456);
tc_applic_end_param_ranover456:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_455:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT453:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_452:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_452:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,49),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_451);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_451:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_451);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_451);
EXIT_LOOP_COPY_451:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_451:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_451);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_451);
EXIT_LOOP_EXTEND_ENV_451:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_443));
JUMP(L_CLOSURE_EXIT_443);
L_CLOSURE_BODY_443:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_450);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_450:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_450);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_450);
EXIT_LOOP_ARGS_450:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_450:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_450);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_450);
EXIT_FIXING_STACK_450:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_450);
NO_OPTIONAL_ARGS_450:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_450:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_450);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_450);
EXIT_NIL_CASE_LOOP_450:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_450:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here444***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,0));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,50));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL449);
JUMP (FINISH_FVAR_LABEL449);
UNDEF_LABEL449:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL449:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_448);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_448:

/*************applic code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,0));

PUSH(R0);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,49));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL447);
JUMP (FINISH_FVAR_LABEL447);
UNDEF_LABEL447:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL447:

PUSH(R0);
PUSH(3);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,48));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL446);
JUMP (FINISH_FVAR_LABEL446);
UNDEF_LABEL446:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL446:


/*************tc-applic cont444***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_444);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover445);
ADD (R10 , IMM(1));
tc_applic_for_label445:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover445);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label445);
tc_applic_end_param_ranover445:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_444:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_443:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_443:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,47),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_442);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_442:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_442);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_442);
EXIT_LOOP_COPY_442:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_442:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_442);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_442);
EXIT_LOOP_EXTEND_ENV_442:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_438));
JUMP(L_CLOSURE_EXIT_438);
L_CLOSURE_BODY_438:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_438);

/*************tc-applic code starts here439***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,52));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL441);
JUMP (FINISH_FVAR_LABEL441);
UNDEF_LABEL441:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL441:


/*************tc-applic cont439***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_439);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover440);
ADD (R10 , IMM(1));
tc_applic_for_label440:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover440);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label440);
tc_applic_end_param_ranover440:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_439:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_438:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_438:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,51),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_437);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_437:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_437);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_437);
EXIT_LOOP_COPY_437:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_437:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_437);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_437);
EXIT_LOOP_EXTEND_ENV_437:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_430));
JUMP(L_CLOSURE_EXIT_430);
L_CLOSURE_BODY_430:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_430);

/*************or code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,7));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL436);
JUMP (FINISH_FVAR_LABEL436);
UNDEF_LABEL436:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL436:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_435);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_435:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT431);

/*************tc-applic code starts here432***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL434);
JUMP (FINISH_FVAR_LABEL434);
UNDEF_LABEL434:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL434:


/*************tc-applic cont432***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_432);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover433);
ADD (R10 , IMM(1));
tc_applic_for_label433:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover433);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label433);
tc_applic_end_param_ranover433:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_432:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT431);
L_OR_EXIT431:

/*************or code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_430:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_430:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,52),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_429);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_429:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_429);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_429);
EXIT_LOOP_COPY_429:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_429:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_429);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_429);
EXIT_LOOP_EXTEND_ENV_429:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_356));
JUMP(L_CLOSURE_EXIT_356);
L_CLOSURE_BODY_356:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_356);

/*************if3 code starts here***********/

/*************or code starts here***********/

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,7));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL428);
JUMP (FINISH_FVAR_LABEL428);
UNDEF_LABEL428:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL428:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_427);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_427:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE424);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,7));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL426);
JUMP (FINISH_FVAR_LABEL426);
UNDEF_LABEL426:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL426:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_425);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_425:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT423);
L_IF3_ELSE424:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT423:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT404);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL422);
JUMP (FINISH_FVAR_LABEL422);
UNDEF_LABEL422:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL422:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_421);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_421:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE418);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL420);
JUMP (FINISH_FVAR_LABEL420);
UNDEF_LABEL420:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL420:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_419);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_419:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT417);
L_IF3_ELSE418:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT417:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT404);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,6));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL416);
JUMP (FINISH_FVAR_LABEL416);
UNDEF_LABEL416:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL416:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_415);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_415:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE412);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,6));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL414);
JUMP (FINISH_FVAR_LABEL414);
UNDEF_LABEL414:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL414:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_413);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_413:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT411);
L_IF3_ELSE412:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT411:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT404);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,11));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL410);
JUMP (FINISH_FVAR_LABEL410);
UNDEF_LABEL410:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL410:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_409);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_409:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE406);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,11));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL408);
JUMP (FINISH_FVAR_LABEL408);
UNDEF_LABEL408:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL408:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_407);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_407:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT405);
L_IF3_ELSE406:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT405:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT404);
L_OR_EXIT404:

/*************or code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE358);

/*************tc-applic code starts here401***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,19));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL403);
JUMP (FINISH_FVAR_LABEL403);
UNDEF_LABEL403:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL403:


/*************tc-applic cont401***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_401);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover402);
ADD (R10 , IMM(1));
tc_applic_for_label402:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover402);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label402);
tc_applic_end_param_ranover402:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_401:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT357);
L_IF3_ELSE358:

/*************if3 code starts here***********/

/*************or code starts here***********/

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL400);
JUMP (FINISH_FVAR_LABEL400);
UNDEF_LABEL400:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL400:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_399);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_399:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE396);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL398);
JUMP (FINISH_FVAR_LABEL398);
UNDEF_LABEL398:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL398:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_397);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_397:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT395);
L_IF3_ELSE396:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT395:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT364);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,14));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL394);
JUMP (FINISH_FVAR_LABEL394);
UNDEF_LABEL394:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL394:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_393);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_393:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE390);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,14));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL392);
JUMP (FINISH_FVAR_LABEL392);
UNDEF_LABEL392:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL392:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_391);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_391:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT389);
L_IF3_ELSE390:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT389:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT364);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,5));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL388);
JUMP (FINISH_FVAR_LABEL388);
UNDEF_LABEL388:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL388:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_387);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_387:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE384);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,5));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL386);
JUMP (FINISH_FVAR_LABEL386);
UNDEF_LABEL386:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL386:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_385);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_385:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT383);
L_IF3_ELSE384:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT383:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT364);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,10));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL382);
JUMP (FINISH_FVAR_LABEL382);
UNDEF_LABEL382:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL382:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_381);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_381:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE378);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,10));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL380);
JUMP (FINISH_FVAR_LABEL380);
UNDEF_LABEL380:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL380:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_379);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_379:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT377);
L_IF3_ELSE378:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT377:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT364);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,12));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL376);
JUMP (FINISH_FVAR_LABEL376);
UNDEF_LABEL376:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL376:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_375);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_375:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE372);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,12));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL374);
JUMP (FINISH_FVAR_LABEL374);
UNDEF_LABEL374:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL374:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_373);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_373:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT371);
L_IF3_ELSE372:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT371:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT364);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL370);
JUMP (FINISH_FVAR_LABEL370);
UNDEF_LABEL370:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL370:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_369);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_369:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE366);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL368);
JUMP (FINISH_FVAR_LABEL368);
UNDEF_LABEL368:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL368:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_367);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_367:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT365);
L_IF3_ELSE366:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT365:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT364);
L_OR_EXIT364:

/*************or code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE360);

/*************tc-applic code starts here361***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,18));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL363);
JUMP (FINISH_FVAR_LABEL363);
UNDEF_LABEL363:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL363:


/*************tc-applic cont361***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_361);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover362);
ADD (R10 , IMM(1));
tc_applic_for_label362:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover362);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label362);
tc_applic_end_param_ranover362:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_361:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT359);
L_IF3_ELSE360:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT359:

/*************if3 code ends here***********/

L_IF3_EXIT357:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_356:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_356:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,53),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_355);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_355:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_355);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_355);
EXIT_LOOP_COPY_355:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_355:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_355);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_355);
EXIT_LOOP_EXTEND_ENV_355:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_345));
JUMP(L_CLOSURE_EXIT_345);
L_CLOSURE_BODY_345:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_345);

/*************if3 code starts here***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,53));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL354);
JUMP (FINISH_FVAR_LABEL354);
UNDEF_LABEL354:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL354:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_353);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_353:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE347);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT346);
L_IF3_ELSE347:

/*************tc-applic code starts here348***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,35));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL352);
JUMP (FINISH_FVAR_LABEL352);
UNDEF_LABEL352:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL352:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_351);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_351:

/*************applic code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,54));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL350);
JUMP (FINISH_FVAR_LABEL350);
UNDEF_LABEL350:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL350:


/*************tc-applic cont348***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_348);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover349);
ADD (R10 , IMM(1));
tc_applic_for_label349:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover349);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label349);
tc_applic_end_param_ranover349:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_348:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT346:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_345:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_345:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,54),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_344);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_344:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_344);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_344);
EXIT_LOOP_COPY_344:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_344:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_344);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_344);
EXIT_LOOP_EXTEND_ENV_344:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_322));
JUMP(L_CLOSURE_EXIT_322);
L_CLOSURE_BODY_322:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_322);

/*************tc-applic code starts here323***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(3);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_343);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_343:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_343);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_343);
EXIT_LOOP_COPY_343:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_343:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_343);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_343);
EXIT_LOOP_EXTEND_ENV_343:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_325));
JUMP(L_CLOSURE_EXIT_325);
L_CLOSURE_BODY_325:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_325);

/*************seq code starts***********/

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,36));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL342);
JUMP (FINISH_FVAR_LABEL342);
UNDEF_LABEL342:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL342:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_341);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_341:

/*************applic code ends here***********/
MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,37));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL340);
JUMP (FINISH_FVAR_LABEL340);
UNDEF_LABEL340:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL340:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_339);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_339:

/*************applic code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,54));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL338);
JUMP (FINISH_FVAR_LABEL338);
UNDEF_LABEL338:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL338:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_337);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_337:

/*************applic code ends here***********/
MOV(FPARG(4),R0);
MOV (R0,SOB_VOID);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL336);
JUMP (FINISH_FVAR_LABEL336);
UNDEF_LABEL336:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL336:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_335);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_335:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL334);
JUMP (FINISH_FVAR_LABEL334);
UNDEF_LABEL334:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL334:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_333);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_333:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,44));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL332);
JUMP (FINISH_FVAR_LABEL332);
UNDEF_LABEL332:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL332:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_331);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_331:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE327);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT326);
L_IF3_ELSE327:

/*************tc-applic code starts here328***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 2));

/*************pvar code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(3);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,45));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL330);
JUMP (FINISH_FVAR_LABEL330);
UNDEF_LABEL330:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL330:


/*************tc-applic cont328***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_328);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover329);
ADD (R10 , IMM(1));
tc_applic_for_label329:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover329);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label329);
tc_applic_end_param_ranover329:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_328:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT326:

/*************if3 code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_325:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_325:

/*************lambda-simple code ends here***********/


/*************tc-applic cont323***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_323);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover324);
ADD (R10 , IMM(1));
tc_applic_for_label324:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover324);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label324);
tc_applic_end_param_ranover324:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_323:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_322:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_322:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,59),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_321);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_321:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_321);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_321);
EXIT_LOOP_COPY_321:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_321:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_321);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_321);
EXIT_LOOP_EXTEND_ENV_321:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_277));
JUMP(L_CLOSURE_EXIT_277);
L_CLOSURE_BODY_277:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_320);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_320:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_320);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_320);
EXIT_LOOP_ARGS_320:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_320:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_320);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_320);
EXIT_FIXING_STACK_320:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_320);
NO_OPTIONAL_ARGS_320:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_320:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_320);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_320);
EXIT_NIL_CASE_LOOP_320:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_320:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here278***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_319);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_319:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_319);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_319);
EXIT_LOOP_COPY_319:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_319:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_319);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_319);
EXIT_LOOP_EXTEND_ENV_319:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_280));
JUMP(L_CLOSURE_EXIT_280);
L_CLOSURE_BODY_280:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_280);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R7, R0)

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_318);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_318:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_318);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_318);
EXIT_LOOP_COPY_318:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_318:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_318);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_318);
EXIT_LOOP_EXTEND_ENV_318:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_285));
JUMP(L_CLOSURE_EXIT_285);
L_CLOSURE_BODY_285:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_285);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL317);
JUMP (FINISH_FVAR_LABEL317);
UNDEF_LABEL317:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL317:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_316);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_316:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE287);

/*************tc-applic code starts here313***********/
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL315);
JUMP (FINISH_FVAR_LABEL315);
UNDEF_LABEL315:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL315:


/*************tc-applic cont313***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_313);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover314);
ADD (R10 , IMM(1));
tc_applic_for_label314:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover314);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label314);
tc_applic_end_param_ranover314:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_313:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT286);
L_IF3_ELSE287:

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL312);
JUMP (FINISH_FVAR_LABEL312);
UNDEF_LABEL312:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL312:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_311);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_311:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL310);
JUMP (FINISH_FVAR_LABEL310);
UNDEF_LABEL310:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL310:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_309);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_309:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE289);

/*************tc-applic code starts here300***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL308);
JUMP (FINISH_FVAR_LABEL308);
UNDEF_LABEL308:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL308:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_307);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_307:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL306);
JUMP (FINISH_FVAR_LABEL306);
UNDEF_LABEL306:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL306:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_305);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_305:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL304);
JUMP (FINISH_FVAR_LABEL304);
UNDEF_LABEL304:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL304:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_303);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_303:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,38));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL302);
JUMP (FINISH_FVAR_LABEL302);
UNDEF_LABEL302:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL302:


/*************tc-applic cont300***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_300);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover301);
ADD (R10 , IMM(1));
tc_applic_for_label301:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover301);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label301);
tc_applic_end_param_ranover301:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_300:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT288);
L_IF3_ELSE289:

/*************tc-applic code starts here290***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL299);
JUMP (FINISH_FVAR_LABEL299);
UNDEF_LABEL299:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL299:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_298);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_298:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_297);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_297:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL296);
JUMP (FINISH_FVAR_LABEL296);
UNDEF_LABEL296:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL296:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_295);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_295:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL294);
JUMP (FINISH_FVAR_LABEL294);
UNDEF_LABEL294:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL294:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_293);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_293:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,38));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL292);
JUMP (FINISH_FVAR_LABEL292);
UNDEF_LABEL292:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL292:


/*************tc-applic cont290***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_290);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover291);
ADD (R10 , IMM(1));
tc_applic_for_label291:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover291);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label291);
tc_applic_end_param_ranover291:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_290:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT288:

/*************if3 code ends here***********/

L_IF3_EXIT286:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_285:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_285:

/*************lambda-simple code ends here***********/
MOV(IND(R7),R0);
MOV (R0 , SOB_VOID);

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_284);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_284:

/*************applic code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here281***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,59));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL283);
JUMP (FINISH_FVAR_LABEL283);
UNDEF_LABEL283:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL283:


/*************tc-applic cont281***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_281);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover282);
ADD (R10 , IMM(1));
tc_applic_for_label282:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover282);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label282);
tc_applic_end_param_ranover282:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_281:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_280:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_280:

/*************lambda-simple code ends here***********/


/*************tc-applic cont278***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_278);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover279);
ADD (R10 , IMM(1));
tc_applic_for_label279:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover279);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label279);
tc_applic_end_param_ranover279:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_278:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_277:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_277:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,55),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_276);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_276:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_276);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_276);
EXIT_LOOP_COPY_276:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_276:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_276);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_276);
EXIT_LOOP_EXTEND_ENV_276:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_226));
JUMP(L_CLOSURE_EXIT_226);
L_CLOSURE_BODY_226:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_275);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_275:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_275);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_275);
EXIT_LOOP_ARGS_275:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_275:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_275);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_275);
EXIT_FIXING_STACK_275:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_275);
NO_OPTIONAL_ARGS_275:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_275:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_275);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_275);
EXIT_NIL_CASE_LOOP_275:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_275:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here227***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_274);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_274:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_274);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_274);
EXIT_LOOP_COPY_274:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_274:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_274);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_274);
EXIT_LOOP_EXTEND_ENV_274:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_229));
JUMP(L_CLOSURE_EXIT_229);
L_CLOSURE_BODY_229:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_229);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R7, R0)

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_273);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_273:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_273);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_273);
EXIT_LOOP_COPY_273:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_273:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_273);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_273);
EXIT_LOOP_EXTEND_ENV_273:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_245));
JUMP(L_CLOSURE_EXIT_245);
L_CLOSURE_BODY_245:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_245);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL272);
JUMP (FINISH_FVAR_LABEL272);
UNDEF_LABEL272:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL272:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_271);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_271:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL270);
JUMP (FINISH_FVAR_LABEL270);
UNDEF_LABEL270:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL270:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_269);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_269:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE247);

/*************tc-applic code starts here260***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL268);
JUMP (FINISH_FVAR_LABEL268);
UNDEF_LABEL268:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL268:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_267);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_267:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL266);
JUMP (FINISH_FVAR_LABEL266);
UNDEF_LABEL266:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL266:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_265);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_265:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL264);
JUMP (FINISH_FVAR_LABEL264);
UNDEF_LABEL264:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL264:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_263);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_263:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,39));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL262);
JUMP (FINISH_FVAR_LABEL262);
UNDEF_LABEL262:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL262:


/*************tc-applic cont260***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_260);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover261);
ADD (R10 , IMM(1));
tc_applic_for_label261:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover261);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label261);
tc_applic_end_param_ranover261:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_260:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT246);
L_IF3_ELSE247:

/*************tc-applic code starts here248***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL259);
JUMP (FINISH_FVAR_LABEL259);
UNDEF_LABEL259:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL259:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_258);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_258:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL257);
JUMP (FINISH_FVAR_LABEL257);
UNDEF_LABEL257:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL257:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_256);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_256:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL255);
JUMP (FINISH_FVAR_LABEL255);
UNDEF_LABEL255:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL255:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_254);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_254:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL253);
JUMP (FINISH_FVAR_LABEL253);
UNDEF_LABEL253:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL253:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_252);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_252:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,39));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL251);
JUMP (FINISH_FVAR_LABEL251);
UNDEF_LABEL251:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL251:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_250);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_250:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont248***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_248);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover249);
ADD (R10 , IMM(1));
tc_applic_for_label249:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover249);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label249);
tc_applic_end_param_ranover249:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_248:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT246:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_245:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_245:

/*************lambda-simple code ends here***********/
MOV(IND(R7),R0);
MOV (R0 , SOB_VOID);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL244);
JUMP (FINISH_FVAR_LABEL244);
UNDEF_LABEL244:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL244:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_243);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_243:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL242);
JUMP (FINISH_FVAR_LABEL242);
UNDEF_LABEL242:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL242:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_241);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_241:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE234);

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_240);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_240:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT233);
L_IF3_ELSE234:

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL239);
JUMP (FINISH_FVAR_LABEL239);
UNDEF_LABEL239:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL239:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_238);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_238:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL237);
JUMP (FINISH_FVAR_LABEL237);
UNDEF_LABEL237:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL237:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_236);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_236:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_235);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_235:

/*************applic code ends here***********/

L_IF3_EXIT233:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here230***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,59));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL232);
JUMP (FINISH_FVAR_LABEL232);
UNDEF_LABEL232:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL232:


/*************tc-applic cont230***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_230);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover231);
ADD (R10 , IMM(1));
tc_applic_for_label231:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover231);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label231);
tc_applic_end_param_ranover231:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_230:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_229:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_229:

/*************lambda-simple code ends here***********/


/*************tc-applic cont227***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_227);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover228);
ADD (R10 , IMM(1));
tc_applic_for_label228:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover228);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label228);
tc_applic_end_param_ranover228:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_227:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_226:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_226:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,56),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_225);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_225:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_225);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_225);
EXIT_LOOP_COPY_225:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_225:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_225);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_225);
EXIT_LOOP_EXTEND_ENV_225:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_181));
JUMP(L_CLOSURE_EXIT_181);
L_CLOSURE_BODY_181:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_224);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_224:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_224);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_224);
EXIT_LOOP_ARGS_224:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_224:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_224);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_224);
EXIT_FIXING_STACK_224:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_224);
NO_OPTIONAL_ARGS_224:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_224:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_224);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_224);
EXIT_NIL_CASE_LOOP_224:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_224:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here182***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_223);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_223:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_223);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_223);
EXIT_LOOP_COPY_223:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_223:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_223);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_223);
EXIT_LOOP_EXTEND_ENV_223:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_184));
JUMP(L_CLOSURE_EXIT_184);
L_CLOSURE_BODY_184:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_184);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R7, R0)

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_222);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_222:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_222);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_222);
EXIT_LOOP_COPY_222:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_222:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_222);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_222);
EXIT_LOOP_EXTEND_ENV_222:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_189));
JUMP(L_CLOSURE_EXIT_189);
L_CLOSURE_BODY_189:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_189);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL221);
JUMP (FINISH_FVAR_LABEL221);
UNDEF_LABEL221:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL221:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_220);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_220:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE191);

/*************tc-applic code starts here217***********/
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL219);
JUMP (FINISH_FVAR_LABEL219);
UNDEF_LABEL219:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL219:


/*************tc-applic cont217***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_217);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover218);
ADD (R10 , IMM(1));
tc_applic_for_label218:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover218);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label218);
tc_applic_end_param_ranover218:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_217:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT190);
L_IF3_ELSE191:

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL216);
JUMP (FINISH_FVAR_LABEL216);
UNDEF_LABEL216:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL216:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_215);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_215:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL214);
JUMP (FINISH_FVAR_LABEL214);
UNDEF_LABEL214:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL214:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_213);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_213:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE193);

/*************tc-applic code starts here204***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL212);
JUMP (FINISH_FVAR_LABEL212);
UNDEF_LABEL212:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL212:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_211);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_211:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL210);
JUMP (FINISH_FVAR_LABEL210);
UNDEF_LABEL210:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL210:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_209);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_209:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL208);
JUMP (FINISH_FVAR_LABEL208);
UNDEF_LABEL208:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL208:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_207);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_207:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,43));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL206);
JUMP (FINISH_FVAR_LABEL206);
UNDEF_LABEL206:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL206:


/*************tc-applic cont204***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_204);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover205);
ADD (R10 , IMM(1));
tc_applic_for_label205:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover205);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label205);
tc_applic_end_param_ranover205:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_204:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT192);
L_IF3_ELSE193:

/*************tc-applic code starts here194***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL203);
JUMP (FINISH_FVAR_LABEL203);
UNDEF_LABEL203:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL203:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_202);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_202:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_201);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_201:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL200);
JUMP (FINISH_FVAR_LABEL200);
UNDEF_LABEL200:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL200:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_199);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_199:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL198);
JUMP (FINISH_FVAR_LABEL198);
UNDEF_LABEL198:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL198:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_197);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_197:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,43));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL196);
JUMP (FINISH_FVAR_LABEL196);
UNDEF_LABEL196:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL196:


/*************tc-applic cont194***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_194);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover195);
ADD (R10 , IMM(1));
tc_applic_for_label195:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover195);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label195);
tc_applic_end_param_ranover195:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_194:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT192:

/*************if3 code ends here***********/

L_IF3_EXIT190:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_189:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_189:

/*************lambda-simple code ends here***********/
MOV(IND(R7),R0);
MOV (R0 , SOB_VOID);

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_188);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_188:

/*************applic code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here185***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,59));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL187);
JUMP (FINISH_FVAR_LABEL187);
UNDEF_LABEL187:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL187:


/*************tc-applic cont185***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_185);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover186);
ADD (R10 , IMM(1));
tc_applic_for_label186:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover186);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label186);
tc_applic_end_param_ranover186:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_185:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_184:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_184:

/*************lambda-simple code ends here***********/


/*************tc-applic cont182***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_182);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover183);
ADD (R10 , IMM(1));
tc_applic_for_label183:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover183);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label183);
tc_applic_end_param_ranover183:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_182:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_181:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_181:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,57),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_180);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_180:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_180);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_180);
EXIT_LOOP_COPY_180:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_180:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_180);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_180);
EXIT_LOOP_EXTEND_ENV_180:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_130));
JUMP(L_CLOSURE_EXIT_130);
L_CLOSURE_BODY_130:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_179);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_179:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_179);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_179);
EXIT_LOOP_ARGS_179:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_179:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_179);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_179);
EXIT_FIXING_STACK_179:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_179);
NO_OPTIONAL_ARGS_179:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_179:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_179);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_179);
EXIT_NIL_CASE_LOOP_179:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_179:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here131***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_178);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_178:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_178);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_178);
EXIT_LOOP_COPY_178:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_178:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_178);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_178);
EXIT_LOOP_EXTEND_ENV_178:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_133));
JUMP(L_CLOSURE_EXIT_133);
L_CLOSURE_BODY_133:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_133);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R7, R0)

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_177);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_177:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_177);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_177);
EXIT_LOOP_COPY_177:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_177:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_177);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_177);
EXIT_LOOP_EXTEND_ENV_177:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_149));
JUMP(L_CLOSURE_EXIT_149);
L_CLOSURE_BODY_149:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_149);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL176);
JUMP (FINISH_FVAR_LABEL176);
UNDEF_LABEL176:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL176:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_175);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_175:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL174);
JUMP (FINISH_FVAR_LABEL174);
UNDEF_LABEL174:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL174:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_173);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_173:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE151);

/*************tc-applic code starts here164***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL172);
JUMP (FINISH_FVAR_LABEL172);
UNDEF_LABEL172:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL172:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_171);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_171:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL170);
JUMP (FINISH_FVAR_LABEL170);
UNDEF_LABEL170:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL170:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_169);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_169:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL168);
JUMP (FINISH_FVAR_LABEL168);
UNDEF_LABEL168:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL168:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_167);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_167:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,42));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL166);
JUMP (FINISH_FVAR_LABEL166);
UNDEF_LABEL166:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL166:


/*************tc-applic cont164***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_164);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover165);
ADD (R10 , IMM(1));
tc_applic_for_label165:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover165);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label165);
tc_applic_end_param_ranover165:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_164:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT150);
L_IF3_ELSE151:

/*************tc-applic code starts here152***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL163);
JUMP (FINISH_FVAR_LABEL163);
UNDEF_LABEL163:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL163:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_162);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_162:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL161);
JUMP (FINISH_FVAR_LABEL161);
UNDEF_LABEL161:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL161:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_160);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_160:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL159);
JUMP (FINISH_FVAR_LABEL159);
UNDEF_LABEL159:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL159:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_158);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_158:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL157);
JUMP (FINISH_FVAR_LABEL157);
UNDEF_LABEL157:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL157:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_156);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_156:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,42));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL155);
JUMP (FINISH_FVAR_LABEL155);
UNDEF_LABEL155:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL155:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_154);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_154:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont152***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_152);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover153);
ADD (R10 , IMM(1));
tc_applic_for_label153:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover153);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label153);
tc_applic_end_param_ranover153:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_152:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT150:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_149:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_149:

/*************lambda-simple code ends here***********/
MOV(IND(R7),R0);
MOV (R0 , SOB_VOID);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL148);
JUMP (FINISH_FVAR_LABEL148);
UNDEF_LABEL148:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL148:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_147);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_147:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL146);
JUMP (FINISH_FVAR_LABEL146);
UNDEF_LABEL146:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL146:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_145);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_145:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE138);

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_144);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_144:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT137);
L_IF3_ELSE138:

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL143);
JUMP (FINISH_FVAR_LABEL143);
UNDEF_LABEL143:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL143:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_142);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_142:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL141);
JUMP (FINISH_FVAR_LABEL141);
UNDEF_LABEL141:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL141:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_140);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_140:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_139);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_139:

/*************applic code ends here***********/

L_IF3_EXIT137:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here134***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,59));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL136);
JUMP (FINISH_FVAR_LABEL136);
UNDEF_LABEL136:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL136:


/*************tc-applic cont134***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_134);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover135);
ADD (R10 , IMM(1));
tc_applic_for_label135:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover135);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label135);
tc_applic_end_param_ranover135:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_134:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_133:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_133:

/*************lambda-simple code ends here***********/


/*************tc-applic cont131***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_131);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover132);
ADD (R10 , IMM(1));
tc_applic_for_label132:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover132);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label132);
tc_applic_end_param_ranover132:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_131:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_130:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_130:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,58),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_129);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_129:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_129);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_129);
EXIT_LOOP_COPY_129:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_129:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_129);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_129);
EXIT_LOOP_EXTEND_ENV_129:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_90));
JUMP(L_CLOSURE_EXIT_90);
L_CLOSURE_BODY_90:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_128);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_128:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_128);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_128);
EXIT_LOOP_ARGS_128:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_128:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_128);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_128);
EXIT_FIXING_STACK_128:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_128);
NO_OPTIONAL_ARGS_128:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_128:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_128);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_128);
EXIT_NIL_CASE_LOOP_128:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_128:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here91***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_127);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_127:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_127);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_127);
EXIT_LOOP_COPY_127:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_127:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_127);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_127);
EXIT_LOOP_EXTEND_ENV_127:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_93));
JUMP(L_CLOSURE_EXIT_93);
L_CLOSURE_BODY_93:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_93);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R7, R0)

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_126);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_126:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_126);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_126);
EXIT_LOOP_COPY_126:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_126:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_126);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_126);
EXIT_LOOP_EXTEND_ENV_126:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_101));
JUMP(L_CLOSURE_EXIT_101);
L_CLOSURE_BODY_101:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_101);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL125);
JUMP (FINISH_FVAR_LABEL125);
UNDEF_LABEL125:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL125:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_124);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_124:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL123);
JUMP (FINISH_FVAR_LABEL123);
UNDEF_LABEL123:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL123:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_122);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_122:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE103);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT102);
L_IF3_ELSE103:

/*************tc-applic code starts here104***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL121);
JUMP (FINISH_FVAR_LABEL121);
UNDEF_LABEL121:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL121:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_120);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_120:

/*************applic code ends here***********/

PUSH(R0);

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE107);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL119);
JUMP (FINISH_FVAR_LABEL119);
UNDEF_LABEL119:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL119:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_118);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_118:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL117);
JUMP (FINISH_FVAR_LABEL117);
UNDEF_LABEL117:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL117:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_116);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_116:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL115);
JUMP (FINISH_FVAR_LABEL115);
UNDEF_LABEL115:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL115:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_114);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_114:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL113);
JUMP (FINISH_FVAR_LABEL113);
UNDEF_LABEL113:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL113:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_112);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_112:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL111);
JUMP (FINISH_FVAR_LABEL111);
UNDEF_LABEL111:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL111:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_110);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_110:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,40));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL109);
JUMP (FINISH_FVAR_LABEL109);
UNDEF_LABEL109:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL109:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_108);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_108:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT106);
L_IF3_ELSE107:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT106:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont104***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_104);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover105);
ADD (R10 , IMM(1));
tc_applic_for_label105:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover105);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label105);
tc_applic_end_param_ranover105:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_104:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT102:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_101:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_101:

/*************lambda-simple code ends here***********/
MOV(IND(R7),R0);
MOV (R0 , SOB_VOID);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL100);
JUMP (FINISH_FVAR_LABEL100);
UNDEF_LABEL100:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL100:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_99);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_99:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL98);
JUMP (FINISH_FVAR_LABEL98);
UNDEF_LABEL98:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL98:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_97);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_97:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE95);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT94);
L_IF3_ELSE95:

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,2));

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_96);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_96:

/*************applic code ends here***********/

L_IF3_EXIT94:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_93:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_93:

/*************lambda-simple code ends here***********/


/*************tc-applic cont91***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_91);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover92);
ADD (R10 , IMM(1));
tc_applic_for_label92:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover92);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label92);
tc_applic_end_param_ranover92:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_91:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_90:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_90:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,60),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_89);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_89:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_89);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_89);
EXIT_LOOP_COPY_89:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_89:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_89);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_89);
EXIT_LOOP_EXTEND_ENV_89:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_50));
JUMP(L_CLOSURE_EXIT_50);
L_CLOSURE_BODY_50:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_88);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_88:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_88);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_88);
EXIT_LOOP_ARGS_88:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_88:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_88);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_88);
EXIT_FIXING_STACK_88:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_88);
NO_OPTIONAL_ARGS_88:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_88:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_88);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_88);
EXIT_NIL_CASE_LOOP_88:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_88:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here51***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_87);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_87:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_87);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_87);
EXIT_LOOP_COPY_87:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_87:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_87);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_87);
EXIT_LOOP_EXTEND_ENV_87:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_53));
JUMP(L_CLOSURE_EXIT_53);
L_CLOSURE_BODY_53:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_53);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R7, R0)

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_86);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_86:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_86);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_86);
EXIT_LOOP_COPY_86:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_86:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_86);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_86);
EXIT_LOOP_EXTEND_ENV_86:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_61));
JUMP(L_CLOSURE_EXIT_61);
L_CLOSURE_BODY_61:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_61);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL85);
JUMP (FINISH_FVAR_LABEL85);
UNDEF_LABEL85:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL85:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_84);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_84:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL83);
JUMP (FINISH_FVAR_LABEL83);
UNDEF_LABEL83:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL83:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_82);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_82:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE63);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT62);
L_IF3_ELSE63:

/*************tc-applic code starts here64***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL81);
JUMP (FINISH_FVAR_LABEL81);
UNDEF_LABEL81:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL81:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_80);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_80:

/*************applic code ends here***********/

PUSH(R0);

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE67);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL79);
JUMP (FINISH_FVAR_LABEL79);
UNDEF_LABEL79:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL79:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_78);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_78:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL77);
JUMP (FINISH_FVAR_LABEL77);
UNDEF_LABEL77:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL77:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_76);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_76:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL75);
JUMP (FINISH_FVAR_LABEL75);
UNDEF_LABEL75:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL75:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_74);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_74:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL73);
JUMP (FINISH_FVAR_LABEL73);
UNDEF_LABEL73:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL73:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_72);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_72:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL71);
JUMP (FINISH_FVAR_LABEL71);
UNDEF_LABEL71:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL71:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_70);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_70:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,41));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL69);
JUMP (FINISH_FVAR_LABEL69);
UNDEF_LABEL69:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL69:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_68);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_68:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT66);
L_IF3_ELSE67:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT66:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont64***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_64);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover65);
ADD (R10 , IMM(1));
tc_applic_for_label65:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover65);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label65);
tc_applic_end_param_ranover65:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_64:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT62:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_61:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_61:

/*************lambda-simple code ends here***********/
MOV(IND(R7),R0);
MOV (R0 , SOB_VOID);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL60);
JUMP (FINISH_FVAR_LABEL60);
UNDEF_LABEL60:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL60:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_59);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_59:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL58);
JUMP (FINISH_FVAR_LABEL58);
UNDEF_LABEL58:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL58:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_57);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_57:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE55);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT54);
L_IF3_ELSE55:

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,2));

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_56);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_56:

/*************applic code ends here***********/

L_IF3_EXIT54:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_53:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_53:

/*************lambda-simple code ends here***********/


/*************tc-applic cont51***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_51);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover52);
ADD (R10 , IMM(1));
tc_applic_for_label52:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover52);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label52);
tc_applic_end_param_ranover52:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_51:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_50:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_50:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,61),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_49);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_49:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_49);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_49);
EXIT_LOOP_COPY_49:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_49:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_49);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_49);
EXIT_LOOP_EXTEND_ENV_49:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_10));
JUMP(L_CLOSURE_EXIT_10);
L_CLOSURE_BODY_10:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_48);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_48:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_48);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_48);
EXIT_LOOP_ARGS_48:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_48:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_48);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_48);
EXIT_FIXING_STACK_48:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_48);
NO_OPTIONAL_ARGS_48:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_48:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_48);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_48);
EXIT_NIL_CASE_LOOP_48:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_48:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here11***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_47);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_47:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_47);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_47);
EXIT_LOOP_COPY_47:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_47:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_47);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_47);
EXIT_LOOP_EXTEND_ENV_47:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_13));
JUMP(L_CLOSURE_EXIT_13);
L_CLOSURE_BODY_13:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_13);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R7, R0)

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_46);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_46:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_46);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_46);
EXIT_LOOP_COPY_46:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_46:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_46);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_46);
EXIT_LOOP_EXTEND_ENV_46:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_21));
JUMP(L_CLOSURE_EXIT_21);
L_CLOSURE_BODY_21:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_21);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL45);
JUMP (FINISH_FVAR_LABEL45);
UNDEF_LABEL45:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL45:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_44);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_44:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL43);
JUMP (FINISH_FVAR_LABEL43);
UNDEF_LABEL43:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL43:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_42);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_42:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE23);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT22);
L_IF3_ELSE23:

/*************tc-applic code starts here24***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL41);
JUMP (FINISH_FVAR_LABEL41);
UNDEF_LABEL41:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL41:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_40);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_40:

/*************applic code ends here***********/

PUSH(R0);

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE27);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL39);
JUMP (FINISH_FVAR_LABEL39);
UNDEF_LABEL39:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL39:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_38);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_38:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL37);
JUMP (FINISH_FVAR_LABEL37);
UNDEF_LABEL37:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL37:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_36);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_36:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL35);
JUMP (FINISH_FVAR_LABEL35);
UNDEF_LABEL35:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL35:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_34);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_34:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL33);
JUMP (FINISH_FVAR_LABEL33);
UNDEF_LABEL33:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL33:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_32);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_32:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL31);
JUMP (FINISH_FVAR_LABEL31);
UNDEF_LABEL31:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL31:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_30);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_30:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,44));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL29);
JUMP (FINISH_FVAR_LABEL29);
UNDEF_LABEL29:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL29:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_28);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_28:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT26);
L_IF3_ELSE27:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT26:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont24***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_24);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover25);
ADD (R10 , IMM(1));
tc_applic_for_label25:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover25);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label25);
tc_applic_end_param_ranover25:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_24:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT22:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_21:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_21:

/*************lambda-simple code ends here***********/
MOV(IND(R7),R0);
MOV (R0 , SOB_VOID);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL20);
JUMP (FINISH_FVAR_LABEL20);
UNDEF_LABEL20:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL20:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_19);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_19:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL18);
JUMP (FINISH_FVAR_LABEL18);
UNDEF_LABEL18:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL18:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_17);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_17:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE15);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT14);
L_IF3_ELSE15:

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,2));

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_16);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_16:

/*************applic code ends here***********/

L_IF3_EXIT14:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_13:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_13:

/*************lambda-simple code ends here***********/


/*************tc-applic cont11***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_11);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover12);
ADD (R10 , IMM(1));
tc_applic_for_label12:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover12);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label12);
tc_applic_end_param_ranover12:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_11:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_10:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_10:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,62),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,7));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,6));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(3);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL9);
JUMP (FINISH_FVAR_LABEL9);
UNDEF_LABEL9:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL9:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_8);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_8:

/*************applic code ends here***********/

PUSH(R0);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_7);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_7:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_7);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_7);
EXIT_LOOP_COPY_7:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_7:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_7);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_7);
EXIT_LOOP_EXTEND_ENV_7:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_3));
JUMP(L_CLOSURE_EXIT_3);
L_CLOSURE_BODY_3:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_3);

/*************tc-applic code starts here4***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 2));

/*************pvar code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(3);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL6);
JUMP (FINISH_FVAR_LABEL6);
UNDEF_LABEL6:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL6:


/*************tc-applic cont4***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5);
ADD (R10 , IMM(1));
tc_applic_for_label5:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5);
tc_applic_end_param_ranover5:
MOV (R11, R12);
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (R11, STARG(0));
MOV (FPARG(R9) , R11);
SUB (R9 , 1);
MOV (FPARG(R9) , R7);
SUB (R9 , 1);
MOV (SP ,FP);
SUB (SP , R9);
SUB (SP , 3);
MOV (FP , R8);

/*************run run_over_frame starts***********/

/*************tc-applic code ends here, after that line suppose to be an unconditional jump to R0-body***********/
JUMPA (INDD(R0,2)); 
L_Error_cannot_tc_apply_non_closure_4:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_3:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_3:

/*************lambda-simple code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,30));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL2);
JUMP (FINISH_FVAR_LABEL2);
UNDEF_LABEL2:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL2:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_1);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_1:

/*************applic code ends here***********/

/*************seq code ends***********/

INFO
STOP_MACHINE;
return 0;
}