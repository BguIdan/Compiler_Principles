#include <stdio.h>
#include <stdlib.h>
#define DO_SHOW 1
#include "arch/cisc.h"
#include "arch/beneyal.h"
int main()
{
START_MACHINE;
JUMP(CONTINUE);
#include "arch/char.lib"
#include "arch/io.lib"
#include "arch/math.lib"
#include "arch/string.lib"
#include "arch/system.lib"
#include "arch/scheme.lib"
CONTINUE:
#define SOB_NIL IND (CONSTARRAY)
#define SOB_VOID INDD (CONSTARRAY,1)
#define SOB_TRUE INDD (CONSTARRAY,2)
#define SOB_FALSE INDD (CONSTARRAY,3)

/*************init Const-Table starts here***********/
PUSH(IMM(7));
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

/*************init Const-Table ends here***********/

/*************symbol table starts: ***********/
MOV (R7,SOB_NIL);
MOV (SYMBOLTABLE,R7);

/*************symbol table ends: ***********/

/*************init Fvar-Table start here***********/
PUSH(IMM(66));
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
MOV(INDD(FVARARRAY,63) , 0XDEF);
MOV(INDD(FVARARRAY,64) , 0XDEF);
MOV(INDD(FVARARRAY,65) , 0XDEF);

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

/*************RS_void1?starts***********/
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
SHOW("error in procedure void1?",FPARG(2));
HALT;
RS_void_TRUE_COND:
POP(FP);
RETURN;
RS_LABEL_void_finish:

/*************RS_void1?ends***********/

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
CMP(INDD(FPARG(2),0),T_FRACTION);
JUMP_EQ(RS_compare_vals_FRACTION_TYPE);
CMP (INDD(FPARG(2),1) , INDD(FPARG(3),1));
JUMP_NE(RS_compare_vals_False_Label);
RS_CV_TRUE_LABEL:
MOV (R0 , SOB_TRUE);
JUMP(RS_compare_vals_Exit_Label);
RS_compare_vals_False_Label:
MOV (R0 , SOB_FALSE);
JUMP(RS_compare_vals_Exit_Label);
RS_compare_vals_FRACTION_TYPE:
CMP (INDD(FPARG(2),1) , INDD(FPARG(3),1));
JUMP_NE(RS_compare_vals_False_Label);
CMP (INDD(FPARG(2),2) , INDD(FPARG(3),2));
JUMP_NE(RS_compare_vals_False_Label);
JUMP(RS_CV_TRUE_LABEL);
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
JUMP_EQ (STR_TO_SYM_ADD_HERE);MOV(R13,INDD(R10,0));
CMP (R7 , INDD(R10,0));
JUMP_EQ(RS_STRING_TO_SYMBOL_STR_FOUND);
MOV(R14,INDD(R7,1));
CMP(INDD(R7,1),INDD(R13,1));
JUMP_NE(PROCEED_LOOP_STR_SYM);
MOV(R15 ,0);
RS_STR_TO_STR_CMP_LOOP:
CMP(R15,R14);
JUMP_EQ(RS_STRING_TO_SYMBOL_STR_FOUND);
CMP(INDD(R7,R15+2),INDD(R13,R15+2));
JUMP_NE(PROCEED_LOOP_STR_SYM);
ADD (R15,1);
JUMP(RS_STR_TO_STR_CMP_LOOP)
PROCEED_LOOP_STR_SYM:
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
JUMP(STRTOSYM_RETURN_TO_USER);
RS_STRING_TO_SYMBOL_STR_FOUND:
MOV(R7,INDD(R10,0));
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
MOV(R0,SOB_VOID);
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

/*************RS_make_vector starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_make_vector_body));
MOV(INDD(FVARARRAY,26),R0);
JUMP (RS_make_vector_closure_ends);
RS_make_vector_body:
PUSH(FP);
MOV(FP,SP);
MOV (R6, FPARG(1));
MOV (R7, INDD(FPARG(2),1));
CMP(R6,2);
JUMP_EQ(RS_MAKE_VECTOR_OPERAND);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_INTEGER);
MOV(INDD(R0,1),0);
MOV(R8,R0);
JUMP(RS_MAKE_VECTOR_INIT_VEC);
RS_MAKE_VECTOR_OPERAND:
MOV(R8,FPARG(3));
RS_MAKE_VECTOR_INIT_VEC:MOV(R9,2);
MOV(R10,R7);
ADD(R10,2);
PUSH(R10);
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_VECTOR);
MOV(INDD(R0,1),R7);
RS_MAKE_VECTOR_LOOP:
CMP(R7,0);
JUMP_EQ(RS_MAKE_VECTOR_ENDS);
MOV(INDD(R0,R9),R8);
ADD(R9,1);
SUB(R7,1);
JUMP(RS_MAKE_VECTOR_LOOP);
RS_MAKE_VECTOR_ENDS:
POP(FP);
RETURN;
RS_ERORR_RS_make_vector:
SHOW("error in procedure RS_make_vector",R0);
HALT;
RS_make_vector_closure_ends:

/*************RS_make_vector ends***********/

/*************RS_string_length starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_string_length_body));
MOV(INDD(FVARARRAY,27),R0);
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
MOV(INDD(FVARARRAY,28),R0);
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
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CHAR);
MOV(INDD(R0,1),INDD(R10,R8));
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
MOV(INDD(FVARARRAY,29),R0);
JUMP (RS_make_string_closure_ends);
RS_make_string_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_make_string);
MOV (R3 , INDD(FPARG(3),1));
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
MOV(INDD(FVARARRAY,30),R0);
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
MOV (R4 , INDD (FPARG(4) ,1));
MOV (INDD(R2,R3) , R4);
MOV(R0,SOB_VOID);
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
MOV(INDD(FVARARRAY,31),R0);
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

/*************RS_append_bin  starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_append_bin_body));
MOV(INDD(FVARARRAY,32),R0);
JUMP (RS_append_bin_closure_ends);
RS_append_bin_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(2));
JUMP_NE (RS_ERORR_RS_append_bin );
MOV(R6,FPARG(2));
MOV(R7,FPARG(3));
CMP(R6,SOB_NIL);
JUMP_EQ(RS_APPEND_FINISH_ADDING);
CMP (IND(R6) , T_PAIR);
JUMP_NE(RS_ERORR_RS_append_bin );
CMP (R7 , SOB_NIL);
JUMP_EQ(RS_APPEND_FINISH_ADDING2);
RS_APPEND_ADDING_LOOP:
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0) , T_PAIR);
MOV(INDD(R0,1) , (INDD(R6 ,1)));
MOV(INDD(R0,2) , R7);
MOV(R7,R0);
CMP(INDD(R6,2),SOB_NIL);
JUMP_EQ(RS_APPEND_FINISH_ADDING);
MOV(R6, INDD(R6,2));
JUMP(RS_APPEND_ADDING_LOOP);
RS_APPEND_FINISH_ADDING2:
MOV(R0,R6);
JUMP(RS_append_END);
RS_APPEND_FINISH_ADDING:
MOV(R0,R7);
RS_append_END:
POP(FP);
RETURN;
RS_ERORR_RS_append_bin :
SHOW("error in procedure RS_append_bin ",R0);
HALT;
RS_append_bin_closure_ends:

/*************RS_append_bin  ends***********/

/*************RS_cahrToInteger starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_cahrToInteger_body));
MOV(INDD(FVARARRAY,33),R0);
JUMP (RS_cahrToInteger_closure_ends);
RS_cahrToInteger_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_RS_cahrToInteger);
MOV (R2 , FPARG(2));
CMP (INDD(R2,0) , T_CHAR);
JUMP_NE(RS_ERORR_RS_cahrToInteger);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_INTEGER);
MOV (INDD(R0,1) , INDD(R2,1));
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
MOV(INDD(FVARARRAY,34),R0);
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
MOV(INDD(FVARARRAY,35),R0);
JUMP (RS_integerToChar_closure_ends);
RS_integerToChar_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(1));
JUMP_NE (RS_ERORR_RS_integerToChar);
MOV (R2 , FPARG(2));
CMP (INDD(R2,0) , T_INTEGER);
JUMP_NE(RS_ERORR_RS_integerToChar);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_CHAR);
MOV (INDD(R0,1) , INDD(R2,1));
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
MOV(INDD(FVARARRAY,36),R0);
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
MOV(INDD(FVARARRAY,37),R0);
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
 INFO 

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
MOV(INDD(FVARARRAY,38),R0);
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
MOV(INDD(FVARARRAY,39),R0);
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
MOV(INDD(FVARARRAY,40),R0);
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
MOV(INDD(FVARARRAY,41),R0);
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
MOV(INDD(FVARARRAY,42),R0);
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
MOV(INDD(FVARARRAY,43),R0);
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
MOV(INDD(FVARARRAY,45),R0);
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
MOV(INDD(FVARARRAY,44),R0);
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
MOV(INDD(FVARARRAY,46),R0);
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
MOV(INDD(FVARARRAY,47),R0);
JUMP (RS_create_frac_from_ints_closure_ends);
RS_create_frac_from_ints_body:
PUSH(FP);
MOV(FP,SP);
CMP (FPARG(1),IMM(3));
JUMP_NE (RS_ERORR_RS_create_frac_from_ints);
MOV (R6 , INDD ( FPARG(2) , 1 ));
MOV (R7 , INDD ( FPARG(3) , 1 ));
MOV (R8 , INDD ( FPARG(4) , 1 ));
CMP(R7,0);
JUMP_LT(RS_CREATE_FRACTION_NEGATIVE_DENOM);
JUMP(RS_CREATE_FRAC_PROCEED_CREATING);
RS_CREATE_FRACTION_NEGATIVE_DENOM:
MUL (R6,-1);
MUL (R7,-1);
RS_CREATE_FRAC_PROCEED_CREATING:
CMP(R8,0);
JUMP_LT(RS_CREATE_FRAC_GCD_IS_NEG);
JUMP(RS_CREATE_FRAC_GCD_IS_NOT_NEG);
RS_CREATE_FRAC_GCD_IS_NEG:
MUL(R8,-1);
RS_CREATE_FRAC_GCD_IS_NOT_NEG:
DIV (R6 , R8);
DIV (R7 , R8);
CMP (R7 ,1);
JUMP_EQ (RS_CREATE_FRAC_INTEGER_COND);
CMP (R7 ,-1);
JUMP_EQ (RS_CREATE_FRAC__NEGETAIVE_INTEGER_COND);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0),T_FRACTION)
MOV (INDD(R0,1),R6)
MOV (INDD(R0,2),R7)
JUMP(RS_MAKE_FRAC_END);
RS_CREATE_FRAC__NEGETAIVE_INTEGER_COND:
MUL(R6,-1);
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

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_580);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_580:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_580);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_580);
EXIT_LOOP_COPY_580:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_580:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_580);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_580);
EXIT_LOOP_EXTEND_ENV_580:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_562));
JUMP(L_CLOSURE_EXIT_562);
L_CLOSURE_BODY_562:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_562);

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
JUMP_EQ (UNDEF_LABEL579);
JUMP (FINISH_FVAR_LABEL579);
UNDEF_LABEL579:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL579:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_578);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_578:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE564);

/*************tc-applic code starts here575***********/
PUSH (IMM(0));

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,36));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL577);
JUMP (FINISH_FVAR_LABEL577);
UNDEF_LABEL577:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL577:


/*************tc-applic cont575***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_575);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover576);
ADD (R10 , IMM(1));
tc_applic_for_label576:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover576);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label576);
tc_applic_end_param_ranover576:
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
L_Error_cannot_tc_apply_non_closure_575:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT563);
L_IF3_ELSE564:

/*************tc-applic code starts here565***********/

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
JUMP_EQ (UNDEF_LABEL574);
JUMP (FINISH_FVAR_LABEL574);
UNDEF_LABEL574:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL574:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_573);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_573:

/*************applic code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,48));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL572);
JUMP (FINISH_FVAR_LABEL572);
UNDEF_LABEL572:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL572:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_571);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_571:

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
JUMP_EQ (UNDEF_LABEL570);
JUMP (FINISH_FVAR_LABEL570);
UNDEF_LABEL570:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL570:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_569);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_569:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_568);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_568:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,2));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL567);
JUMP (FINISH_FVAR_LABEL567);
UNDEF_LABEL567:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL567:


/*************tc-applic cont565***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_565);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover566);
ADD (R10 , IMM(1));
tc_applic_for_label566:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover566);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label566);
tc_applic_end_param_ranover566:
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
L_Error_cannot_tc_apply_non_closure_565:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT563:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_562:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_562:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,48),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_561);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_561:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_596);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_596:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_596);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_596);
EXIT_LOOP_COPY_596:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_596:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_596);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_596);
EXIT_LOOP_EXTEND_ENV_596:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_582));
JUMP(L_CLOSURE_EXIT_582);
L_CLOSURE_BODY_582:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_582);

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
JUMP_EQ (UNDEF_LABEL595);
JUMP (FINISH_FVAR_LABEL595);
UNDEF_LABEL595:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL595:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_594);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_594:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE584);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT583);
L_IF3_ELSE584:

/*************tc-applic code starts here585***********/

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
JUMP_EQ (UNDEF_LABEL593);
JUMP (FINISH_FVAR_LABEL593);
UNDEF_LABEL593:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL593:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_592);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_592:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,2));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL591);
JUMP (FINISH_FVAR_LABEL591);
UNDEF_LABEL591:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL591:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_590);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_590:

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
JUMP_EQ (UNDEF_LABEL589);
JUMP (FINISH_FVAR_LABEL589);
UNDEF_LABEL589:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL589:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_588);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_588:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,51));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL587);
JUMP (FINISH_FVAR_LABEL587);
UNDEF_LABEL587:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL587:


/*************tc-applic cont585***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_585);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover586);
ADD (R10 , IMM(1));
tc_applic_for_label586:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover586);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label586);
tc_applic_end_param_ranover586:
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
L_Error_cannot_tc_apply_non_closure_585:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT583:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_582:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_582:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,51),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_581);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_581:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_538);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_538:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_538);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_538);
EXIT_LOOP_COPY_538:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_538:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_538);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_538);
EXIT_LOOP_EXTEND_ENV_538:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_525));
JUMP(L_CLOSURE_EXIT_525);
L_CLOSURE_BODY_525:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_525);

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
JUMP_EQ (UNDEF_LABEL537);
JUMP (FINISH_FVAR_LABEL537);
UNDEF_LABEL537:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL537:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_536);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_536:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE527);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT526);
L_IF3_ELSE527:

/*************tc-applic code starts here528***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 2));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL535);
JUMP (FINISH_FVAR_LABEL535);
UNDEF_LABEL535:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL535:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_534);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_534:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 2));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL533);
JUMP (FINISH_FVAR_LABEL533);
UNDEF_LABEL533:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL533:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_532);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_532:

/*************applic code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_531);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_531:

/*************applic code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(3);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,49));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL530);
JUMP (FINISH_FVAR_LABEL530);
UNDEF_LABEL530:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL530:


/*************tc-applic cont528***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_528);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover529);
ADD (R10 , IMM(1));
tc_applic_for_label529:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover529);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label529);
tc_applic_end_param_ranover529:
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
L_Error_cannot_tc_apply_non_closure_528:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT526:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_525:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_525:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,49),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_524);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_524:

/*************'def' code starts here***********/

/*************lambda-opt code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_560);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_560:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_560);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_560);
EXIT_LOOP_COPY_560:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_560:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_560);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_560);
EXIT_LOOP_EXTEND_ENV_560:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_540));
JUMP(L_CLOSURE_EXIT_540);
L_CLOSURE_BODY_540:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 1);
JUMP_EQ(NO_OPTIONAL_ARGS_559);
MOV (R8,FPARG(1)-1- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_559:
CMP (R4 ,0);
JUMP_EQ(EXIT_LOOP_ARGS_559);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_559);
EXIT_LOOP_ARGS_559:
MOV (FPARG(2 + 1), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 2);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_559:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_559);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_559);
EXIT_FIXING_STACK_559:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_559);
NO_OPTIONAL_ARGS_559:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_559:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_559);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_559);
EXIT_NIL_CASE_LOOP_559:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_559:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

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
JUMP_EQ (UNDEF_LABEL558);
JUMP (FINISH_FVAR_LABEL558);
UNDEF_LABEL558:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL558:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_557);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_557:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE542);

/*************tc-applic code starts here554***********/
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,29));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL556);
JUMP (FINISH_FVAR_LABEL556);
UNDEF_LABEL556:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL556:


/*************tc-applic cont554***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_554);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover555);
ADD (R10 , IMM(1));
tc_applic_for_label555:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover555);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label555);
tc_applic_end_param_ranover555:
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
L_Error_cannot_tc_apply_non_closure_554:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT541);
L_IF3_ELSE542:

/*************if3 code starts here***********/

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
JUMP_EQ (UNDEF_LABEL553);
JUMP (FINISH_FVAR_LABEL553);
UNDEF_LABEL553:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL553:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_552);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_552:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,6));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL551);
JUMP (FINISH_FVAR_LABEL551);
UNDEF_LABEL551:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL551:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_550);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_550:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE544);

/*************tc-applic code starts here545***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL549);
JUMP (FINISH_FVAR_LABEL549);
UNDEF_LABEL549:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL549:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_548);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_548:

/*************applic code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,29));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL547);
JUMP (FINISH_FVAR_LABEL547);
UNDEF_LABEL547:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL547:


/*************tc-applic cont545***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_545);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover546);
ADD (R10 , IMM(1));
tc_applic_for_label546:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover546);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label546);
tc_applic_end_param_ranover546:
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
L_Error_cannot_tc_apply_non_closure_545:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT543);
L_IF3_ELSE544:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT543:

/*************if3 code ends here***********/

L_IF3_EXIT541:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_540:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_540:

/*************lambda-opt code ends here***********/
MOV(INDD(FVARARRAY,50),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_539);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_539:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_500);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_500:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_500);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_500);
EXIT_LOOP_COPY_500:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_500:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_500);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_500);
EXIT_LOOP_EXTEND_ENV_500:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_450));
JUMP(L_CLOSURE_EXIT_450);
L_CLOSURE_BODY_450:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_450);

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
JUMP_EQ (UNDEF_LABEL499);
JUMP (FINISH_FVAR_LABEL499);
UNDEF_LABEL499:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL499:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_498);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_498:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE452);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT451);
L_IF3_ELSE452:

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
JUMP_EQ (UNDEF_LABEL497);
JUMP (FINISH_FVAR_LABEL497);
UNDEF_LABEL497:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL497:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_496);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_496:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE454);

/*************tc-applic code starts here489***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL495);
JUMP (FINISH_FVAR_LABEL495);
UNDEF_LABEL495:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL495:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_494);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_494:

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
JUMP_EQ (UNDEF_LABEL493);
JUMP (FINISH_FVAR_LABEL493);
UNDEF_LABEL493:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL493:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_492);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_492:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,53));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL491);
JUMP (FINISH_FVAR_LABEL491);
UNDEF_LABEL491:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL491:


/*************tc-applic cont489***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_489);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover490);
ADD (R10 , IMM(1));
tc_applic_for_label490:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover490);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label490);
tc_applic_end_param_ranover490:
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
L_Error_cannot_tc_apply_non_closure_489:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT453);
L_IF3_ELSE454:

/*************if3 code starts here***********/

/*************if3 code starts here***********/

/*************applic code starts here***********/

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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL486);
JUMP (FINISH_FVAR_LABEL486);
UNDEF_LABEL486:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL486:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_485);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_485:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,17));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL484);
JUMP (FINISH_FVAR_LABEL484);
UNDEF_LABEL484:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL484:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_483);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_483:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE478);

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
JUMP_EQ (UNDEF_LABEL482);
JUMP (FINISH_FVAR_LABEL482);
UNDEF_LABEL482:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL482:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_481);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_481:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL480);
JUMP (FINISH_FVAR_LABEL480);
UNDEF_LABEL480:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL480:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_479);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_479:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT477);
L_IF3_ELSE478:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT477:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE456);

/*************tc-applic code starts here472***********/

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
JUMP_EQ (UNDEF_LABEL476);
JUMP (FINISH_FVAR_LABEL476);
UNDEF_LABEL476:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL476:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_475);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_475:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,53));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL474);
JUMP (FINISH_FVAR_LABEL474);
UNDEF_LABEL474:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL474:


/*************tc-applic cont472***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_472);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover473);
ADD (R10 , IMM(1));
tc_applic_for_label473:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover473);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label473);
tc_applic_end_param_ranover473:
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
L_Error_cannot_tc_apply_non_closure_472:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT455);
L_IF3_ELSE456:

/*************seq code starts***********/

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
JUMP_EQ (UNDEF_LABEL471);
JUMP (FINISH_FVAR_LABEL471);
UNDEF_LABEL471:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL471:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_470);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_470:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL469);
JUMP (FINISH_FVAR_LABEL469);
UNDEF_LABEL469:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL469:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_468);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_468:

/*************applic code ends here***********/

/*************tc-applic code starts here457***********/

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
JUMP_EQ (UNDEF_LABEL467);
JUMP (FINISH_FVAR_LABEL467);
UNDEF_LABEL467:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL467:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_466);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_466:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,0));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,51));
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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
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

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
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
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,53));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL459);
JUMP (FINISH_FVAR_LABEL459);
UNDEF_LABEL459:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL459:


/*************tc-applic cont457***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_457);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover458);
ADD (R10 , IMM(1));
tc_applic_for_label458:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover458);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label458);
tc_applic_end_param_ranover458:
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
L_Error_cannot_tc_apply_non_closure_457:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/

L_IF3_EXIT455:

/*************if3 code ends here***********/

L_IF3_EXIT453:

/*************if3 code ends here***********/

L_IF3_EXIT451:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_450:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_450:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,53),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_449);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_449:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_523);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_523:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_523);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_523);
EXIT_LOOP_COPY_523:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_523:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_523);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_523);
EXIT_LOOP_EXTEND_ENV_523:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_502));
JUMP(L_CLOSURE_EXIT_502);
L_CLOSURE_BODY_502:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_522);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_522:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_522);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_522);
EXIT_LOOP_ARGS_522:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_522:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_522);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_522);
EXIT_FIXING_STACK_522:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_522);
NO_OPTIONAL_ARGS_522:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_522:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_522);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_522);
EXIT_NIL_CASE_LOOP_522:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_522:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

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
JUMP_EQ (UNDEF_LABEL521);
JUMP (FINISH_FVAR_LABEL521);
UNDEF_LABEL521:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL521:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_520);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_520:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE504);

/*************tc-applic code starts here517***********/
PUSH (IMM(0));

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,36));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL519);
JUMP (FINISH_FVAR_LABEL519);
UNDEF_LABEL519:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL519:


/*************tc-applic cont517***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_517);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover518);
ADD (R10 , IMM(1));
tc_applic_for_label518:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover518);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label518);
tc_applic_end_param_ranover518:
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
L_Error_cannot_tc_apply_non_closure_517:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT503);
L_IF3_ELSE504:

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
JUMP_EQ (UNDEF_LABEL516);
JUMP (FINISH_FVAR_LABEL516);
UNDEF_LABEL516:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL516:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_515);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_515:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL514);
JUMP (FINISH_FVAR_LABEL514);
UNDEF_LABEL514:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL514:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_513);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_513:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE506);

/*************tc-applic code starts here510***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL512);
JUMP (FINISH_FVAR_LABEL512);
UNDEF_LABEL512:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL512:


/*************tc-applic cont510***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_510);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover511);
ADD (R10 , IMM(1));
tc_applic_for_label511:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover511);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label511);
tc_applic_end_param_ranover511:
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
L_Error_cannot_tc_apply_non_closure_510:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT505);
L_IF3_ELSE506:

/*************tc-applic code starts here507***********/
MOV (R0 ,INDD(CONSTARRAY,0));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,53));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL509);
JUMP (FINISH_FVAR_LABEL509);
UNDEF_LABEL509:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL509:


/*************tc-applic cont507***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_507);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover508);
ADD (R10 , IMM(1));
tc_applic_for_label508:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover508);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label508);
tc_applic_end_param_ranover508:
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
L_Error_cannot_tc_apply_non_closure_507:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT505:

/*************if3 code ends here***********/

L_IF3_EXIT503:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_502:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_502:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,52),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_501);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_501:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_439);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_439:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_439);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_439);
EXIT_LOOP_COPY_439:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_439:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_439);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_439);
EXIT_LOOP_EXTEND_ENV_439:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_435));
JUMP(L_CLOSURE_EXIT_435);
L_CLOSURE_BODY_435:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_435);

/*************tc-applic code starts here436***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,55));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL438);
JUMP (FINISH_FVAR_LABEL438);
UNDEF_LABEL438:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL438:


/*************tc-applic cont436***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_436);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover437);
ADD (R10 , IMM(1));
tc_applic_for_label437:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover437);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label437);
tc_applic_end_param_ranover437:
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
L_Error_cannot_tc_apply_non_closure_436:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_435:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_435:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,54),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_434);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_434:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_448);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_448:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_448);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_448);
EXIT_LOOP_COPY_448:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_448:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_448);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_448);
EXIT_LOOP_EXTEND_ENV_448:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_441));
JUMP(L_CLOSURE_EXIT_441);
L_CLOSURE_BODY_441:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_441);

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
JUMP_EQ (UNDEF_LABEL447);
JUMP (FINISH_FVAR_LABEL447);
UNDEF_LABEL447:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL447:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_446);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_446:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT442);

/*************tc-applic code starts here443***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL445);
JUMP (FINISH_FVAR_LABEL445);
UNDEF_LABEL445:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL445:


/*************tc-applic cont443***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_443);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover444);
ADD (R10 , IMM(1));
tc_applic_for_label444:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover444);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label444);
tc_applic_end_param_ranover444:
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
L_Error_cannot_tc_apply_non_closure_443:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT442);
L_OR_EXIT442:

/*************or code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_441:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_441:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,55),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_440);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_440:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_421);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_421:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_421);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_421);
EXIT_LOOP_COPY_421:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_421:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_421);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_421);
EXIT_LOOP_EXTEND_ENV_421:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_348));
JUMP(L_CLOSURE_EXIT_348);
L_CLOSURE_BODY_348:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_348);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE416);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,7));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL418);
JUMP (FINISH_FVAR_LABEL418);
UNDEF_LABEL418:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL418:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_417);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_417:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT415);
L_IF3_ELSE416:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT415:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT396);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE410);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL412);
JUMP (FINISH_FVAR_LABEL412);
UNDEF_LABEL412:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL412:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_411);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_411:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT409);
L_IF3_ELSE410:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT409:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT396);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE404);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,6));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL406);
JUMP (FINISH_FVAR_LABEL406);
UNDEF_LABEL406:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL406:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_405);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_405:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT403);
L_IF3_ELSE404:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT403:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT396);

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
JUMP_EQ (UNDEF_LABEL402);
JUMP (FINISH_FVAR_LABEL402);
UNDEF_LABEL402:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL402:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_401);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_401:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE398);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,11));
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

JUMP (L_IF3_EXIT397);
L_IF3_ELSE398:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT397:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT396);
L_OR_EXIT396:

/*************or code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE350);

/*************tc-applic code starts here393***********/

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
JUMP_EQ (UNDEF_LABEL395);
JUMP (FINISH_FVAR_LABEL395);
UNDEF_LABEL395:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL395:


/*************tc-applic cont393***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_393);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover394);
ADD (R10 , IMM(1));
tc_applic_for_label394:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover394);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label394);
tc_applic_end_param_ranover394:
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
L_Error_cannot_tc_apply_non_closure_393:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT349);
L_IF3_ELSE350:

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE388);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL390);
JUMP (FINISH_FVAR_LABEL390);
UNDEF_LABEL390:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL390:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_389);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_389:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT387);
L_IF3_ELSE388:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT387:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT356);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE382);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,14));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL384);
JUMP (FINISH_FVAR_LABEL384);
UNDEF_LABEL384:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL384:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_383);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_383:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT381);
L_IF3_ELSE382:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT381:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT356);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE376);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,5));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL378);
JUMP (FINISH_FVAR_LABEL378);
UNDEF_LABEL378:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL378:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_377);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_377:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT375);
L_IF3_ELSE376:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT375:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT356);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE370);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,10));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL372);
JUMP (FINISH_FVAR_LABEL372);
UNDEF_LABEL372:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL372:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_371);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_371:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT369);
L_IF3_ELSE370:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT369:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT356);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE364);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,12));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL366);
JUMP (FINISH_FVAR_LABEL366);
UNDEF_LABEL366:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL366:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_365);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_365:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT363);
L_IF3_ELSE364:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT363:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT356);

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
JUMP_EQ (UNDEF_LABEL362);
JUMP (FINISH_FVAR_LABEL362);
UNDEF_LABEL362:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL362:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_361);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_361:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE358);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL360);
JUMP (FINISH_FVAR_LABEL360);
UNDEF_LABEL360:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL360:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_359);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_359:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT357);
L_IF3_ELSE358:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT357:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT356);
L_OR_EXIT356:

/*************or code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE352);

/*************tc-applic code starts here353***********/

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
JUMP_EQ (UNDEF_LABEL355);
JUMP (FINISH_FVAR_LABEL355);
UNDEF_LABEL355:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL355:


/*************tc-applic cont353***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_353);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover354);
ADD (R10 , IMM(1));
tc_applic_for_label354:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover354);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label354);
tc_applic_end_param_ranover354:
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
L_Error_cannot_tc_apply_non_closure_353:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT351);
L_IF3_ELSE352:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT351:

/*************if3 code ends here***********/

L_IF3_EXIT349:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_348:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_348:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,56),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_347);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_347:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_433);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_433:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_433);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_433);
EXIT_LOOP_COPY_433:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_433:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_433);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_433);
EXIT_LOOP_EXTEND_ENV_433:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_423));
JUMP(L_CLOSURE_EXIT_423);
L_CLOSURE_BODY_423:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_423);

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
MOV (R0 ,INDD(FVARARRAY,56));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL432);
JUMP (FINISH_FVAR_LABEL432);
UNDEF_LABEL432:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL432:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_431);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_431:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE425);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT424);
L_IF3_ELSE425:

/*************tc-applic code starts here426***********/

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
MOV (R0 ,INDD(FVARARRAY,37));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL430);
JUMP (FINISH_FVAR_LABEL430);
UNDEF_LABEL430:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL430:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_429);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_429:

/*************applic code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,57));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL428);
JUMP (FINISH_FVAR_LABEL428);
UNDEF_LABEL428:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL428:


/*************tc-applic cont426***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_426);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover427);
ADD (R10 , IMM(1));
tc_applic_for_label427:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover427);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label427);
tc_applic_end_param_ranover427:
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
L_Error_cannot_tc_apply_non_closure_426:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT424:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_423:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_423:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,57),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_422);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_422:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_300);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_300:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_300);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_300);
EXIT_LOOP_COPY_300:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_300:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_300);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_300);
EXIT_LOOP_EXTEND_ENV_300:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_278));
JUMP(L_CLOSURE_EXIT_278);
L_CLOSURE_BODY_278:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_278);

/*************tc-applic code starts here279***********/
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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_299);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_299:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_299);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_299);
EXIT_LOOP_COPY_299:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_299:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_299);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_299);
EXIT_LOOP_EXTEND_ENV_299:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_281));
JUMP(L_CLOSURE_EXIT_281);
L_CLOSURE_BODY_281:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_281);

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
MOV (R0 ,INDD(FVARARRAY,38));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL298);
JUMP (FINISH_FVAR_LABEL298);
UNDEF_LABEL298:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL298:

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
MOV (R0 ,INDD(FVARARRAY,39));
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
MOV (R0 ,INDD(FVARARRAY,57));
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
MOV(FPARG(4),R0);
MOV (R0,SOB_VOID);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL292);
JUMP (FINISH_FVAR_LABEL292);
UNDEF_LABEL292:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL292:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_291);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_291:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL290);
JUMP (FINISH_FVAR_LABEL290);
UNDEF_LABEL290:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL290:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_289);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_289:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,46));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL288);
JUMP (FINISH_FVAR_LABEL288);
UNDEF_LABEL288:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL288:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_287);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_287:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE283);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT282);
L_IF3_ELSE283:

/*************tc-applic code starts here284***********/

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
MOV (R0 ,INDD(FVARARRAY,47));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL286);
JUMP (FINISH_FVAR_LABEL286);
UNDEF_LABEL286:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL286:


/*************tc-applic cont284***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_284);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover285);
ADD (R10 , IMM(1));
tc_applic_for_label285:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover285);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label285);
tc_applic_end_param_ranover285:
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
L_Error_cannot_tc_apply_non_closure_284:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT282:

/*************if3 code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_281:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_281:

/*************lambda-simple code ends here***********/


/*************tc-applic cont279***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_279);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover280);
ADD (R10 , IMM(1));
tc_applic_for_label280:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover280);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label280);
tc_applic_end_param_ranover280:
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
L_Error_cannot_tc_apply_non_closure_279:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_278:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_278:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,61),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_277);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_277:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_346);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_346:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_346);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_346);
EXIT_LOOP_COPY_346:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_346:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_346);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_346);
EXIT_LOOP_EXTEND_ENV_346:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_302));
JUMP(L_CLOSURE_EXIT_302);
L_CLOSURE_BODY_302:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_345);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_345:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_345);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_345);
EXIT_LOOP_ARGS_345:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_345:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_345);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_345);
EXIT_FIXING_STACK_345:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_345);
NO_OPTIONAL_ARGS_345:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_345:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_345);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_345);
EXIT_NIL_CASE_LOOP_345:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_345:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here303***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_344);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_344:
CMP(R4,1);
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
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_305));
JUMP(L_CLOSURE_EXIT_305);
L_CLOSURE_BODY_305:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_305);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_343);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_343:
CMP(R4,2);
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
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_310));
JUMP(L_CLOSURE_EXIT_310);
L_CLOSURE_BODY_310:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_310);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE312);

/*************tc-applic code starts here338***********/
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL340);
JUMP (FINISH_FVAR_LABEL340);
UNDEF_LABEL340:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL340:


/*************tc-applic cont338***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_338);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover339);
ADD (R10 , IMM(1));
tc_applic_for_label339:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover339);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label339);
tc_applic_end_param_ranover339:
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
L_Error_cannot_tc_apply_non_closure_338:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT311);
L_IF3_ELSE312:

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
JUMP_EQ (UNDEF_LABEL337);
JUMP (FINISH_FVAR_LABEL337);
UNDEF_LABEL337:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL337:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_336);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_336:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL335);
JUMP (FINISH_FVAR_LABEL335);
UNDEF_LABEL335:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL335:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_334);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_334:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE314);

/*************tc-applic code starts here325***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL333);
JUMP (FINISH_FVAR_LABEL333);
UNDEF_LABEL333:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL333:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_332);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_332:

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
JUMP_EQ (UNDEF_LABEL331);
JUMP (FINISH_FVAR_LABEL331);
UNDEF_LABEL331:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL331:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_330);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_330:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL329);
JUMP (FINISH_FVAR_LABEL329);
UNDEF_LABEL329:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL329:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_328);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_328:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,40));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL327);
JUMP (FINISH_FVAR_LABEL327);
UNDEF_LABEL327:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL327:


/*************tc-applic cont325***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_325);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover326);
ADD (R10 , IMM(1));
tc_applic_for_label326:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover326);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label326);
tc_applic_end_param_ranover326:
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
L_Error_cannot_tc_apply_non_closure_325:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT313);
L_IF3_ELSE314:

/*************tc-applic code starts here315***********/

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
JUMP_EQ (UNDEF_LABEL324);
JUMP (FINISH_FVAR_LABEL324);
UNDEF_LABEL324:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL324:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_323);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_323:

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
JUMP_NE(L_Error_cannot_apply_non_closure_322);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_322:

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
JUMP_EQ (UNDEF_LABEL321);
JUMP (FINISH_FVAR_LABEL321);
UNDEF_LABEL321:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL321:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_320);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_320:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL319);
JUMP (FINISH_FVAR_LABEL319);
UNDEF_LABEL319:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL319:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_318);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_318:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,40));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL317);
JUMP (FINISH_FVAR_LABEL317);
UNDEF_LABEL317:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL317:


/*************tc-applic cont315***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_315);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover316);
ADD (R10 , IMM(1));
tc_applic_for_label316:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover316);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label316);
tc_applic_end_param_ranover316:
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
L_Error_cannot_tc_apply_non_closure_315:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT313:

/*************if3 code ends here***********/

L_IF3_EXIT311:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_310:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_310:

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
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here306***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,61));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL308);
JUMP (FINISH_FVAR_LABEL308);
UNDEF_LABEL308:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL308:


/*************tc-applic cont306***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_306);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover307);
ADD (R10 , IMM(1));
tc_applic_for_label307:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover307);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label307);
tc_applic_end_param_ranover307:
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
L_Error_cannot_tc_apply_non_closure_306:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_305:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_305:

/*************lambda-simple code ends here***********/


/*************tc-applic cont303***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_303);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover304);
ADD (R10 , IMM(1));
tc_applic_for_label304:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover304);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label304);
tc_applic_end_param_ranover304:
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
L_Error_cannot_tc_apply_non_closure_303:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_302:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_302:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,65),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_301);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_301:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_230);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_230:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_230);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_230);
EXIT_LOOP_COPY_230:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_230:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_230);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_230);
EXIT_LOOP_EXTEND_ENV_230:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_180));
JUMP(L_CLOSURE_EXIT_180);
L_CLOSURE_BODY_180:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_229);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_229:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_229);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_229);
EXIT_LOOP_ARGS_229:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_229:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_229);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_229);
EXIT_FIXING_STACK_229:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_229);
NO_OPTIONAL_ARGS_229:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_229:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_229);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_229);
EXIT_NIL_CASE_LOOP_229:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_229:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here181***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_228);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_228:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_228);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_228);
EXIT_LOOP_COPY_228:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_228:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_228);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_228);
EXIT_LOOP_EXTEND_ENV_228:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_183));
JUMP(L_CLOSURE_EXIT_183);
L_CLOSURE_BODY_183:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_183);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_227);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_227:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_227);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_227);
EXIT_LOOP_COPY_227:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_227:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_227);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_227);
EXIT_LOOP_EXTEND_ENV_227:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_199));
JUMP(L_CLOSURE_EXIT_199);
L_CLOSURE_BODY_199:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_199);

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
JUMP_EQ (UNDEF_LABEL226);
JUMP (FINISH_FVAR_LABEL226);
UNDEF_LABEL226:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL226:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_225);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_225:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL224);
JUMP (FINISH_FVAR_LABEL224);
UNDEF_LABEL224:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL224:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_223);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_223:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE201);

/*************tc-applic code starts here214***********/

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
JUMP_EQ (UNDEF_LABEL222);
JUMP (FINISH_FVAR_LABEL222);
UNDEF_LABEL222:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL222:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_221);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_221:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL220);
JUMP (FINISH_FVAR_LABEL220);
UNDEF_LABEL220:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL220:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_219);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_219:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL218);
JUMP (FINISH_FVAR_LABEL218);
UNDEF_LABEL218:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL218:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_217);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_217:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,41));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL216);
JUMP (FINISH_FVAR_LABEL216);
UNDEF_LABEL216:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL216:


/*************tc-applic cont214***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_214);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover215);
ADD (R10 , IMM(1));
tc_applic_for_label215:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover215);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label215);
tc_applic_end_param_ranover215:
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
L_Error_cannot_tc_apply_non_closure_214:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT200);
L_IF3_ELSE201:

/*************tc-applic code starts here202***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL213);
JUMP (FINISH_FVAR_LABEL213);
UNDEF_LABEL213:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL213:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_212);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_212:

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
JUMP_EQ (UNDEF_LABEL211);
JUMP (FINISH_FVAR_LABEL211);
UNDEF_LABEL211:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL211:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_210);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_210:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL209);
JUMP (FINISH_FVAR_LABEL209);
UNDEF_LABEL209:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL209:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_208);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_208:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL207);
JUMP (FINISH_FVAR_LABEL207);
UNDEF_LABEL207:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL207:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_206);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_206:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,41));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL205);
JUMP (FINISH_FVAR_LABEL205);
UNDEF_LABEL205:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL205:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_204);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_204:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont202***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_202);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover203);
ADD (R10 , IMM(1));
tc_applic_for_label203:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover203);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label203);
tc_applic_end_param_ranover203:
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
L_Error_cannot_tc_apply_non_closure_202:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT200:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_199:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_199:

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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL196);
JUMP (FINISH_FVAR_LABEL196);
UNDEF_LABEL196:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL196:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_195);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_195:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE188);

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
JUMP_NE(L_Error_cannot_apply_non_closure_194);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_194:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT187);
L_IF3_ELSE188:

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
JUMP_EQ (UNDEF_LABEL193);
JUMP (FINISH_FVAR_LABEL193);
UNDEF_LABEL193:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL193:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_192);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_192:

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
JUMP_EQ (UNDEF_LABEL191);
JUMP (FINISH_FVAR_LABEL191);
UNDEF_LABEL191:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL191:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_190);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_190:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_189);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_189:

/*************applic code ends here***********/

L_IF3_EXIT187:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here184***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,61));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL186);
JUMP (FINISH_FVAR_LABEL186);
UNDEF_LABEL186:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL186:


/*************tc-applic cont184***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_184);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover185);
ADD (R10 , IMM(1));
tc_applic_for_label185:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover185);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label185);
tc_applic_end_param_ranover185:
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
L_Error_cannot_tc_apply_non_closure_184:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_183:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_183:

/*************lambda-simple code ends here***********/


/*************tc-applic cont181***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_181);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover182);
ADD (R10 , IMM(1));
tc_applic_for_label182:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover182);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label182);
tc_applic_end_param_ranover182:
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
L_Error_cannot_tc_apply_non_closure_181:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_180:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_180:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,58),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_179);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_179:

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
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_232));
JUMP(L_CLOSURE_EXIT_232);
L_CLOSURE_BODY_232:
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

/*************tc-applic code starts here233***********/
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
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_235));
JUMP(L_CLOSURE_EXIT_235);
L_CLOSURE_BODY_235:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_235);

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
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_240));
JUMP(L_CLOSURE_EXIT_240);
L_CLOSURE_BODY_240:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_240);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE242);

/*************tc-applic code starts here268***********/
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL270);
JUMP (FINISH_FVAR_LABEL270);
UNDEF_LABEL270:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL270:


/*************tc-applic cont268***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_268);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover269);
ADD (R10 , IMM(1));
tc_applic_for_label269:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover269);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label269);
tc_applic_end_param_ranover269:
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
L_Error_cannot_tc_apply_non_closure_268:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT241);
L_IF3_ELSE242:

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
JUMP_EQ (UNDEF_LABEL267);
JUMP (FINISH_FVAR_LABEL267);
UNDEF_LABEL267:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL267:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_266);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_266:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL265);
JUMP (FINISH_FVAR_LABEL265);
UNDEF_LABEL265:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL265:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_264);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_264:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE244);

/*************tc-applic code starts here255***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL263);
JUMP (FINISH_FVAR_LABEL263);
UNDEF_LABEL263:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL263:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_262);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_262:

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
JUMP_EQ (UNDEF_LABEL261);
JUMP (FINISH_FVAR_LABEL261);
UNDEF_LABEL261:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL261:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_260);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_260:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,45));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL257);
JUMP (FINISH_FVAR_LABEL257);
UNDEF_LABEL257:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL257:


/*************tc-applic cont255***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_255);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover256);
ADD (R10 , IMM(1));
tc_applic_for_label256:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover256);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label256);
tc_applic_end_param_ranover256:
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
L_Error_cannot_tc_apply_non_closure_255:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT243);
L_IF3_ELSE244:

/*************tc-applic code starts here245***********/

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
JUMP_EQ (UNDEF_LABEL254);
JUMP (FINISH_FVAR_LABEL254);
UNDEF_LABEL254:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL254:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_253);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_253:

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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL249);
JUMP (FINISH_FVAR_LABEL249);
UNDEF_LABEL249:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL249:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_248);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_248:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,45));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL247);
JUMP (FINISH_FVAR_LABEL247);
UNDEF_LABEL247:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL247:


/*************tc-applic cont245***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_245);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover246);
ADD (R10 , IMM(1));
tc_applic_for_label246:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover246);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label246);
tc_applic_end_param_ranover246:
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
L_Error_cannot_tc_apply_non_closure_245:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT243:

/*************if3 code ends here***********/

L_IF3_EXIT241:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_240:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_240:

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
JUMP_NE(L_Error_cannot_apply_non_closure_239);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_239:

/*************applic code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here236***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,61));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL238);
JUMP (FINISH_FVAR_LABEL238);
UNDEF_LABEL238:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL238:


/*************tc-applic cont236***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_236);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover237);
ADD (R10 , IMM(1));
tc_applic_for_label237:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover237);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label237);
tc_applic_end_param_ranover237:
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
L_Error_cannot_tc_apply_non_closure_236:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_235:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_235:

/*************lambda-simple code ends here***********/


/*************tc-applic cont233***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_233);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover234);
ADD (R10 , IMM(1));
tc_applic_for_label234:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover234);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label234);
tc_applic_end_param_ranover234:
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
L_Error_cannot_tc_apply_non_closure_233:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_232:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_232:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,59),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_231);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_231:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_137);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_137:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_137);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_137);
EXIT_LOOP_COPY_137:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_137:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_137);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_137);
EXIT_LOOP_EXTEND_ENV_137:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_87));
JUMP(L_CLOSURE_EXIT_87);
L_CLOSURE_BODY_87:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_136);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_136:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_136);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_136);
EXIT_LOOP_ARGS_136:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_136:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_136);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_136);
EXIT_FIXING_STACK_136:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_136);
NO_OPTIONAL_ARGS_136:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_136:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_136);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_136);
EXIT_NIL_CASE_LOOP_136:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_136:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here88***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_135);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_135:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_135);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_135);
EXIT_LOOP_COPY_135:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_135:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_135);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_135);
EXIT_LOOP_EXTEND_ENV_135:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_90));
JUMP(L_CLOSURE_EXIT_90);
L_CLOSURE_BODY_90:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_90);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_134);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_134:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_134);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_134);
EXIT_LOOP_COPY_134:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_134:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_134);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_134);
EXIT_LOOP_EXTEND_ENV_134:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_106));
JUMP(L_CLOSURE_EXIT_106);
L_CLOSURE_BODY_106:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_106);

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
JUMP_EQ (UNDEF_LABEL133);
JUMP (FINISH_FVAR_LABEL133);
UNDEF_LABEL133:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL133:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_132);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_132:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL131);
JUMP (FINISH_FVAR_LABEL131);
UNDEF_LABEL131:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL131:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_130);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_130:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE108);

/*************tc-applic code starts here121***********/

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
JUMP_EQ (UNDEF_LABEL129);
JUMP (FINISH_FVAR_LABEL129);
UNDEF_LABEL129:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL129:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_128);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_128:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL127);
JUMP (FINISH_FVAR_LABEL127);
UNDEF_LABEL127:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL127:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_126);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_126:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,44));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL123);
JUMP (FINISH_FVAR_LABEL123);
UNDEF_LABEL123:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL123:


/*************tc-applic cont121***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_121);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover122);
ADD (R10 , IMM(1));
tc_applic_for_label122:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover122);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label122);
tc_applic_end_param_ranover122:
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
L_Error_cannot_tc_apply_non_closure_121:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT107);
L_IF3_ELSE108:

/*************tc-applic code starts here109***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL120);
JUMP (FINISH_FVAR_LABEL120);
UNDEF_LABEL120:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL120:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_119);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_119:

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
JUMP_EQ (UNDEF_LABEL118);
JUMP (FINISH_FVAR_LABEL118);
UNDEF_LABEL118:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL118:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_117);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_117:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL116);
JUMP (FINISH_FVAR_LABEL116);
UNDEF_LABEL116:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL116:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_115);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_115:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL114);
JUMP (FINISH_FVAR_LABEL114);
UNDEF_LABEL114:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL114:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_113);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_113:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,44));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL112);
JUMP (FINISH_FVAR_LABEL112);
UNDEF_LABEL112:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL112:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_111);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_111:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont109***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_109);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover110);
ADD (R10 , IMM(1));
tc_applic_for_label110:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover110);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label110);
tc_applic_end_param_ranover110:
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
L_Error_cannot_tc_apply_non_closure_109:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT107:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_106:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_106:

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
JUMP_EQ (UNDEF_LABEL105);
JUMP (FINISH_FVAR_LABEL105);
UNDEF_LABEL105:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL105:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_104);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_104:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL103);
JUMP (FINISH_FVAR_LABEL103);
UNDEF_LABEL103:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL103:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_102);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_102:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE95);

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
JUMP_NE(L_Error_cannot_apply_non_closure_101);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_101:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT94);
L_IF3_ELSE95:

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

/*************tc-applic code starts here91***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,61));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL93);
JUMP (FINISH_FVAR_LABEL93);
UNDEF_LABEL93:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL93:


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

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_90:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_90:

/*************lambda-simple code ends here***********/


/*************tc-applic cont88***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_88);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover89);
ADD (R10 , IMM(1));
tc_applic_for_label89:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover89);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label89);
tc_applic_end_param_ranover89:
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
L_Error_cannot_tc_apply_non_closure_88:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_87:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_87:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,60),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_86);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_86:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_178);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_178:
CMP(R4,0);
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
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_139));
JUMP(L_CLOSURE_EXIT_139);
L_CLOSURE_BODY_139:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_177);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_177:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_177);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_177);
EXIT_LOOP_ARGS_177:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_177:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_177);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_177);
EXIT_FIXING_STACK_177:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_177);
NO_OPTIONAL_ARGS_177:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_177:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_177);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_177);
EXIT_NIL_CASE_LOOP_177:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_177:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here140***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_176);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_176:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_176);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_176);
EXIT_LOOP_COPY_176:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_176:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_176);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_176);
EXIT_LOOP_EXTEND_ENV_176:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_142));
JUMP(L_CLOSURE_EXIT_142);
L_CLOSURE_BODY_142:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_142);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_175);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_175:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_175);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_175);
EXIT_LOOP_COPY_175:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_175:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_175);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_175);
EXIT_LOOP_EXTEND_ENV_175:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_150));
JUMP(L_CLOSURE_EXIT_150);
L_CLOSURE_BODY_150:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_150);

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE152);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT151);
L_IF3_ELSE152:

/*************tc-applic code starts here153***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
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

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE156);

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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL166);
JUMP (FINISH_FVAR_LABEL166);
UNDEF_LABEL166:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL166:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_165);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_165:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL164);
JUMP (FINISH_FVAR_LABEL164);
UNDEF_LABEL164:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL164:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_163);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_163:

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
JUMP_EQ (UNDEF_LABEL162);
JUMP (FINISH_FVAR_LABEL162);
UNDEF_LABEL162:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL162:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_161);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_161:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL160);
JUMP (FINISH_FVAR_LABEL160);
UNDEF_LABEL160:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL160:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_159);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_159:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,42));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL158);
JUMP (FINISH_FVAR_LABEL158);
UNDEF_LABEL158:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL158:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_157);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_157:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT155);
L_IF3_ELSE156:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT155:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont153***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_153);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover154);
ADD (R10 , IMM(1));
tc_applic_for_label154:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover154);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label154);
tc_applic_end_param_ranover154:
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
L_Error_cannot_tc_apply_non_closure_153:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT151:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_150:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_150:

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
JUMP_EQ (UNDEF_LABEL149);
JUMP (FINISH_FVAR_LABEL149);
UNDEF_LABEL149:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL149:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_148);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_148:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL147);
JUMP (FINISH_FVAR_LABEL147);
UNDEF_LABEL147:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL147:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_146);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_146:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE144);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT143);
L_IF3_ELSE144:

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

L_IF3_EXIT143:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_142:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_142:

/*************lambda-simple code ends here***********/


/*************tc-applic cont140***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_140);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover141);
ADD (R10 , IMM(1));
tc_applic_for_label141:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover141);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label141);
tc_applic_end_param_ranover141:
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
L_Error_cannot_tc_apply_non_closure_140:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_139:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_139:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,62),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_138);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_138:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_44);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_44:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_44);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_44);
EXIT_LOOP_COPY_44:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_44:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_44);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_44);
EXIT_LOOP_EXTEND_ENV_44:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5));
JUMP(L_CLOSURE_EXIT_5);
L_CLOSURE_BODY_5:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_43);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_43:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_43);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_43);
EXIT_LOOP_ARGS_43:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_43:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_43);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_43);
EXIT_FIXING_STACK_43:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_43);
NO_OPTIONAL_ARGS_43:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_43:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_43);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_43);
EXIT_NIL_CASE_LOOP_43:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_43:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here6***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_42);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_42:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_42);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_42);
EXIT_LOOP_COPY_42:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_42:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_42);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_42);
EXIT_LOOP_EXTEND_ENV_42:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_8));
JUMP(L_CLOSURE_EXIT_8);
L_CLOSURE_BODY_8:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_8);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_41);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_41:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_41);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_41);
EXIT_LOOP_COPY_41:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_41:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_41);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_41);
EXIT_LOOP_EXTEND_ENV_41:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_16));
JUMP(L_CLOSURE_EXIT_16);
L_CLOSURE_BODY_16:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_16);

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
JUMP_EQ (UNDEF_LABEL40);
JUMP (FINISH_FVAR_LABEL40);
UNDEF_LABEL40:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL40:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_39);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_39:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL38);
JUMP (FINISH_FVAR_LABEL38);
UNDEF_LABEL38:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL38:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_37);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_37:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE18);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT17);
L_IF3_ELSE18:

/*************tc-applic code starts here19***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL36);
JUMP (FINISH_FVAR_LABEL36);
UNDEF_LABEL36:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL36:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_35);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_35:

/*************applic code ends here***********/

PUSH(R0);

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE22);

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
JUMP_EQ (UNDEF_LABEL34);
JUMP (FINISH_FVAR_LABEL34);
UNDEF_LABEL34:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL34:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_33);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_33:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL32);
JUMP (FINISH_FVAR_LABEL32);
UNDEF_LABEL32:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL32:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_31);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_31:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL30);
JUMP (FINISH_FVAR_LABEL30);
UNDEF_LABEL30:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL30:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_29);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_29:

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
JUMP_EQ (UNDEF_LABEL28);
JUMP (FINISH_FVAR_LABEL28);
UNDEF_LABEL28:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL28:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_27);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_27:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL26);
JUMP (FINISH_FVAR_LABEL26);
UNDEF_LABEL26:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL26:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_25);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_25:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,43));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL24);
JUMP (FINISH_FVAR_LABEL24);
UNDEF_LABEL24:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL24:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_23);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_23:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT21);
L_IF3_ELSE22:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT21:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont19***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_19);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover20);
ADD (R10 , IMM(1));
tc_applic_for_label20:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover20);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label20);
tc_applic_end_param_ranover20:
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
L_Error_cannot_tc_apply_non_closure_19:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT17:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_16:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_16:

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
JUMP_EQ (UNDEF_LABEL15);
JUMP (FINISH_FVAR_LABEL15);
UNDEF_LABEL15:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL15:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_14);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_14:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL13);
JUMP (FINISH_FVAR_LABEL13);
UNDEF_LABEL13:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL13:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_12);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_12:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE10);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT9);
L_IF3_ELSE10:

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
JUMP_NE(L_Error_cannot_apply_non_closure_11);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_11:

/*************applic code ends here***********/

L_IF3_EXIT9:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_8:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_8:

/*************lambda-simple code ends here***********/


/*************tc-applic cont6***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_6);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover7);
ADD (R10 , IMM(1));
tc_applic_for_label7:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover7);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label7);
tc_applic_end_param_ranover7:
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
L_Error_cannot_tc_apply_non_closure_6:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,63),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_4);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_4:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_85);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_85:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_85);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_85);
EXIT_LOOP_COPY_85:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_85:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_85);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_85);
EXIT_LOOP_EXTEND_ENV_85:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_46));
JUMP(L_CLOSURE_EXIT_46);
L_CLOSURE_BODY_46:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_84);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_84:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_84);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_84);
EXIT_LOOP_ARGS_84:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_84:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_84);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_84);
EXIT_FIXING_STACK_84:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_84);
NO_OPTIONAL_ARGS_84:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_84:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_84);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_84);
EXIT_NIL_CASE_LOOP_84:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_84:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here47***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_83);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_83:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_83);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_83);
EXIT_LOOP_COPY_83:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_83:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_83);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_83);
EXIT_LOOP_EXTEND_ENV_83:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_49));
JUMP(L_CLOSURE_EXIT_49);
L_CLOSURE_BODY_49:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_49);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_82);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_82:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_82);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_82);
EXIT_LOOP_COPY_82:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_82:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_82);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_82);
EXIT_LOOP_EXTEND_ENV_82:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
INFO
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_57));
JUMP(L_CLOSURE_EXIT_57);
L_CLOSURE_BODY_57:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_57);

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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE59);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT58);
L_IF3_ELSE59:

/*************tc-applic code starts here60***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
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

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE63);

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
MOV (R0 ,INDD(FVARARRAY,34));
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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL67);
JUMP (FINISH_FVAR_LABEL67);
UNDEF_LABEL67:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL67:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_66);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_66:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,46));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL65);
JUMP (FINISH_FVAR_LABEL65);
UNDEF_LABEL65:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL65:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_64);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_64:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT62);
L_IF3_ELSE63:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT62:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont60***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_60);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover61);
ADD (R10 , IMM(1));
tc_applic_for_label61:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover61);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label61);
tc_applic_end_param_ranover61:
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
L_Error_cannot_tc_apply_non_closure_60:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT58:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_57:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_57:

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
JUMP_EQ (UNDEF_LABEL56);
JUMP (FINISH_FVAR_LABEL56);
UNDEF_LABEL56:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL56:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_55);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_55:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL54);
JUMP (FINISH_FVAR_LABEL54);
UNDEF_LABEL54:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL54:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_53);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_53:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE51);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT50);
L_IF3_ELSE51:

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
JUMP_NE(L_Error_cannot_apply_non_closure_52);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_52:

/*************applic code ends here***********/

L_IF3_EXIT50:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_49:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_49:

/*************lambda-simple code ends here***********/


/*************tc-applic cont47***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_47);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover48);
ADD (R10 , IMM(1));
tc_applic_for_label48:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover48);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label48);
tc_applic_end_param_ranover48:
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
L_Error_cannot_tc_apply_non_closure_47:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_46:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_46:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,64),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_45);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_45:

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,6));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,65));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL3);
JUMP (FINISH_FVAR_LABEL3);
UNDEF_LABEL3:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL3:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_2);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_2:

/*************applic code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_1);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_1:


STOP_MACHINE;
return 0;
}