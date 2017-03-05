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
PUSH (777);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,6) , R0);
PUSH (4);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,7) , R0);

/*************init Const-Table ends here***********/

/*************symbol table starts: ***********/
MOV (R7,SOB_NIL);
MOV (SYMBOLTABLE,R7);

/*************symbol table ends: ***********/

/*************init Fvar-Table start here***********/
PUSH(IMM(67));
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
MOV(INDD(FVARARRAY,66) , 0XDEF);

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
 INFO 

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
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(p22));
MOV(INDD(FVARARRAY,37),R0);
JUMP (p_);
p22:
PUSH(FP);
MOV(FP,SP);
SHOW("", FPARG(2));
POP(FP);
RETURN;
p2232:
SHOW("error p ",R0);
HALT;
p_:

/*************RS_append_bin  ends***********/

/*************RS_remainder starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_remainder_body));
MOV(INDD(FVARARRAY,38),R0);
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
MOV(INDD(FVARARRAY,39),R0);
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
MOV(INDD(FVARARRAY,40),R0);
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
MOV(INDD(FVARARRAY,41),R0);
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
MOV(INDD(FVARARRAY,42),R0);
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
MOV(INDD(FVARARRAY,43),R0);
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
MOV(INDD(FVARARRAY,44),R0);
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
MOV(INDD(FVARARRAY,46),R0);
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
MOV(INDD(FVARARRAY,45),R0);
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
MOV(INDD(FVARARRAY,47),R0);
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
MOV(INDD(FVARARRAY,48),R0);
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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_583);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_583:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_583);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_583);
EXIT_LOOP_COPY_583:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_583:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_583);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_583);
EXIT_LOOP_EXTEND_ENV_583:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_565));
JUMP(L_CLOSURE_EXIT_565);
L_CLOSURE_BODY_565:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_565);

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
JUMP_EQ (UNDEF_LABEL582);
JUMP (FINISH_FVAR_LABEL582);
UNDEF_LABEL582:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL582:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_581);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_581:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE567);

/*************tc-applic code starts here578***********/
PUSH (IMM(0));

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,36));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL580);
JUMP (FINISH_FVAR_LABEL580);
UNDEF_LABEL580:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL580:


/*************tc-applic cont578***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_578);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover579);
ADD (R10 , IMM(1));
tc_applic_for_label579:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover579);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label579);
tc_applic_end_param_ranover579:
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
L_Error_cannot_tc_apply_non_closure_578:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT566);
L_IF3_ELSE567:

/*************tc-applic code starts here568***********/

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
JUMP_EQ (UNDEF_LABEL577);
JUMP (FINISH_FVAR_LABEL577);
UNDEF_LABEL577:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL577:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_576);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_576:

/*************applic code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,49));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL575);
JUMP (FINISH_FVAR_LABEL575);
UNDEF_LABEL575:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL575:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_574);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_574:

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
JUMP_EQ (UNDEF_LABEL573);
JUMP (FINISH_FVAR_LABEL573);
UNDEF_LABEL573:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL573:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_572);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_572:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

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
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,2));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL570);
JUMP (FINISH_FVAR_LABEL570);
UNDEF_LABEL570:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL570:


/*************tc-applic cont568***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_568);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover569);
ADD (R10 , IMM(1));
tc_applic_for_label569:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover569);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label569);
tc_applic_end_param_ranover569:
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
L_Error_cannot_tc_apply_non_closure_568:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT566:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_565:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_565:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,49),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_564);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_564:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_599);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_599:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_599);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_599);
EXIT_LOOP_COPY_599:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_599:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_599);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_599);
EXIT_LOOP_EXTEND_ENV_599:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_585));
JUMP(L_CLOSURE_EXIT_585);
L_CLOSURE_BODY_585:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_585);

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
JUMP_EQ (UNDEF_LABEL598);
JUMP (FINISH_FVAR_LABEL598);
UNDEF_LABEL598:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL598:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_597);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_597:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE587);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT586);
L_IF3_ELSE587:

/*************tc-applic code starts here588***********/

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
JUMP_EQ (UNDEF_LABEL596);
JUMP (FINISH_FVAR_LABEL596);
UNDEF_LABEL596:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL596:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_595);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_595:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,2));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL594);
JUMP (FINISH_FVAR_LABEL594);
UNDEF_LABEL594:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL594:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_593);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_593:

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
JUMP_EQ (UNDEF_LABEL592);
JUMP (FINISH_FVAR_LABEL592);
UNDEF_LABEL592:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL592:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_591);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_591:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,52));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL590);
JUMP (FINISH_FVAR_LABEL590);
UNDEF_LABEL590:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL590:


/*************tc-applic cont588***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_588);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover589);
ADD (R10 , IMM(1));
tc_applic_for_label589:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover589);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label589);
tc_applic_end_param_ranover589:
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
L_Error_cannot_tc_apply_non_closure_588:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT586:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_585:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_585:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,52),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_584);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_584:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_541);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_541:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_541);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_541);
EXIT_LOOP_COPY_541:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_541:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_541);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_541);
EXIT_LOOP_EXTEND_ENV_541:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_528));
JUMP(L_CLOSURE_EXIT_528);
L_CLOSURE_BODY_528:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_528);

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
JUMP_EQ (UNDEF_LABEL540);
JUMP (FINISH_FVAR_LABEL540);
UNDEF_LABEL540:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL540:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_539);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_539:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE530);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT529);
L_IF3_ELSE530:

/*************tc-applic code starts here531***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 2));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL538);
JUMP (FINISH_FVAR_LABEL538);
UNDEF_LABEL538:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL538:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_537);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_537:

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
JUMP_EQ (UNDEF_LABEL536);
JUMP (FINISH_FVAR_LABEL536);
UNDEF_LABEL536:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL536:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_535);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_535:

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

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(3);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,50));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL533);
JUMP (FINISH_FVAR_LABEL533);
UNDEF_LABEL533:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL533:


/*************tc-applic cont531***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_531);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover532);
ADD (R10 , IMM(1));
tc_applic_for_label532:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover532);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label532);
tc_applic_end_param_ranover532:
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
L_Error_cannot_tc_apply_non_closure_531:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT529:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_528:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_528:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,50),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_527);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_527:

/*************'def' code starts here***********/

/*************lambda-opt code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_563);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_563:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_563);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_563);
EXIT_LOOP_COPY_563:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_563:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_563);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_563);
EXIT_LOOP_EXTEND_ENV_563:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_543));
JUMP(L_CLOSURE_EXIT_543);
L_CLOSURE_BODY_543:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 1);
JUMP_EQ(NO_OPTIONAL_ARGS_562);
MOV (R8,FPARG(1)-1- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_562:
CMP (R4 ,0);
JUMP_EQ(EXIT_LOOP_ARGS_562);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_562);
EXIT_LOOP_ARGS_562:
MOV (FPARG(2 + 1), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 2);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_562:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_562);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_562);
EXIT_FIXING_STACK_562:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_562);
NO_OPTIONAL_ARGS_562:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_562:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_562);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_562);
EXIT_NIL_CASE_LOOP_562:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_562:

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
JUMP_EQ (UNDEF_LABEL561);
JUMP (FINISH_FVAR_LABEL561);
UNDEF_LABEL561:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL561:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_560);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_560:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE545);

/*************tc-applic code starts here557***********/
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
JUMP_EQ (UNDEF_LABEL559);
JUMP (FINISH_FVAR_LABEL559);
UNDEF_LABEL559:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL559:


/*************tc-applic cont557***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_557);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover558);
ADD (R10 , IMM(1));
tc_applic_for_label558:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover558);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label558);
tc_applic_end_param_ranover558:
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
L_Error_cannot_tc_apply_non_closure_557:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT544);
L_IF3_ELSE545:

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
JUMP_EQ (UNDEF_LABEL556);
JUMP (FINISH_FVAR_LABEL556);
UNDEF_LABEL556:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL556:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_555);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_555:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,6));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL554);
JUMP (FINISH_FVAR_LABEL554);
UNDEF_LABEL554:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL554:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_553);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_553:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE547);

/*************tc-applic code starts here548***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL552);
JUMP (FINISH_FVAR_LABEL552);
UNDEF_LABEL552:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL552:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_551);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_551:

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
JUMP_EQ (UNDEF_LABEL550);
JUMP (FINISH_FVAR_LABEL550);
UNDEF_LABEL550:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL550:


/*************tc-applic cont548***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_548);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover549);
ADD (R10 , IMM(1));
tc_applic_for_label549:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover549);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label549);
tc_applic_end_param_ranover549:
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
L_Error_cannot_tc_apply_non_closure_548:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT546);
L_IF3_ELSE547:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT546:

/*************if3 code ends here***********/

L_IF3_EXIT544:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_543:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_543:

/*************lambda-opt code ends here***********/
MOV(INDD(FVARARRAY,51),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_542);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_542:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_503);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_503:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_503);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_503);
EXIT_LOOP_COPY_503:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_503:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_503);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_503);
EXIT_LOOP_EXTEND_ENV_503:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_453));
JUMP(L_CLOSURE_EXIT_453);
L_CLOSURE_BODY_453:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_453);

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
JUMP_EQ (UNDEF_LABEL502);
JUMP (FINISH_FVAR_LABEL502);
UNDEF_LABEL502:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL502:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_501);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_501:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE455);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT454);
L_IF3_ELSE455:

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
JUMP_EQ (UNDEF_LABEL500);
JUMP (FINISH_FVAR_LABEL500);
UNDEF_LABEL500:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL500:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_499);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_499:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE457);

/*************tc-applic code starts here492***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL498);
JUMP (FINISH_FVAR_LABEL498);
UNDEF_LABEL498:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL498:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_497);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_497:

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
JUMP_EQ (UNDEF_LABEL496);
JUMP (FINISH_FVAR_LABEL496);
UNDEF_LABEL496:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL496:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_495);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_495:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,54));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL494);
JUMP (FINISH_FVAR_LABEL494);
UNDEF_LABEL494:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL494:


/*************tc-applic cont492***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_492);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover493);
ADD (R10 , IMM(1));
tc_applic_for_label493:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover493);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label493);
tc_applic_end_param_ranover493:
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
L_Error_cannot_tc_apply_non_closure_492:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT456);
L_IF3_ELSE457:

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
JUMP_EQ (UNDEF_LABEL491);
JUMP (FINISH_FVAR_LABEL491);
UNDEF_LABEL491:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL491:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_490);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_490:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL489);
JUMP (FINISH_FVAR_LABEL489);
UNDEF_LABEL489:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL489:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_488);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_488:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,17));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL487);
JUMP (FINISH_FVAR_LABEL487);
UNDEF_LABEL487:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL487:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_486);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_486:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE481);

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
JUMP_EQ (UNDEF_LABEL485);
JUMP (FINISH_FVAR_LABEL485);
UNDEF_LABEL485:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL485:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_484);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_484:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL483);
JUMP (FINISH_FVAR_LABEL483);
UNDEF_LABEL483:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL483:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_482);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_482:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT480);
L_IF3_ELSE481:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT480:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE459);

/*************tc-applic code starts here475***********/

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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,54));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL477);
JUMP (FINISH_FVAR_LABEL477);
UNDEF_LABEL477:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL477:


/*************tc-applic cont475***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_475);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover476);
ADD (R10 , IMM(1));
tc_applic_for_label476:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover476);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label476);
tc_applic_end_param_ranover476:
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
L_Error_cannot_tc_apply_non_closure_475:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT458);
L_IF3_ELSE459:

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
JUMP_EQ (UNDEF_LABEL474);
JUMP (FINISH_FVAR_LABEL474);
UNDEF_LABEL474:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL474:

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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL472);
JUMP (FINISH_FVAR_LABEL472);
UNDEF_LABEL472:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL472:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_471);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_471:

/*************applic code ends here***********/

/*************tc-applic code starts here460***********/

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
JUMP_EQ (UNDEF_LABEL470);
JUMP (FINISH_FVAR_LABEL470);
UNDEF_LABEL470:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL470:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_469);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_469:

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
MOV (R0 ,INDD(FVARARRAY,52));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL468);
JUMP (FINISH_FVAR_LABEL468);
UNDEF_LABEL468:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL468:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_467);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_467:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL466);
JUMP (FINISH_FVAR_LABEL466);
UNDEF_LABEL466:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL466:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_465);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_465:

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
JUMP_EQ (UNDEF_LABEL464);
JUMP (FINISH_FVAR_LABEL464);
UNDEF_LABEL464:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL464:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_463);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_463:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,54));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL462);
JUMP (FINISH_FVAR_LABEL462);
UNDEF_LABEL462:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL462:


/*************tc-applic cont460***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_460);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover461);
ADD (R10 , IMM(1));
tc_applic_for_label461:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover461);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label461);
tc_applic_end_param_ranover461:
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
L_Error_cannot_tc_apply_non_closure_460:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/

L_IF3_EXIT458:

/*************if3 code ends here***********/

L_IF3_EXIT456:

/*************if3 code ends here***********/

L_IF3_EXIT454:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_453:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_453:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,54),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_452);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_452:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_526);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_526:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_526);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_526);
EXIT_LOOP_COPY_526:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_526:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_526);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_526);
EXIT_LOOP_EXTEND_ENV_526:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_505));
JUMP(L_CLOSURE_EXIT_505);
L_CLOSURE_BODY_505:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_525);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_525:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_525);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_525);
EXIT_LOOP_ARGS_525:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_525:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_525);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_525);
EXIT_FIXING_STACK_525:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_525);
NO_OPTIONAL_ARGS_525:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_525:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_525);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_525);
EXIT_NIL_CASE_LOOP_525:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_525:

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
JUMP_EQ (UNDEF_LABEL524);
JUMP (FINISH_FVAR_LABEL524);
UNDEF_LABEL524:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL524:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_523);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_523:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE507);

/*************tc-applic code starts here520***********/
PUSH (IMM(0));

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,36));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL522);
JUMP (FINISH_FVAR_LABEL522);
UNDEF_LABEL522:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL522:


/*************tc-applic cont520***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_520);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover521);
ADD (R10 , IMM(1));
tc_applic_for_label521:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover521);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label521);
tc_applic_end_param_ranover521:
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
L_Error_cannot_tc_apply_non_closure_520:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT506);
L_IF3_ELSE507:

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
JUMP_EQ (UNDEF_LABEL519);
JUMP (FINISH_FVAR_LABEL519);
UNDEF_LABEL519:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL519:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_518);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_518:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL517);
JUMP (FINISH_FVAR_LABEL517);
UNDEF_LABEL517:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL517:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_516);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_516:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE509);

/*************tc-applic code starts here513***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL515);
JUMP (FINISH_FVAR_LABEL515);
UNDEF_LABEL515:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL515:


/*************tc-applic cont513***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_513);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover514);
ADD (R10 , IMM(1));
tc_applic_for_label514:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover514);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label514);
tc_applic_end_param_ranover514:
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
L_Error_cannot_tc_apply_non_closure_513:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT508);
L_IF3_ELSE509:

/*************tc-applic code starts here510***********/
MOV (R0 ,INDD(CONSTARRAY,0));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,54));
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

L_IF3_EXIT508:

/*************if3 code ends here***********/

L_IF3_EXIT506:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_505:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_505:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,53),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_504);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_504:

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
MOV (R0 ,INDD(FVARARRAY,56));
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
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_438:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,55),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_437);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_437:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_444));
JUMP(L_CLOSURE_EXIT_444);
L_CLOSURE_BODY_444:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_444);

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
JUMP_EQ (UNDEF_LABEL450);
JUMP (FINISH_FVAR_LABEL450);
UNDEF_LABEL450:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL450:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_449);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_449:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT445);

/*************tc-applic code starts here446***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL448);
JUMP (FINISH_FVAR_LABEL448);
UNDEF_LABEL448:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL448:


/*************tc-applic cont446***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_446);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover447);
ADD (R10 , IMM(1));
tc_applic_for_label447:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover447);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label447);
tc_applic_end_param_ranover447:
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
L_Error_cannot_tc_apply_non_closure_446:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT445);
L_OR_EXIT445:

/*************or code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_444:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_444:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,56),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_443);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_443:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_424);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_424:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_424);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_424);
EXIT_LOOP_COPY_424:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_424:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_424);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_424);
EXIT_LOOP_EXTEND_ENV_424:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_351));
JUMP(L_CLOSURE_EXIT_351);
L_CLOSURE_BODY_351:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_351);

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
JUMP_EQ (UNDEF_LABEL423);
JUMP (FINISH_FVAR_LABEL423);
UNDEF_LABEL423:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL423:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_422);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_422:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE419);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,7));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL421);
JUMP (FINISH_FVAR_LABEL421);
UNDEF_LABEL421:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL421:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_420);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_420:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT418);
L_IF3_ELSE419:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT418:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT399);

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
JUMP_EQ (UNDEF_LABEL417);
JUMP (FINISH_FVAR_LABEL417);
UNDEF_LABEL417:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL417:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_416);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_416:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE413);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL415);
JUMP (FINISH_FVAR_LABEL415);
UNDEF_LABEL415:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL415:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_414);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_414:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT412);
L_IF3_ELSE413:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT412:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT399);

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
JUMP_EQ (UNDEF_LABEL411);
JUMP (FINISH_FVAR_LABEL411);
UNDEF_LABEL411:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL411:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_410);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_410:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE407);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,6));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL409);
JUMP (FINISH_FVAR_LABEL409);
UNDEF_LABEL409:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL409:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_408);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_408:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT406);
L_IF3_ELSE407:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT406:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT399);

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
JUMP_EQ (UNDEF_LABEL405);
JUMP (FINISH_FVAR_LABEL405);
UNDEF_LABEL405:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL405:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_404);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_404:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE401);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,11));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL403);
JUMP (FINISH_FVAR_LABEL403);
UNDEF_LABEL403:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL403:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_402);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_402:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT400);
L_IF3_ELSE401:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT400:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT399);
L_OR_EXIT399:

/*************or code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE353);

/*************tc-applic code starts here396***********/

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
JUMP_EQ (UNDEF_LABEL398);
JUMP (FINISH_FVAR_LABEL398);
UNDEF_LABEL398:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL398:


/*************tc-applic cont396***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_396);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover397);
ADD (R10 , IMM(1));
tc_applic_for_label397:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover397);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label397);
tc_applic_end_param_ranover397:
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
L_Error_cannot_tc_apply_non_closure_396:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT352);
L_IF3_ELSE353:

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
JUMP_EQ (UNDEF_LABEL395);
JUMP (FINISH_FVAR_LABEL395);
UNDEF_LABEL395:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL395:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_394);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_394:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE391);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL393);
JUMP (FINISH_FVAR_LABEL393);
UNDEF_LABEL393:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL393:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_392);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_392:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT390);
L_IF3_ELSE391:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT390:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT359);

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
JUMP_EQ (UNDEF_LABEL389);
JUMP (FINISH_FVAR_LABEL389);
UNDEF_LABEL389:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL389:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_388);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_388:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE385);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,14));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL387);
JUMP (FINISH_FVAR_LABEL387);
UNDEF_LABEL387:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL387:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_386);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_386:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT384);
L_IF3_ELSE385:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT384:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT359);

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
JUMP_EQ (UNDEF_LABEL383);
JUMP (FINISH_FVAR_LABEL383);
UNDEF_LABEL383:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL383:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_382);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_382:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE379);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,5));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL381);
JUMP (FINISH_FVAR_LABEL381);
UNDEF_LABEL381:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL381:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_380);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_380:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT378);
L_IF3_ELSE379:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT378:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT359);

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
JUMP_EQ (UNDEF_LABEL377);
JUMP (FINISH_FVAR_LABEL377);
UNDEF_LABEL377:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL377:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_376);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_376:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE373);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,10));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL375);
JUMP (FINISH_FVAR_LABEL375);
UNDEF_LABEL375:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL375:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_374);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_374:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT372);
L_IF3_ELSE373:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT372:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT359);

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
JUMP_EQ (UNDEF_LABEL371);
JUMP (FINISH_FVAR_LABEL371);
UNDEF_LABEL371:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL371:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_370);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_370:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE367);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,12));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL369);
JUMP (FINISH_FVAR_LABEL369);
UNDEF_LABEL369:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL369:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_368);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_368:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT366);
L_IF3_ELSE367:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT366:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT359);

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
JUMP_EQ (UNDEF_LABEL365);
JUMP (FINISH_FVAR_LABEL365);
UNDEF_LABEL365:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL365:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_364);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_364:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE361);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL363);
JUMP (FINISH_FVAR_LABEL363);
UNDEF_LABEL363:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL363:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_362);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_362:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT360);
L_IF3_ELSE361:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT360:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT359);
L_OR_EXIT359:

/*************or code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE355);

/*************tc-applic code starts here356***********/

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
JUMP_EQ (UNDEF_LABEL358);
JUMP (FINISH_FVAR_LABEL358);
UNDEF_LABEL358:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL358:


/*************tc-applic cont356***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_356);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover357);
ADD (R10 , IMM(1));
tc_applic_for_label357:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover357);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label357);
tc_applic_end_param_ranover357:
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
L_Error_cannot_tc_apply_non_closure_356:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT354);
L_IF3_ELSE355:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT354:

/*************if3 code ends here***********/

L_IF3_EXIT352:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_351:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_351:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,57),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_350);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_350:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_436);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_436:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_436);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_436);
EXIT_LOOP_COPY_436:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_436:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_436);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_436);
EXIT_LOOP_EXTEND_ENV_436:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_426));
JUMP(L_CLOSURE_EXIT_426);
L_CLOSURE_BODY_426:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_426);

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
MOV (R0 ,INDD(FVARARRAY,57));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL435);
JUMP (FINISH_FVAR_LABEL435);
UNDEF_LABEL435:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL435:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_434);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_434:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE428);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT427);
L_IF3_ELSE428:

/*************tc-applic code starts here429***********/

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
MOV (R0 ,INDD(FVARARRAY,38));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL433);
JUMP (FINISH_FVAR_LABEL433);
UNDEF_LABEL433:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL433:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_432);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_432:

/*************applic code ends here***********/

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,58));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL431);
JUMP (FINISH_FVAR_LABEL431);
UNDEF_LABEL431:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL431:


/*************tc-applic cont429***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_429);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover430);
ADD (R10 , IMM(1));
tc_applic_for_label430:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover430);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label430);
tc_applic_end_param_ranover430:
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
L_Error_cannot_tc_apply_non_closure_429:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT427:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_426:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_426:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,58),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_425);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_425:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_303);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_303:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_303);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_303);
EXIT_LOOP_COPY_303:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_303:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_303);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_303);
EXIT_LOOP_EXTEND_ENV_303:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_281));
JUMP(L_CLOSURE_EXIT_281);
L_CLOSURE_BODY_281:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_281);

/*************tc-applic code starts here282***********/
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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_302);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_302:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_302);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_302);
EXIT_LOOP_COPY_302:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_302:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_302);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_302);
EXIT_LOOP_EXTEND_ENV_302:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_284));
JUMP(L_CLOSURE_EXIT_284);
L_CLOSURE_BODY_284:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_284);

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
MOV (R0 ,INDD(FVARARRAY,39));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL301);
JUMP (FINISH_FVAR_LABEL301);
UNDEF_LABEL301:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL301:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_300);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_300:

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
MOV (R0 ,INDD(FVARARRAY,40));
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
MOV (R0 ,INDD(FVARARRAY,58));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL297);
JUMP (FINISH_FVAR_LABEL297);
UNDEF_LABEL297:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL297:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_296);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_296:

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
JUMP_EQ (UNDEF_LABEL295);
JUMP (FINISH_FVAR_LABEL295);
UNDEF_LABEL295:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL295:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_294);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_294:

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
JUMP_EQ (UNDEF_LABEL293);
JUMP (FINISH_FVAR_LABEL293);
UNDEF_LABEL293:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL293:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_292);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_292:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,47));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL291);
JUMP (FINISH_FVAR_LABEL291);
UNDEF_LABEL291:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL291:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_290);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_290:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE286);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT285);
L_IF3_ELSE286:

/*************tc-applic code starts here287***********/

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
MOV (R0 ,INDD(FVARARRAY,48));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL289);
JUMP (FINISH_FVAR_LABEL289);
UNDEF_LABEL289:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL289:


/*************tc-applic cont287***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_287);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover288);
ADD (R10 , IMM(1));
tc_applic_for_label288:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover288);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label288);
tc_applic_end_param_ranover288:
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
L_Error_cannot_tc_apply_non_closure_287:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT285:

/*************if3 code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_284:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_284:

/*************lambda-simple code ends here***********/


/*************tc-applic cont282***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_282);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover283);
ADD (R10 , IMM(1));
tc_applic_for_label283:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover283);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label283);
tc_applic_end_param_ranover283:
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
L_Error_cannot_tc_apply_non_closure_282:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_281:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_281:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,63),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_280);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_280:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_349);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_349:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_349);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_349);
EXIT_LOOP_COPY_349:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_349:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_349);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_349);
EXIT_LOOP_EXTEND_ENV_349:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_305));
JUMP(L_CLOSURE_EXIT_305);
L_CLOSURE_BODY_305:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_348);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_348:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_348);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_348);
EXIT_LOOP_ARGS_348:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_348:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_348);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_348);
EXIT_FIXING_STACK_348:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_348);
NO_OPTIONAL_ARGS_348:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_348:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_348);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_348);
EXIT_NIL_CASE_LOOP_348:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_348:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here306***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_347);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_347:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_347);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_347);
EXIT_LOOP_COPY_347:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_347:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_347);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_347);
EXIT_LOOP_EXTEND_ENV_347:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_308));
JUMP(L_CLOSURE_EXIT_308);
L_CLOSURE_BODY_308:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_308);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R14, R0)
PUSH (R14);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_346);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_346:
CMP(R4,2);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_313));
JUMP(L_CLOSURE_EXIT_313);
L_CLOSURE_BODY_313:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_313);

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
JUMP_EQ (UNDEF_LABEL345);
JUMP (FINISH_FVAR_LABEL345);
UNDEF_LABEL345:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL345:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_344);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_344:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE315);

/*************tc-applic code starts here341***********/
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL343);
JUMP (FINISH_FVAR_LABEL343);
UNDEF_LABEL343:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL343:


/*************tc-applic cont341***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_341);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover342);
ADD (R10 , IMM(1));
tc_applic_for_label342:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover342);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label342);
tc_applic_end_param_ranover342:
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
L_Error_cannot_tc_apply_non_closure_341:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT314);
L_IF3_ELSE315:

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE317);

/*************tc-applic code starts here328***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,41));
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

JUMP (L_IF3_EXIT316);
L_IF3_ELSE317:

/*************tc-applic code starts here318***********/

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
JUMP_EQ (UNDEF_LABEL327);
JUMP (FINISH_FVAR_LABEL327);
UNDEF_LABEL327:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL327:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_326);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_326:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, IND (R0));

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_325);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_325:

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

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL322);
JUMP (FINISH_FVAR_LABEL322);
UNDEF_LABEL322:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL322:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_321);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_321:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,41));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL320);
JUMP (FINISH_FVAR_LABEL320);
UNDEF_LABEL320:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL320:


/*************tc-applic cont318***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_318);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover319);
ADD (R10 , IMM(1));
tc_applic_for_label319:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover319);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label319);
tc_applic_end_param_ranover319:
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
L_Error_cannot_tc_apply_non_closure_318:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT316:

/*************if3 code ends here***********/

L_IF3_EXIT314:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_313:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_313:

/*************lambda-simple code ends here***********/
POP (R14);
MOV(IND(R14),R0);
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
MOV(R0, IND (R0));

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_312);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_312:

/*************applic code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here309***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,63));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL311);
JUMP (FINISH_FVAR_LABEL311);
UNDEF_LABEL311:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL311:


/*************tc-applic cont309***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_309);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover310);
ADD (R10 , IMM(1));
tc_applic_for_label310:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover310);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label310);
tc_applic_end_param_ranover310:
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
L_Error_cannot_tc_apply_non_closure_309:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_308:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_308:

/*************lambda-simple code ends here***********/


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
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_305:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_305:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,59),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_304);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_304:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_233);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_233:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_233);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_233);
EXIT_LOOP_COPY_233:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_233:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_233);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_233);
EXIT_LOOP_EXTEND_ENV_233:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_183));
JUMP(L_CLOSURE_EXIT_183);
L_CLOSURE_BODY_183:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_232);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_232:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_232);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_232);
EXIT_LOOP_ARGS_232:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_232:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_232);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_232);
EXIT_FIXING_STACK_232:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_232);
NO_OPTIONAL_ARGS_232:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_232:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_232);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_232);
EXIT_NIL_CASE_LOOP_232:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_232:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here184***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_231);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_231:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_231);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_231);
EXIT_LOOP_COPY_231:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_231:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_231);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_231);
EXIT_LOOP_EXTEND_ENV_231:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_186));
JUMP(L_CLOSURE_EXIT_186);
L_CLOSURE_BODY_186:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_186);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R14, R0)
PUSH (R14);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_230);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_230:
CMP(R4,2);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_202));
JUMP(L_CLOSURE_EXIT_202);
L_CLOSURE_BODY_202:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_202);

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
JUMP_EQ (UNDEF_LABEL229);
JUMP (FINISH_FVAR_LABEL229);
UNDEF_LABEL229:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL229:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_228);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_228:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL227);
JUMP (FINISH_FVAR_LABEL227);
UNDEF_LABEL227:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL227:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_226);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_226:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE204);

/*************tc-applic code starts here217***********/

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
JUMP_EQ (UNDEF_LABEL225);
JUMP (FINISH_FVAR_LABEL225);
UNDEF_LABEL225:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL225:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_224);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_224:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL223);
JUMP (FINISH_FVAR_LABEL223);
UNDEF_LABEL223:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL223:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_222);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_222:

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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,42));
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

JUMP (L_IF3_EXIT203);
L_IF3_ELSE204:

/*************tc-applic code starts here205***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,42));
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

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, IND (R0));


/*************tc-applic cont205***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_205);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover206);
ADD (R10 , IMM(1));
tc_applic_for_label206:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover206);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label206);
tc_applic_end_param_ranover206:
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
L_Error_cannot_tc_apply_non_closure_205:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT203:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_202:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_202:

/*************lambda-simple code ends here***********/
POP (R14);
MOV(IND(R14),R0);
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
JUMP_EQ (UNDEF_LABEL201);
JUMP (FINISH_FVAR_LABEL201);
UNDEF_LABEL201:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL201:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_200);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_200:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL199);
JUMP (FINISH_FVAR_LABEL199);
UNDEF_LABEL199:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL199:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_198);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_198:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE191);

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
MOV(R0, IND (R0));

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

JUMP (L_IF3_EXIT190);
L_IF3_ELSE191:

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
JUMP_EQ (UNDEF_LABEL194);
JUMP (FINISH_FVAR_LABEL194);
UNDEF_LABEL194:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL194:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_193);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_193:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, IND (R0));

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

L_IF3_EXIT190:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here187***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,63));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL189);
JUMP (FINISH_FVAR_LABEL189);
UNDEF_LABEL189:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL189:


/*************tc-applic cont187***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_187);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover188);
ADD (R10 , IMM(1));
tc_applic_for_label188:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover188);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label188);
tc_applic_end_param_ranover188:
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
L_Error_cannot_tc_apply_non_closure_187:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_186:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_186:

/*************lambda-simple code ends here***********/


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
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_183:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_183:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,60),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_182);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_182:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_279);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_279:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_279);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_279);
EXIT_LOOP_COPY_279:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_279:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_279);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_279);
EXIT_LOOP_EXTEND_ENV_279:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_235));
JUMP(L_CLOSURE_EXIT_235);
L_CLOSURE_BODY_235:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_278);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_278:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_278);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_278);
EXIT_LOOP_ARGS_278:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_278:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_278);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_278);
EXIT_FIXING_STACK_278:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_278);
NO_OPTIONAL_ARGS_278:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_278:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_278);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_278);
EXIT_NIL_CASE_LOOP_278:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_278:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here236***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_277);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_277:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_277);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_277);
EXIT_LOOP_COPY_277:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_277:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_277);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_277);
EXIT_LOOP_EXTEND_ENV_277:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_238));
JUMP(L_CLOSURE_EXIT_238);
L_CLOSURE_BODY_238:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_238);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R14, R0)
PUSH (R14);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_276);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_276:
CMP(R4,2);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_243));
JUMP(L_CLOSURE_EXIT_243);
L_CLOSURE_BODY_243:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_243);

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
JUMP_EQ (UNDEF_LABEL275);
JUMP (FINISH_FVAR_LABEL275);
UNDEF_LABEL275:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL275:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_274);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_274:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE245);

/*************tc-applic code starts here271***********/
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL273);
JUMP (FINISH_FVAR_LABEL273);
UNDEF_LABEL273:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL273:


/*************tc-applic cont271***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_271);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover272);
ADD (R10 , IMM(1));
tc_applic_for_label272:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover272);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label272);
tc_applic_end_param_ranover272:
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
L_Error_cannot_tc_apply_non_closure_271:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT244);
L_IF3_ELSE245:

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE247);

/*************tc-applic code starts here258***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL262);
JUMP (FINISH_FVAR_LABEL262);
UNDEF_LABEL262:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL262:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_261);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_261:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,46));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL260);
JUMP (FINISH_FVAR_LABEL260);
UNDEF_LABEL260:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL260:


/*************tc-applic cont258***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_258);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover259);
ADD (R10 , IMM(1));
tc_applic_for_label259:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover259);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label259);
tc_applic_end_param_ranover259:
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
L_Error_cannot_tc_apply_non_closure_258:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT246);
L_IF3_ELSE247:

/*************tc-applic code starts here248***********/

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

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, IND (R0));

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_255);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_255:

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

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL252);
JUMP (FINISH_FVAR_LABEL252);
UNDEF_LABEL252:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL252:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_251);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_251:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,46));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL250);
JUMP (FINISH_FVAR_LABEL250);
UNDEF_LABEL250:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL250:


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

L_IF3_EXIT244:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_243:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_243:

/*************lambda-simple code ends here***********/
POP (R14);
MOV(IND(R14),R0);
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
MOV(R0, IND (R0));

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_242);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_242:

/*************applic code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here239***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,63));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL241);
JUMP (FINISH_FVAR_LABEL241);
UNDEF_LABEL241:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL241:


/*************tc-applic cont239***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_239);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover240);
ADD (R10 , IMM(1));
tc_applic_for_label240:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover240);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label240);
tc_applic_end_param_ranover240:
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
L_Error_cannot_tc_apply_non_closure_239:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_238:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_238:

/*************lambda-simple code ends here***********/


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
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_235:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_235:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,61),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_234);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_234:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_140);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_140:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_140);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_140);
EXIT_LOOP_COPY_140:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_140:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_140);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_140);
EXIT_LOOP_EXTEND_ENV_140:
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
JUMP_EQ(NO_OPTIONAL_ARGS_139);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_139:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_139);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_139);
EXIT_LOOP_ARGS_139:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_139:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_139);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_139);
EXIT_FIXING_STACK_139:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_139);
NO_OPTIONAL_ARGS_139:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_139:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_139);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_139);
EXIT_NIL_CASE_LOOP_139:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_139:

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_138);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_138:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_138);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_138);
EXIT_LOOP_COPY_138:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_138:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_138);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_138);
EXIT_LOOP_EXTEND_ENV_138:
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
MOV (R14, R0)
PUSH (R14);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_137);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_137:
CMP(R4,2);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_109));
JUMP(L_CLOSURE_EXIT_109);
L_CLOSURE_BODY_109:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_109);

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
JUMP_EQ (UNDEF_LABEL136);
JUMP (FINISH_FVAR_LABEL136);
UNDEF_LABEL136:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL136:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_135);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_135:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL134);
JUMP (FINISH_FVAR_LABEL134);
UNDEF_LABEL134:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL134:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_133);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_133:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE111);

/*************tc-applic code starts here124***********/

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
JUMP_EQ (UNDEF_LABEL132);
JUMP (FINISH_FVAR_LABEL132);
UNDEF_LABEL132:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL132:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_131);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_131:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL130);
JUMP (FINISH_FVAR_LABEL130);
UNDEF_LABEL130:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL130:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_129);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_129:

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
JUMP_EQ (UNDEF_LABEL128);
JUMP (FINISH_FVAR_LABEL128);
UNDEF_LABEL128:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL128:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_127);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_127:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,45));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL126);
JUMP (FINISH_FVAR_LABEL126);
UNDEF_LABEL126:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL126:


/*************tc-applic cont124***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_124);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover125);
ADD (R10 , IMM(1));
tc_applic_for_label125:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover125);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label125);
tc_applic_end_param_ranover125:
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
L_Error_cannot_tc_apply_non_closure_124:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT110);
L_IF3_ELSE111:

/*************tc-applic code starts here112***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,45));
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
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, IND (R0));


/*************tc-applic cont112***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_112);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover113);
ADD (R10 , IMM(1));
tc_applic_for_label113:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover113);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label113);
tc_applic_end_param_ranover113:
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
L_Error_cannot_tc_apply_non_closure_112:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT110:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_109:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_109:

/*************lambda-simple code ends here***********/
POP (R14);
MOV(IND(R14),R0);
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
JUMP_EQ (UNDEF_LABEL108);
JUMP (FINISH_FVAR_LABEL108);
UNDEF_LABEL108:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL108:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_107);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_107:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL106);
JUMP (FINISH_FVAR_LABEL106);
UNDEF_LABEL106:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL106:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_105);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_105:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE98);

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
MOV(R0, IND (R0));

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

JUMP (L_IF3_EXIT97);
L_IF3_ELSE98:

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
JUMP_EQ (UNDEF_LABEL101);
JUMP (FINISH_FVAR_LABEL101);
UNDEF_LABEL101:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL101:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_100);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_100:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, IND (R0));

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

L_IF3_EXIT97:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here94***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,63));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL96);
JUMP (FINISH_FVAR_LABEL96);
UNDEF_LABEL96:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL96:


/*************tc-applic cont94***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_94);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover95);
ADD (R10 , IMM(1));
tc_applic_for_label95:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover95);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label95);
tc_applic_end_param_ranover95:
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
L_Error_cannot_tc_apply_non_closure_94:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_93:
INFO
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
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_90:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,62),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_89);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_89:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_181);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_181:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_181);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_181);
EXIT_LOOP_COPY_181:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_181:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_181);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_181);
EXIT_LOOP_EXTEND_ENV_181:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_142));
JUMP(L_CLOSURE_EXIT_142);
L_CLOSURE_BODY_142:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_180);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_180:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_180);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_180);
EXIT_LOOP_ARGS_180:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_180:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_180);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_180);
EXIT_FIXING_STACK_180:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_180);
NO_OPTIONAL_ARGS_180:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_180:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_180);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_180);
EXIT_NIL_CASE_LOOP_180:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_180:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here143***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_179);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_179:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_179);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_179);
EXIT_LOOP_COPY_179:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_179:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_179);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_179);
EXIT_LOOP_EXTEND_ENV_179:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_145));
JUMP(L_CLOSURE_EXIT_145);
L_CLOSURE_BODY_145:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_145);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R14, R0)
PUSH (R14);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_178);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_178:
CMP(R4,2);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_153));
JUMP(L_CLOSURE_EXIT_153);
L_CLOSURE_BODY_153:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_153);

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
JUMP_EQ (UNDEF_LABEL177);
JUMP (FINISH_FVAR_LABEL177);
UNDEF_LABEL177:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL177:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_176);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_176:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL175);
JUMP (FINISH_FVAR_LABEL175);
UNDEF_LABEL175:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL175:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_174);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_174:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE155);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT154);
L_IF3_ELSE155:

/*************tc-applic code starts here156***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL173);
JUMP (FINISH_FVAR_LABEL173);
UNDEF_LABEL173:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL173:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_172);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_172:

/*************applic code ends here***********/

PUSH(R0);

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE159);

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
JUMP_EQ (UNDEF_LABEL171);
JUMP (FINISH_FVAR_LABEL171);
UNDEF_LABEL171:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL171:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_170);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_170:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL169);
JUMP (FINISH_FVAR_LABEL169);
UNDEF_LABEL169:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL169:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_168);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_168:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL167);
JUMP (FINISH_FVAR_LABEL167);
UNDEF_LABEL167:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL167:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_166);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_166:

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
JUMP_EQ (UNDEF_LABEL165);
JUMP (FINISH_FVAR_LABEL165);
UNDEF_LABEL165:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL165:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_164);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_164:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,43));
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

JUMP (L_IF3_EXIT158);
L_IF3_ELSE159:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT158:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, IND (R0));


/*************tc-applic cont156***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_156);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover157);
ADD (R10 , IMM(1));
tc_applic_for_label157:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover157);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label157);
tc_applic_end_param_ranover157:
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
L_Error_cannot_tc_apply_non_closure_156:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT154:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_153:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_153:

/*************lambda-simple code ends here***********/
POP (R14);
MOV(IND(R14),R0);
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
JUMP_EQ (UNDEF_LABEL152);
JUMP (FINISH_FVAR_LABEL152);
UNDEF_LABEL152:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL152:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_151);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_151:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL150);
JUMP (FINISH_FVAR_LABEL150);
UNDEF_LABEL150:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL150:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_149);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_149:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE147);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT146);
L_IF3_ELSE147:

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
MOV(R0, IND (R0));

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

L_IF3_EXIT146:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_145:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_145:

/*************lambda-simple code ends here***********/


/*************tc-applic cont143***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_143);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover144);
ADD (R10 , IMM(1));
tc_applic_for_label144:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover144);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label144);
tc_applic_end_param_ranover144:
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
L_Error_cannot_tc_apply_non_closure_143:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_142:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_142:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,64),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_141);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_141:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_47);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_47:
CMP(R4,0);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_8));
JUMP(L_CLOSURE_EXIT_8);
L_CLOSURE_BODY_8:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_46);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_46:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_46);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_46);
EXIT_LOOP_ARGS_46:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_46:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_46);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_46);
EXIT_FIXING_STACK_46:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_46);
NO_OPTIONAL_ARGS_46:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_46:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_46);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_46);
EXIT_NIL_CASE_LOOP_46:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_46:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here9***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_45);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_45:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_45);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_45);
EXIT_LOOP_COPY_45:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_45:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_45);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_45);
EXIT_LOOP_EXTEND_ENV_45:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_11));
JUMP(L_CLOSURE_EXIT_11);
L_CLOSURE_BODY_11:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_11);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R14, R0)
PUSH (R14);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_44);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_44:
CMP(R4,2);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_19));
JUMP(L_CLOSURE_EXIT_19);
L_CLOSURE_BODY_19:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_19);

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE21);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT20);
L_IF3_ELSE21:

/*************tc-applic code starts here22***********/

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

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE25);

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
MOV (R0 ,INDD(FVARARRAY,0));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,44));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL27);
JUMP (FINISH_FVAR_LABEL27);
UNDEF_LABEL27:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL27:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_26);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_26:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT24);
L_IF3_ELSE25:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT24:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, IND (R0));


/*************tc-applic cont22***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_22);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover23);
ADD (R10 , IMM(1));
tc_applic_for_label23:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover23);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label23);
tc_applic_end_param_ranover23:
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
L_Error_cannot_tc_apply_non_closure_22:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT20:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_19:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_19:

/*************lambda-simple code ends here***********/
POP (R14);
MOV(IND(R14),R0);
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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL16);
JUMP (FINISH_FVAR_LABEL16);
UNDEF_LABEL16:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL16:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_15);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_15:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE13);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT12);
L_IF3_ELSE13:

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
MOV(R0, IND (R0));

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

L_IF3_EXIT12:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_11:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_11:

/*************lambda-simple code ends here***********/


/*************tc-applic cont9***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_9);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover10);
ADD (R10 , IMM(1));
tc_applic_for_label10:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover10);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label10);
tc_applic_end_param_ranover10:
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
L_Error_cannot_tc_apply_non_closure_9:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_8:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_8:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,65),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_7);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_7:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_88);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_88:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_88);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_88);
EXIT_LOOP_COPY_88:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_88:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_88);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_88);
EXIT_LOOP_EXTEND_ENV_88:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_49));
JUMP(L_CLOSURE_EXIT_49);
L_CLOSURE_BODY_49:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_87);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_87:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_87);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_87);
EXIT_LOOP_ARGS_87:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_87:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_87);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_87);
EXIT_FIXING_STACK_87:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_87);
NO_OPTIONAL_ARGS_87:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_87:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_87);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_87);
EXIT_NIL_CASE_LOOP_87:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_87:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here50***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_86);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_86:
CMP(R4,1);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_52));
JUMP(L_CLOSURE_EXIT_52);
L_CLOSURE_BODY_52:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_52);

/*************seq code starts***********/

MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV (R14, R0)
PUSH (R14);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (3,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_85);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_85:
CMP(R4,2);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_60));
JUMP(L_CLOSURE_EXIT_60);
L_CLOSURE_BODY_60:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_60);

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
JUMP_EQ (UNDEF_LABEL84);
JUMP (FINISH_FVAR_LABEL84);
UNDEF_LABEL84:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL84:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_83);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_83:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL82);
JUMP (FINISH_FVAR_LABEL82);
UNDEF_LABEL82:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL82:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_81);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_81:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE62);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT61);
L_IF3_ELSE62:

/*************tc-applic code starts here63***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL80);
JUMP (FINISH_FVAR_LABEL80);
UNDEF_LABEL80:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL80:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_79);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_79:

/*************applic code ends here***********/

PUSH(R0);

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE66);

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
JUMP_EQ (UNDEF_LABEL78);
JUMP (FINISH_FVAR_LABEL78);
UNDEF_LABEL78:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL78:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_77);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_77:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL76);
JUMP (FINISH_FVAR_LABEL76);
UNDEF_LABEL76:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL76:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_75);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_75:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL74);
JUMP (FINISH_FVAR_LABEL74);
UNDEF_LABEL74:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL74:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_73);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_73:

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
JUMP_EQ (UNDEF_LABEL72);
JUMP (FINISH_FVAR_LABEL72);
UNDEF_LABEL72:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL72:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_71);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_71:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL70);
JUMP (FINISH_FVAR_LABEL70);
UNDEF_LABEL70:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL70:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_69);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_69:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,47));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL68);
JUMP (FINISH_FVAR_LABEL68);
UNDEF_LABEL68:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL68:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_67);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_67:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT65);
L_IF3_ELSE66:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT65:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, IND (R0));


/*************tc-applic cont63***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_63);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover64);
ADD (R10 , IMM(1));
tc_applic_for_label64:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover64);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label64);
tc_applic_end_param_ranover64:
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
L_Error_cannot_tc_apply_non_closure_63:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT61:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_60:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_60:

/*************lambda-simple code ends here***********/
POP (R14);
MOV(IND(R14),R0);
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
JUMP_EQ (UNDEF_LABEL59);
JUMP (FINISH_FVAR_LABEL59);
UNDEF_LABEL59:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL59:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_58);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_58:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL57);
JUMP (FINISH_FVAR_LABEL57);
UNDEF_LABEL57:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL57:

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE54);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT53);
L_IF3_ELSE54:

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
MOV(R0, IND (R0));

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

L_IF3_EXIT53:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_52:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_52:

/*************lambda-simple code ends here***********/


/*************tc-applic cont50***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_50);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover51);
ADD (R10 , IMM(1));
tc_applic_for_label51:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover51);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label51);
tc_applic_end_param_ranover51:
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
L_Error_cannot_tc_apply_non_closure_50:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_49:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_49:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,66),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

INFO
CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_48);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_48:

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,7));

PUSH(R0);
PUSH(1);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_6);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_6:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_6);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_6);
EXIT_LOOP_COPY_6:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_6:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_6);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_6);
EXIT_LOOP_EXTEND_ENV_6:
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
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_3);

/*************seq code starts***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5);
JUMP (FINISH_FVAR_LABEL5);
UNDEF_LABEL5:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4:

/*************applic code ends here***********/
MOV(FPARG(2),R0);
MOV (R0,SOB_VOID);
MOV (R0 ,INDD(CONSTARRAY,6));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_3:
INFO
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_3:

/*************lambda-simple code ends here***********/

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

INFO
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