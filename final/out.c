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
PUSH(IMM(17));
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
PUSH (97);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,6) , R0);
MOV(R1, (INDD(CONSTARRAY,6)));
PUSH (INDD(R1, 1));
PUSH (1);
CALL (MAKE_SOB_STRING)
DROP (1);
MOV(INDD(CONSTARRAY,7) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,7));
MOV (INDD (CONSTARRAY ,8) , R0);

PUSH (99);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,9) , R0);
MOV(R1, (INDD(CONSTARRAY,9)));
PUSH (INDD(R1, 1));
PUSH (1);
CALL (MAKE_SOB_STRING)
DROP (1);
MOV(INDD(CONSTARRAY,10) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,10));
MOV (INDD (CONSTARRAY ,11) , R0);

PUSH (98);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,12) , R0);
MOV(R1, (INDD(CONSTARRAY,12)));
PUSH (INDD(R1, 1));
PUSH (1);
CALL (MAKE_SOB_STRING)
DROP (1);
MOV(INDD(CONSTARRAY,13) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,13));
MOV (INDD (CONSTARRAY ,14) , R0);

PUSH (INDD(CONSTARRAY,14));
PUSH (INDD(CONSTARRAY,11));
CALL (MAKE_SOB_PAIR);
DROP (2);
MOV(INDD(CONSTARRAY,15) , R0);
PUSH (INDD(CONSTARRAY,15));
PUSH (INDD(CONSTARRAY,8));
CALL (MAKE_SOB_PAIR);
DROP (2);
MOV(INDD(CONSTARRAY,16) , R0);

/*************init Const-Table ends here***********/

/*************symbol table starts: ***********/
MOV (R7,SOB_NIL);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,13));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,10));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,7));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(1));
CALL (MALLOC);
DROP(1);
MOV (SYMBOLTABLE,R7);

/*************symbol table ends: ***********/

/*************init Fvar-Table start here***********/
PUSH(IMM(65));
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
MOV(INDD(FVARARRAY,29),R0);
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
MOV (R6 , FPARG(3));
ADD (R6 , 2);
PUSH(R6);
CALL(MALLOC);
DROP(1);
MOV (IND(R0) , T_STRING);
MOV (INDD(R0,1) , FPARG(3));
MOV (R6 , FPARG(3));
RS_make_string_Loop_Empty_String_Label:
CMP (R6 , 0);
JUMP_EQ(RS_make_string_Loop_Exit_Empty_String_Label);
MOV (INDD(R0,R6 + 2) , SOB_NIL);
DECR(R6);
JUMP(RS_make_string_Loop_Empty_String_Label);
RS_make_string_Loop_Exit_Empty_String_Label:
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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_556);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_556:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_556);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_556);
EXIT_LOOP_COPY_556:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_556:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_556);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_556);
EXIT_LOOP_EXTEND_ENV_556:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_538));
JUMP(L_CLOSURE_EXIT_538);
L_CLOSURE_BODY_538:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_538);

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
JUMP_EQ (UNDEF_LABEL555);
JUMP (FINISH_FVAR_LABEL555);
UNDEF_LABEL555:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL555:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_554);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_554:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE540);

/*************tc-applic code starts here551***********/
PUSH (IMM(0));

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,36));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL553);
JUMP (FINISH_FVAR_LABEL553);
UNDEF_LABEL553:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL553:


/*************tc-applic cont551***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_551);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover552);
ADD (R10 , IMM(1));
tc_applic_for_label552:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover552);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label552);
tc_applic_end_param_ranover552:
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
L_Error_cannot_tc_apply_non_closure_551:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT539);
L_IF3_ELSE540:

/*************tc-applic code starts here541***********/

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
JUMP_EQ (UNDEF_LABEL550);
JUMP (FINISH_FVAR_LABEL550);
UNDEF_LABEL550:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL550:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_549);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_549:

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
JUMP_EQ (UNDEF_LABEL548);
JUMP (FINISH_FVAR_LABEL548);
UNDEF_LABEL548:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL548:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_547);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_547:

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
JUMP_EQ (UNDEF_LABEL546);
JUMP (FINISH_FVAR_LABEL546);
UNDEF_LABEL546:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL546:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_545);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_545:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_544);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_544:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,2));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL543);
JUMP (FINISH_FVAR_LABEL543);
UNDEF_LABEL543:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL543:


/*************tc-applic cont541***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_541);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover542);
ADD (R10 , IMM(1));
tc_applic_for_label542:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover542);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label542);
tc_applic_end_param_ranover542:
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
L_Error_cannot_tc_apply_non_closure_541:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT539:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_538:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_538:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,48),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_537);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_537:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_572);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_572:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_572);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_572);
EXIT_LOOP_COPY_572:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_572:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_572);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_572);
EXIT_LOOP_EXTEND_ENV_572:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_558));
JUMP(L_CLOSURE_EXIT_558);
L_CLOSURE_BODY_558:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_558);

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
JUMP_EQ (UNDEF_LABEL571);
JUMP (FINISH_FVAR_LABEL571);
UNDEF_LABEL571:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL571:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_570);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_570:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE560);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT559);
L_IF3_ELSE560:

/*************tc-applic code starts here561***********/

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
JUMP_EQ (UNDEF_LABEL569);
JUMP (FINISH_FVAR_LABEL569);
UNDEF_LABEL569:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL569:

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

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_566);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_566:

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
JUMP_EQ (UNDEF_LABEL565);
JUMP (FINISH_FVAR_LABEL565);
UNDEF_LABEL565:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL565:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_564);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_564:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,50));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL563);
JUMP (FINISH_FVAR_LABEL563);
UNDEF_LABEL563:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL563:


/*************tc-applic cont561***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_561);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover562);
ADD (R10 , IMM(1));
tc_applic_for_label562:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover562);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label562);
tc_applic_end_param_ranover562:
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
L_Error_cannot_tc_apply_non_closure_561:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT559:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_558:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_558:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,50),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_557);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_557:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_484);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_484:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_484);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_484);
EXIT_LOOP_COPY_484:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_484:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_484);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_484);
EXIT_LOOP_EXTEND_ENV_484:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_471));
JUMP(L_CLOSURE_EXIT_471);
L_CLOSURE_BODY_471:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_471);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE473);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT472);
L_IF3_ELSE473:

/*************tc-applic code starts here474***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 2));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL481);
JUMP (FINISH_FVAR_LABEL481);
UNDEF_LABEL481:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL481:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_480);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_480:

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

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_477);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_477:

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
JUMP_EQ (UNDEF_LABEL476);
JUMP (FINISH_FVAR_LABEL476);
UNDEF_LABEL476:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL476:


/*************tc-applic cont474***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_474);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover475);
ADD (R10 , IMM(1));
tc_applic_for_label475:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover475);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label475);
tc_applic_end_param_ranover475:
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
L_Error_cannot_tc_apply_non_closure_474:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT472:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_471:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_471:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,49),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_470);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_470:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_536);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_536:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_536);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_536);
EXIT_LOOP_COPY_536:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_536:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_536);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_536);
EXIT_LOOP_EXTEND_ENV_536:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_486));
JUMP(L_CLOSURE_EXIT_486);
L_CLOSURE_BODY_486:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_486);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE488);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT487);
L_IF3_ELSE488:

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE490);

/*************tc-applic code starts here525***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL531);
JUMP (FINISH_FVAR_LABEL531);
UNDEF_LABEL531:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL531:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_530);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_530:

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
JUMP_EQ (UNDEF_LABEL529);
JUMP (FINISH_FVAR_LABEL529);
UNDEF_LABEL529:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL529:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_528);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_528:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,52));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL527);
JUMP (FINISH_FVAR_LABEL527);
UNDEF_LABEL527:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL527:


/*************tc-applic cont525***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_525);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover526);
ADD (R10 , IMM(1));
tc_applic_for_label526:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover526);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label526);
tc_applic_end_param_ranover526:
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
L_Error_cannot_tc_apply_non_closure_525:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT489);
L_IF3_ELSE490:

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL522);
JUMP (FINISH_FVAR_LABEL522);
UNDEF_LABEL522:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL522:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_521);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_521:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,17));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL520);
JUMP (FINISH_FVAR_LABEL520);
UNDEF_LABEL520:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL520:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_519);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_519:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE514);

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
JUMP_EQ (UNDEF_LABEL518);
JUMP (FINISH_FVAR_LABEL518);
UNDEF_LABEL518:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL518:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_517);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_517:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
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

JUMP (L_IF3_EXIT513);
L_IF3_ELSE514:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT513:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE492);

/*************tc-applic code starts here508***********/

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
JUMP_EQ (UNDEF_LABEL512);
JUMP (FINISH_FVAR_LABEL512);
UNDEF_LABEL512:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL512:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_511);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_511:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,52));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL510);
JUMP (FINISH_FVAR_LABEL510);
UNDEF_LABEL510:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL510:


/*************tc-applic cont508***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_508);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover509);
ADD (R10 , IMM(1));
tc_applic_for_label509:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover509);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label509);
tc_applic_end_param_ranover509:
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
L_Error_cannot_tc_apply_non_closure_508:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT491);
L_IF3_ELSE492:

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
JUMP_EQ (UNDEF_LABEL507);
JUMP (FINISH_FVAR_LABEL507);
UNDEF_LABEL507:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL507:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_506);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_506:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL505);
JUMP (FINISH_FVAR_LABEL505);
UNDEF_LABEL505:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL505:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_504);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_504:

/*************applic code ends here***********/

/*************tc-applic code starts here493***********/

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
JUMP_EQ (UNDEF_LABEL503);
JUMP (FINISH_FVAR_LABEL503);
UNDEF_LABEL503:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL503:

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

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,0));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,50));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL501);
JUMP (FINISH_FVAR_LABEL501);
UNDEF_LABEL501:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL501:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_500);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_500:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,52));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL495);
JUMP (FINISH_FVAR_LABEL495);
UNDEF_LABEL495:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL495:


/*************tc-applic cont493***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_493);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover494);
ADD (R10 , IMM(1));
tc_applic_for_label494:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover494);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label494);
tc_applic_end_param_ranover494:
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
L_Error_cannot_tc_apply_non_closure_493:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/

L_IF3_EXIT491:

/*************if3 code ends here***********/

L_IF3_EXIT489:

/*************if3 code ends here***********/

L_IF3_EXIT487:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_486:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_486:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,52),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_485);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_485:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_463);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_463:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_463);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_463);
EXIT_LOOP_COPY_463:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_463:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_463);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_463);
EXIT_LOOP_EXTEND_ENV_463:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_442));
JUMP(L_CLOSURE_EXIT_442);
L_CLOSURE_BODY_442:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_462);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_462:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_462);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_462);
EXIT_LOOP_ARGS_462:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_462:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_462);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_462);
EXIT_FIXING_STACK_462:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_462);
NO_OPTIONAL_ARGS_462:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_462:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_462);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_462);
EXIT_NIL_CASE_LOOP_462:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_462:

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE444);

/*************tc-applic code starts here457***********/
PUSH (IMM(0));

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,36));
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

JUMP (L_IF3_EXIT443);
L_IF3_ELSE444:

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
JUMP_EQ (UNDEF_LABEL456);
JUMP (FINISH_FVAR_LABEL456);
UNDEF_LABEL456:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL456:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_455);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_455:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL454);
JUMP (FINISH_FVAR_LABEL454);
UNDEF_LABEL454:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL454:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_453);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_453:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE446);

/*************tc-applic code starts here450***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL452);
JUMP (FINISH_FVAR_LABEL452);
UNDEF_LABEL452:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL452:


/*************tc-applic cont450***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_450);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover451);
ADD (R10 , IMM(1));
tc_applic_for_label451:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover451);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label451);
tc_applic_end_param_ranover451:
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
L_Error_cannot_tc_apply_non_closure_450:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT445);
L_IF3_ELSE446:

/*************tc-applic code starts here447***********/
MOV (R0 ,INDD(CONSTARRAY,0));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,52));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL449);
JUMP (FINISH_FVAR_LABEL449);
UNDEF_LABEL449:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL449:


/*************tc-applic cont447***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_447);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover448);
ADD (R10 , IMM(1));
tc_applic_for_label448:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover448);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label448);
tc_applic_end_param_ranover448:
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
L_Error_cannot_tc_apply_non_closure_447:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT445:

/*************if3 code ends here***********/

L_IF3_EXIT443:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_442:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_442:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,51),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_441);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_441:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_469);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_469:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_469);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_469);
EXIT_LOOP_COPY_469:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_469:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_469);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_469);
EXIT_LOOP_EXTEND_ENV_469:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_465));
JUMP(L_CLOSURE_EXIT_465);
L_CLOSURE_BODY_465:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_465);

/*************tc-applic code starts here466***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,54));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL468);
JUMP (FINISH_FVAR_LABEL468);
UNDEF_LABEL468:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL468:


/*************tc-applic cont466***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_466);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover467);
ADD (R10 , IMM(1));
tc_applic_for_label467:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover467);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label467);
tc_applic_end_param_ranover467:
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
L_Error_cannot_tc_apply_non_closure_466:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_465:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_465:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,53),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_464);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_464:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_365);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_365:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_365);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_365);
EXIT_LOOP_COPY_365:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_365:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_365);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_365);
EXIT_LOOP_EXTEND_ENV_365:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_358));
JUMP(L_CLOSURE_EXIT_358);
L_CLOSURE_BODY_358:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_358);

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
JUMP_EQ (UNDEF_LABEL364);
JUMP (FINISH_FVAR_LABEL364);
UNDEF_LABEL364:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL364:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_363);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_363:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT359);

/*************tc-applic code starts here360***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL362);
JUMP (FINISH_FVAR_LABEL362);
UNDEF_LABEL362:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL362:


/*************tc-applic cont360***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_360);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover361);
ADD (R10 , IMM(1));
tc_applic_for_label361:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover361);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label361);
tc_applic_end_param_ranover361:
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
L_Error_cannot_tc_apply_non_closure_360:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT359);
L_OR_EXIT359:

/*************or code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_358:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_358:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,54),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_357);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_357:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_440);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_440:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_440);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_440);
EXIT_LOOP_COPY_440:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_440:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_440);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_440);
EXIT_LOOP_EXTEND_ENV_440:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_367));
JUMP(L_CLOSURE_EXIT_367);
L_CLOSURE_BODY_367:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_367);

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
JUMP_EQ (UNDEF_LABEL439);
JUMP (FINISH_FVAR_LABEL439);
UNDEF_LABEL439:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL439:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_438);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_438:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE435);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,7));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL437);
JUMP (FINISH_FVAR_LABEL437);
UNDEF_LABEL437:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL437:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_436);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_436:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT434);
L_IF3_ELSE435:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT434:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT415);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE429);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL431);
JUMP (FINISH_FVAR_LABEL431);
UNDEF_LABEL431:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL431:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_430);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_430:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT428);
L_IF3_ELSE429:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT428:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT415);

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
JUMP_EQ (UNDEF_LABEL427);
JUMP (FINISH_FVAR_LABEL427);
UNDEF_LABEL427:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL427:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_426);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_426:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE423);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,6));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL425);
JUMP (FINISH_FVAR_LABEL425);
UNDEF_LABEL425:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL425:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_424);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_424:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT422);
L_IF3_ELSE423:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT422:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT415);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE417);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,11));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL419);
JUMP (FINISH_FVAR_LABEL419);
UNDEF_LABEL419:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL419:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_418);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_418:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT416);
L_IF3_ELSE417:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT416:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT415);
L_OR_EXIT415:

/*************or code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE369);

/*************tc-applic code starts here412***********/

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
JUMP_EQ (UNDEF_LABEL414);
JUMP (FINISH_FVAR_LABEL414);
UNDEF_LABEL414:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL414:


/*************tc-applic cont412***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_412);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover413);
ADD (R10 , IMM(1));
tc_applic_for_label413:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover413);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label413);
tc_applic_end_param_ranover413:
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
L_Error_cannot_tc_apply_non_closure_412:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT368);
L_IF3_ELSE369:

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
MOV (R0 ,INDD(FVARARRAY,13));
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
JUMP_NE (L_OR_EXIT375);

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
MOV (R0 ,INDD(FVARARRAY,14));
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
JUMP_NE (L_OR_EXIT375);

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
JUMP_EQ (UNDEF_LABEL399);
JUMP (FINISH_FVAR_LABEL399);
UNDEF_LABEL399:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL399:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_398);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_398:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE395);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,5));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL397);
JUMP (FINISH_FVAR_LABEL397);
UNDEF_LABEL397:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL397:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_396);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_396:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT394);
L_IF3_ELSE395:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT394:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT375);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE389);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,10));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL391);
JUMP (FINISH_FVAR_LABEL391);
UNDEF_LABEL391:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL391:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_390);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_390:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT388);
L_IF3_ELSE389:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT388:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT375);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE383);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,12));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL385);
JUMP (FINISH_FVAR_LABEL385);
UNDEF_LABEL385:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL385:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_384);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_384:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT382);
L_IF3_ELSE383:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT382:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT375);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE377);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL379);
JUMP (FINISH_FVAR_LABEL379);
UNDEF_LABEL379:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL379:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_378);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_378:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT376);
L_IF3_ELSE377:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT376:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT375);
L_OR_EXIT375:

/*************or code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE371);

/*************tc-applic code starts here372***********/

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
JUMP_EQ (UNDEF_LABEL374);
JUMP (FINISH_FVAR_LABEL374);
UNDEF_LABEL374:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL374:


/*************tc-applic cont372***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_372);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover373);
ADD (R10 , IMM(1));
tc_applic_for_label373:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover373);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label373);
tc_applic_end_param_ranover373:
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
L_Error_cannot_tc_apply_non_closure_372:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT370);
L_IF3_ELSE371:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT370:

/*************if3 code ends here***********/

L_IF3_EXIT368:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_367:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_367:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,55),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_366);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_366:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_332);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_332:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_332);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_332);
EXIT_LOOP_COPY_332:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_332:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_332);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_332);
EXIT_LOOP_EXTEND_ENV_332:
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
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_322);

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
MOV (R0 ,INDD(FVARARRAY,55));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE324);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT323);
L_IF3_ELSE324:

/*************tc-applic code starts here325***********/

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

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,56));
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

L_IF3_EXIT323:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_322:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_322:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,56),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_321);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_321:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_356);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_356:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_356);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_356);
EXIT_LOOP_COPY_356:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_356:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_356);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_356);
EXIT_LOOP_EXTEND_ENV_356:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_334));
JUMP(L_CLOSURE_EXIT_334);
L_CLOSURE_BODY_334:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_334);

/*************tc-applic code starts here335***********/
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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_355);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_355:
CMP(R4,1);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_337));
JUMP(L_CLOSURE_EXIT_337);
L_CLOSURE_BODY_337:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_337);

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
MOV (R0 ,INDD(FVARARRAY,56));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL350);
JUMP (FINISH_FVAR_LABEL350);
UNDEF_LABEL350:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL350:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_349);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_349:

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
JUMP_EQ (UNDEF_LABEL348);
JUMP (FINISH_FVAR_LABEL348);
UNDEF_LABEL348:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL348:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_347);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_347:

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
JUMP_EQ (UNDEF_LABEL346);
JUMP (FINISH_FVAR_LABEL346);
UNDEF_LABEL346:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL346:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_345);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_345:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,46));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL344);
JUMP (FINISH_FVAR_LABEL344);
UNDEF_LABEL344:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL344:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_343);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_343:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE339);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT338);
L_IF3_ELSE339:

/*************tc-applic code starts here340***********/

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
JUMP_EQ (UNDEF_LABEL342);
JUMP (FINISH_FVAR_LABEL342);
UNDEF_LABEL342:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL342:


/*************tc-applic cont340***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_340);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover341);
ADD (R10 , IMM(1));
tc_applic_for_label341:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover341);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label341);
tc_applic_end_param_ranover341:
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
L_Error_cannot_tc_apply_non_closure_340:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT338:

/*************if3 code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_337:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_337:

/*************lambda-simple code ends here***********/


/*************tc-applic cont335***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_335);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover336);
ADD (R10 , IMM(1));
tc_applic_for_label336:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover336);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label336);
tc_applic_end_param_ranover336:
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
L_Error_cannot_tc_apply_non_closure_335:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_334:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_334:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,61),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_333);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_333:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_268);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_268:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_268);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_268);
EXIT_LOOP_COPY_268:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_268:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_268);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_268);
EXIT_LOOP_EXTEND_ENV_268:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_224));
JUMP(L_CLOSURE_EXIT_224);
L_CLOSURE_BODY_224:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_267);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_267:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_267);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_267);
EXIT_LOOP_ARGS_267:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_267:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_267);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_267);
EXIT_FIXING_STACK_267:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_267);
NO_OPTIONAL_ARGS_267:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_267:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_267);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_267);
EXIT_NIL_CASE_LOOP_267:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_267:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here225***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_266);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_266:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_266);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_266);
EXIT_LOOP_COPY_266:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_266:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_266);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_266);
EXIT_LOOP_EXTEND_ENV_266:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_227));
JUMP(L_CLOSURE_EXIT_227);
L_CLOSURE_BODY_227:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_227);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_265);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_265:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_265);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_265);
EXIT_LOOP_COPY_265:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_265:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_265);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_265);
EXIT_LOOP_EXTEND_ENV_265:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_232));
JUMP(L_CLOSURE_EXIT_232);
L_CLOSURE_BODY_232:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_232);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE234);

/*************tc-applic code starts here260***********/
MOV (R0 ,INDD(CONSTARRAY,4));

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

JUMP (L_IF3_EXIT233);
L_IF3_ELSE234:

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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE236);

/*************tc-applic code starts here247***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,40));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL249);
JUMP (FINISH_FVAR_LABEL249);
UNDEF_LABEL249:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL249:


/*************tc-applic cont247***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_247);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover248);
ADD (R10 , IMM(1));
tc_applic_for_label248:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover248);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label248);
tc_applic_end_param_ranover248:
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
L_Error_cannot_tc_apply_non_closure_247:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT235);
L_IF3_ELSE236:

/*************tc-applic code starts here237***********/

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
JUMP_EQ (UNDEF_LABEL246);
JUMP (FINISH_FVAR_LABEL246);
UNDEF_LABEL246:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL246:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_245);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_245:

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
JUMP_NE(L_Error_cannot_apply_non_closure_244);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_244:

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
JUMP_EQ (UNDEF_LABEL243);
JUMP (FINISH_FVAR_LABEL243);
UNDEF_LABEL243:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL243:

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL241);
JUMP (FINISH_FVAR_LABEL241);
UNDEF_LABEL241:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL241:

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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,40));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL239);
JUMP (FINISH_FVAR_LABEL239);
UNDEF_LABEL239:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL239:


/*************tc-applic cont237***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_237);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover238);
ADD (R10 , IMM(1));
tc_applic_for_label238:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover238);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label238);
tc_applic_end_param_ranover238:
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
L_Error_cannot_tc_apply_non_closure_237:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT235:

/*************if3 code ends here***********/

L_IF3_EXIT233:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_232:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_232:

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
JUMP_NE(L_Error_cannot_apply_non_closure_231);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_231:

/*************applic code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here228***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,61));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL230);
JUMP (FINISH_FVAR_LABEL230);
UNDEF_LABEL230:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL230:


/*************tc-applic cont228***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_228);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover229);
ADD (R10 , IMM(1));
tc_applic_for_label229:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover229);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label229);
tc_applic_end_param_ranover229:
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
L_Error_cannot_tc_apply_non_closure_228:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_227:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_227:

/*************lambda-simple code ends here***********/


/*************tc-applic cont225***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_225);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover226);
ADD (R10 , IMM(1));
tc_applic_for_label226:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover226);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label226);
tc_applic_end_param_ranover226:
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
L_Error_cannot_tc_apply_non_closure_225:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_224:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_224:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,57),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_223);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_223:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_320);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_320:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_320);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_320);
EXIT_LOOP_COPY_320:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_320:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_320);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_320);
EXIT_LOOP_EXTEND_ENV_320:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_270));
JUMP(L_CLOSURE_EXIT_270);
L_CLOSURE_BODY_270:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_319);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_319:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_319);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_319);
EXIT_LOOP_ARGS_319:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_319:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_319);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_319);
EXIT_FIXING_STACK_319:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_319);
NO_OPTIONAL_ARGS_319:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_319:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_319);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_319);
EXIT_NIL_CASE_LOOP_319:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_319:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here271***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_318);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_318:
CMP(R4,1);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_273));
JUMP(L_CLOSURE_EXIT_273);
L_CLOSURE_BODY_273:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_273);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_317);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_317:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_317);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_317);
EXIT_LOOP_COPY_317:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_317:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_317);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_317);
EXIT_LOOP_EXTEND_ENV_317:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_289));
JUMP(L_CLOSURE_EXIT_289);
L_CLOSURE_BODY_289:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_289);

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
JUMP_EQ (UNDEF_LABEL316);
JUMP (FINISH_FVAR_LABEL316);
UNDEF_LABEL316:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL316:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_315);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_315:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL314);
JUMP (FINISH_FVAR_LABEL314);
UNDEF_LABEL314:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL314:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_313);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_313:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE291);

/*************tc-applic code starts here304***********/

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
MOV (R0 ,INDD(FVARARRAY,34));
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
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,41));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL306);
JUMP (FINISH_FVAR_LABEL306);
UNDEF_LABEL306:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL306:


/*************tc-applic cont304***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_304);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover305);
ADD (R10 , IMM(1));
tc_applic_for_label305:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover305);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label305);
tc_applic_end_param_ranover305:
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
L_Error_cannot_tc_apply_non_closure_304:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT290);
L_IF3_ELSE291:

/*************tc-applic code starts here292***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL303);
JUMP (FINISH_FVAR_LABEL303);
UNDEF_LABEL303:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL303:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_302);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_302:

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,41));
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
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont292***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_292);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover293);
ADD (R10 , IMM(1));
tc_applic_for_label293:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover293);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label293);
tc_applic_end_param_ranover293:
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
L_Error_cannot_tc_apply_non_closure_292:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT290:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_289:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_289:

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL286);
JUMP (FINISH_FVAR_LABEL286);
UNDEF_LABEL286:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL286:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_285);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_285:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE278);

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

JUMP (L_IF3_EXIT277);
L_IF3_ELSE278:

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
JUMP_EQ (UNDEF_LABEL283);
JUMP (FINISH_FVAR_LABEL283);
UNDEF_LABEL283:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL283:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_282);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_282:

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
JUMP_EQ (UNDEF_LABEL281);
JUMP (FINISH_FVAR_LABEL281);
UNDEF_LABEL281:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL281:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_280);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_280:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_279);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_279:

/*************applic code ends here***********/

L_IF3_EXIT277:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here274***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,61));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL276);
JUMP (FINISH_FVAR_LABEL276);
UNDEF_LABEL276:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL276:


/*************tc-applic cont274***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_274);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover275);
ADD (R10 , IMM(1));
tc_applic_for_label275:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover275);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label275);
tc_applic_end_param_ranover275:
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
L_Error_cannot_tc_apply_non_closure_274:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_273:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_273:

/*************lambda-simple code ends here***********/


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
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_270:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_270:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,58),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_269);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_269:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_170);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_170:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_170);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_170);
EXIT_LOOP_COPY_170:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_170:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_170);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_170);
EXIT_LOOP_EXTEND_ENV_170:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_126));
JUMP(L_CLOSURE_EXIT_126);
L_CLOSURE_BODY_126:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_169);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_169:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_169);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_169);
EXIT_LOOP_ARGS_169:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_169:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_169);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_169);
EXIT_FIXING_STACK_169:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_169);
NO_OPTIONAL_ARGS_169:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_169:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_169);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_169);
EXIT_NIL_CASE_LOOP_169:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_169:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here127***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_168);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_168:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_168);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_168);
EXIT_LOOP_COPY_168:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_168:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_168);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_168);
EXIT_LOOP_EXTEND_ENV_168:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_129));
JUMP(L_CLOSURE_EXIT_129);
L_CLOSURE_BODY_129:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_129);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_167);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_167:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_167);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_167);
EXIT_LOOP_COPY_167:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_167:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_167);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_167);
EXIT_LOOP_EXTEND_ENV_167:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_134));
JUMP(L_CLOSURE_EXIT_134);
L_CLOSURE_BODY_134:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_134);

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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE136);

/*************tc-applic code starts here162***********/
MOV (R0 ,INDD(CONSTARRAY,5));

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


/*************tc-applic cont162***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_162);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover163);
ADD (R10 , IMM(1));
tc_applic_for_label163:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover163);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label163);
tc_applic_end_param_ranover163:
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
L_Error_cannot_tc_apply_non_closure_162:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT135);
L_IF3_ELSE136:

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
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE138);

/*************tc-applic code starts here149***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL153);
JUMP (FINISH_FVAR_LABEL153);
UNDEF_LABEL153:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL153:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_152);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_152:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,45));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL151);
JUMP (FINISH_FVAR_LABEL151);
UNDEF_LABEL151:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL151:


/*************tc-applic cont149***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_149);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover150);
ADD (R10 , IMM(1));
tc_applic_for_label150:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover150);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label150);
tc_applic_end_param_ranover150:
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
L_Error_cannot_tc_apply_non_closure_149:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT137);
L_IF3_ELSE138:

/*************tc-applic code starts here139***********/

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

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));
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
JUMP_EQ (UNDEF_LABEL145);
JUMP (FINISH_FVAR_LABEL145);
UNDEF_LABEL145:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL145:

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,45));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL141);
JUMP (FINISH_FVAR_LABEL141);
UNDEF_LABEL141:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL141:


/*************tc-applic cont139***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_139);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover140);
ADD (R10 , IMM(1));
tc_applic_for_label140:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover140);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label140);
tc_applic_end_param_ranover140:
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
L_Error_cannot_tc_apply_non_closure_139:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT137:

/*************if3 code ends here***********/

L_IF3_EXIT135:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_134:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_134:

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
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here130***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,61));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL132);
JUMP (FINISH_FVAR_LABEL132);
UNDEF_LABEL132:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL132:


/*************tc-applic cont130***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_130);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover131);
ADD (R10 , IMM(1));
tc_applic_for_label131:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover131);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label131);
tc_applic_end_param_ranover131:
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
L_Error_cannot_tc_apply_non_closure_130:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_129:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_129:

/*************lambda-simple code ends here***********/


/*************tc-applic cont127***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_127);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover128);
ADD (R10 , IMM(1));
tc_applic_for_label128:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover128);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label128);
tc_applic_end_param_ranover128:
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
L_Error_cannot_tc_apply_non_closure_127:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_126:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_126:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,59),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_125);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_125:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_222);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_222:
CMP(R4,0);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_172));
JUMP(L_CLOSURE_EXIT_172);
L_CLOSURE_BODY_172:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_221);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_221:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_221);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_221);
EXIT_LOOP_ARGS_221:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_221:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_221);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_221);
EXIT_FIXING_STACK_221:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_221);
NO_OPTIONAL_ARGS_221:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_221:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_221);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_221);
EXIT_NIL_CASE_LOOP_221:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_221:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here173***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_220);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_220:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_220);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_220);
EXIT_LOOP_COPY_220:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_220:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_220);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_220);
EXIT_LOOP_EXTEND_ENV_220:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_175));
JUMP(L_CLOSURE_EXIT_175);
L_CLOSURE_BODY_175:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_175);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_219);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_219:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_219);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_219);
EXIT_LOOP_COPY_219:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_219:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_219);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_219);
EXIT_LOOP_EXTEND_ENV_219:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_191));
JUMP(L_CLOSURE_EXIT_191);
L_CLOSURE_BODY_191:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_191);

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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE193);

/*************tc-applic code starts here206***********/

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
MOV (R0 ,INDD(FVARARRAY,44));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL208);
JUMP (FINISH_FVAR_LABEL208);
UNDEF_LABEL208:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL208:


/*************tc-applic cont206***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_206);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover207);
ADD (R10 , IMM(1));
tc_applic_for_label207:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover207);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label207);
tc_applic_end_param_ranover207:
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
L_Error_cannot_tc_apply_non_closure_206:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT192);
L_IF3_ELSE193:

/*************tc-applic code starts here194***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
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

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,44));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL197);
JUMP (FINISH_FVAR_LABEL197);
UNDEF_LABEL197:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL197:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_196);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_196:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

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
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_191:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_191:

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
JUMP_EQ (UNDEF_LABEL190);
JUMP (FINISH_FVAR_LABEL190);
UNDEF_LABEL190:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL190:

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL188);
JUMP (FINISH_FVAR_LABEL188);
UNDEF_LABEL188:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL188:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_187);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_187:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE180);

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
JUMP_NE(L_Error_cannot_apply_non_closure_186);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_186:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT179);
L_IF3_ELSE180:

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
JUMP_EQ (UNDEF_LABEL185);
JUMP (FINISH_FVAR_LABEL185);
UNDEF_LABEL185:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL185:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_184);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_184:

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
JUMP_EQ (UNDEF_LABEL183);
JUMP (FINISH_FVAR_LABEL183);
UNDEF_LABEL183:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL183:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_182);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_182:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_181);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_181:

/*************applic code ends here***********/

L_IF3_EXIT179:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here176***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,61));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL178);
JUMP (FINISH_FVAR_LABEL178);
UNDEF_LABEL178:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL178:


/*************tc-applic cont176***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_176);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover177);
ADD (R10 , IMM(1));
tc_applic_for_label177:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover177);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label177);
tc_applic_end_param_ranover177:
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
L_Error_cannot_tc_apply_non_closure_176:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_175:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_175:

/*************lambda-simple code ends here***********/


/*************tc-applic cont173***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_173);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover174);
ADD (R10 , IMM(1));
tc_applic_for_label174:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover174);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label174);
tc_applic_end_param_ranover174:
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
L_Error_cannot_tc_apply_non_closure_173:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_172:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_172:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,60),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_171);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_171:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_83);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_83:
CMP(R4,0);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_44));
JUMP(L_CLOSURE_EXIT_44);
L_CLOSURE_BODY_44:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_82);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_82:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_82);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_82);
EXIT_LOOP_ARGS_82:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_82:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_82);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_82);
EXIT_FIXING_STACK_82:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_82);
NO_OPTIONAL_ARGS_82:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_82:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_82);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_82);
EXIT_NIL_CASE_LOOP_82:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_82:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here45***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_81);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_81:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_81);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_81);
EXIT_LOOP_COPY_81:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_81:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_81);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_81);
EXIT_LOOP_EXTEND_ENV_81:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_47));
JUMP(L_CLOSURE_EXIT_47);
L_CLOSURE_BODY_47:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_47);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_80);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_80:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_80);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_80);
EXIT_LOOP_COPY_80:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_80:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_80);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_80);
EXIT_LOOP_EXTEND_ENV_80:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_55));
JUMP(L_CLOSURE_EXIT_55);
L_CLOSURE_BODY_55:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_55);

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
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE57);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT56);
L_IF3_ELSE57:

/*************tc-applic code starts here58***********/

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

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE61);

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
MOV (R0 ,INDD(FVARARRAY,0));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,42));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL63);
JUMP (FINISH_FVAR_LABEL63);
UNDEF_LABEL63:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL63:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_62);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_62:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT60);
L_IF3_ELSE61:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT60:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont58***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_58);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover59);
ADD (R10 , IMM(1));
tc_applic_for_label59:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover59);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label59);
tc_applic_end_param_ranover59:
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
L_Error_cannot_tc_apply_non_closure_58:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT56:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_55:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_55:

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL52);
JUMP (FINISH_FVAR_LABEL52);
UNDEF_LABEL52:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL52:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_51);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_51:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE49);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT48);
L_IF3_ELSE49:

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
JUMP_NE(L_Error_cannot_apply_non_closure_50);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_50:

/*************applic code ends here***********/

L_IF3_EXIT48:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_47:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_47:

/*************lambda-simple code ends here***********/


/*************tc-applic cont45***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_45);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover46);
ADD (R10 , IMM(1));
tc_applic_for_label46:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover46);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label46);
tc_applic_end_param_ranover46:
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
L_Error_cannot_tc_apply_non_closure_45:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_44:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_44:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,62),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_43);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_43:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_124);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_124:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_124);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_124);
EXIT_LOOP_COPY_124:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_124:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_124);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_124);
EXIT_LOOP_EXTEND_ENV_124:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_85));
JUMP(L_CLOSURE_EXIT_85);
L_CLOSURE_BODY_85:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_123);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_123:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_123);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_123);
EXIT_LOOP_ARGS_123:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_123:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_123);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_123);
EXIT_FIXING_STACK_123:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_123);
NO_OPTIONAL_ARGS_123:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_123:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_123);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_123);
EXIT_NIL_CASE_LOOP_123:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_123:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here86***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_122);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_122:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_122);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_122);
EXIT_LOOP_COPY_122:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_122:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_122);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_122);
EXIT_LOOP_EXTEND_ENV_122:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_88));
JUMP(L_CLOSURE_EXIT_88);
L_CLOSURE_BODY_88:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_88);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_121);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_121:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_121);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_121);
EXIT_LOOP_COPY_121:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_121:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_121);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_121);
EXIT_LOOP_EXTEND_ENV_121:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_96));
JUMP(L_CLOSURE_EXIT_96);
L_CLOSURE_BODY_96:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_96);

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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE98);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT97);
L_IF3_ELSE98:

/*************tc-applic code starts here99***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
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

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE102);

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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL110);
JUMP (FINISH_FVAR_LABEL110);
UNDEF_LABEL110:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL110:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_109);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_109:

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
MOV (R0 ,INDD(FVARARRAY,34));
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

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,43));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL104);
JUMP (FINISH_FVAR_LABEL104);
UNDEF_LABEL104:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL104:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_103);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_103:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT101);
L_IF3_ELSE102:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT101:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont99***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_99);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover100);
ADD (R10 , IMM(1));
tc_applic_for_label100:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover100);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label100);
tc_applic_end_param_ranover100:
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
L_Error_cannot_tc_apply_non_closure_99:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT97:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_96:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_96:

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
JUMP_EQ (UNDEF_LABEL95);
JUMP (FINISH_FVAR_LABEL95);
UNDEF_LABEL95:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL95:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_94);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_94:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL93);
JUMP (FINISH_FVAR_LABEL93);
UNDEF_LABEL93:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL93:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_92);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_92:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE90);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT89);
L_IF3_ELSE90:

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
JUMP_NE(L_Error_cannot_apply_non_closure_91);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_91:

/*************applic code ends here***********/

L_IF3_EXIT89:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_88:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_88:

/*************lambda-simple code ends here***********/


/*************tc-applic cont86***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_86);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover87);
ADD (R10 , IMM(1));
tc_applic_for_label87:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover87);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label87);
tc_applic_end_param_ranover87:
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
L_Error_cannot_tc_apply_non_closure_86:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_85:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_85:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,63),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_84);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_84:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_41);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_41:
CMP(R4,0);
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
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_2));
JUMP(L_CLOSURE_EXIT_2);
L_CLOSURE_BODY_2:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_40);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_40:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_40);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_40);
EXIT_LOOP_ARGS_40:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_40:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_40);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_40);
EXIT_FIXING_STACK_40:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_40);
NO_OPTIONAL_ARGS_40:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_40:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_40);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_40);
EXIT_NIL_CASE_LOOP_40:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_40:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here3***********/
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,3));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_39);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_39:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_39);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_39);
EXIT_LOOP_COPY_39:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_39:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_39);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_39);
EXIT_LOOP_EXTEND_ENV_39:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5));
JUMP(L_CLOSURE_EXIT_5);
L_CLOSURE_BODY_5:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_38);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_38:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_38);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_38);
EXIT_LOOP_COPY_38:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_38:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_38);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_38);
EXIT_LOOP_EXTEND_ENV_38:
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
MOV (R0 ,INDD(FVARARRAY,13));
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

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE15);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT14);
L_IF3_ELSE15:

/*************tc-applic code starts here16***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
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

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE19);

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
MOV (R0 ,INDD(FVARARRAY,0));
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
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
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
JUMP_EQ (UNDEF_LABEL25);
JUMP (FINISH_FVAR_LABEL25);
UNDEF_LABEL25:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL25:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_24);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_24:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL23);
JUMP (FINISH_FVAR_LABEL23);
UNDEF_LABEL23:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL23:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_22);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_22:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,46));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL21);
JUMP (FINISH_FVAR_LABEL21);
UNDEF_LABEL21:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL21:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_20);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_20:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT18);
L_IF3_ELSE19:
MOV (R0 ,INDD(CONSTARRAY,3));

L_IF3_EXIT18:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont16***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_16);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover17);
ADD (R10 , IMM(1));
tc_applic_for_label17:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover17);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label17);
tc_applic_end_param_ranover17:
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
L_Error_cannot_tc_apply_non_closure_16:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT14:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_13:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_13:

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
JUMP_EQ (UNDEF_LABEL12);
JUMP (FINISH_FVAR_LABEL12);
UNDEF_LABEL12:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL12:

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

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL10);
JUMP (FINISH_FVAR_LABEL10);
UNDEF_LABEL10:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL10:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_9);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_9:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE7);
MOV (R0 ,INDD(CONSTARRAY,2));

JUMP (L_IF3_EXIT6);
L_IF3_ELSE7:

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

L_IF3_EXIT6:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5:

/*************lambda-simple code ends here***********/


/*************tc-applic cont3***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_3);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4);
ADD (R10 , IMM(1));
tc_applic_for_label4:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4);
tc_applic_end_param_ranover4:
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
L_Error_cannot_tc_apply_non_closure_3:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_2:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_2:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,64),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_1);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_1:
MOV (R0 ,INDD(CONSTARRAY,16));

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_42);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_42:


STOP_MACHINE;
return 0;
}