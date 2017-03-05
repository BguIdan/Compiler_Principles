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
PUSH(IMM(10));
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
PUSH (77);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,4) , R0);
PUSH (88);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,5) , R0);
PUSH (12);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,6) , R0);
PUSH (13);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,7) , R0);
PUSH (14);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,8) , R0);
PUSH (7);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,9) , R0);

/*************init Const-Table ends here***********/
MOV (R7,SOB_NIL);
PUSH(IMM(1));
CALL (MALLOC);
DROP(1);
MOV (SYMBOLTABLE,R0);
MOV (IND(SYMBOLTABLE) ,R7);

/*************init Fvar-Table start here***********/
PUSH(IMM(19));
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

/*************init Fvar-Table ends here***********/

/*************RS_car starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_car_body));
MOV(INDD(FVARARRAY,1),R0);
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
MOV(INDD(FVARARRAY,2),R0);
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
MOV(INDD(FVARARRAY,0),R0);
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

/*************RS_symbolToString  starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_symbolToString_body));
MOV(INDD(FVARARRAY,14),R0);
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

/*************RS_zero? starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_zero_body));
MOV(INDD(FVARARRAY,15),R0);
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
MOV(INDD(FVARARRAY,16),R0);
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

/*************RS_vector_length starts***********/
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV(INDD(R0,0),T_CLOSURE);
MOV (INDD(R0,1),0x1A85);
MOV(INDD(R0,2),LABEL(RS_LABEL_vector_length_body));
MOV(INDD(FVARARRAY,17),R0);
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
MOV(INDD(FVARARRAY,18),R0);
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

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,9));

PUSH(R0);
PUSH(1);

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_21);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_21:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_21);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_21);
EXIT_LOOP_COPY_21:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_21:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_21);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_21);
EXIT_LOOP_EXTEND_ENV_21:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_1));
JUMP(L_CLOSURE_EXIT_1);
L_CLOSURE_BODY_1:
PUSH(FP);
MOV (FP , SP);
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_20);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_20:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_20);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (INDD(R0,1) , R5);
MOV (R5 , R0);
MOV (INDD(R5,0) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_20);
EXIT_LOOP_ARGS_20:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_20:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_20);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_20);
EXIT_FIXING_STACK_20:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
JUMP(FINAL_20);
NO_OPTIONAL_ARGS_20:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_20:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_20);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_20);
EXIT_NIL_CASE_LOOP_20:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
MOV (SP , FP);
SUB (SP , R4);
FINAL_20:

/*************tc-applic code starts here2***********/
MOV (R0 ,INDD(CONSTARRAY,8));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,7));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,6));

PUSH(R0);
PUSH(3);

/*************lambda-opt code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_19);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_19:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_19);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_19);
EXIT_LOOP_COPY_19:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_19:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_19);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_19);
EXIT_LOOP_EXTEND_ENV_19:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4));
JUMP(L_CLOSURE_EXIT_4);
L_CLOSURE_BODY_4:
PUSH(FP);
MOV (FP , SP);
CMP (FPARG(1) , 2);
JUMP_EQ(NO_OPTIONAL_ARGS_18);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_18:
CMP (R4 ,1);
JUMP_EQ(EXIT_LOOP_ARGS_18);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (INDD(R0,1) , R5);
MOV (R5 , R0);
MOV (INDD(R5,0) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_18);
EXIT_LOOP_ARGS_18:
MOV (FPARG(2 + 2), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 3);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_18:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_18);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_18);
EXIT_FIXING_STACK_18:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
JUMP(FINAL_18);
NO_OPTIONAL_ARGS_18:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_18:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_18);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_18);
EXIT_NIL_CASE_LOOP_18:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
MOV (SP , FP);
SUB (SP , R4);
FINAL_18:

/*************tc-applic code starts here5***********/
PUSH (IMM(0));

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_17);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_17:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_17);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_17);
EXIT_LOOP_COPY_17:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_17:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_17);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_17);
EXIT_LOOP_EXTEND_ENV_17:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_7));
JUMP(L_CLOSURE_EXIT_7);
L_CLOSURE_BODY_7:
PUSH(FP);
MOV (FP , SP);
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_16);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_16:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_16);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (INDD(R0,1) , R5);
MOV (R5 , R0);
MOV (INDD(R5,0) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_16);
EXIT_LOOP_ARGS_16:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_16:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_16);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_16);
EXIT_FIXING_STACK_16:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
JUMP(FINAL_16);




NO_OPTIONAL_ARGS_16:



MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_16:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_16);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_16);
EXIT_NIL_CASE_LOOP_16:




MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
MOV (SP , FP);
SUB (SP , R4);
FINAL_16:

/*************tc-applic code starts here8***********/


SHOW("FPARG0" , FPARG(0)); 
INFO

PUSH (IMM(0));


/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_15);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_15:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_15);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_15);
EXIT_LOOP_COPY_15:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_15:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_15);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_15);
EXIT_LOOP_EXTEND_ENV_15:
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

CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_14);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_14:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_14);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (INDD(R0,1) , R5);
MOV (R5 , R0);
MOV (INDD(R5,0) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_14);
EXIT_LOOP_ARGS_14:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_14:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_14);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_14);
EXIT_FIXING_STACK_14:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
JUMP(FINAL_14);
NO_OPTIONAL_ARGS_14:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_14:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_14);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_14);
EXIT_NIL_CASE_LOOP_14:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
MOV (SP , FP);
SUB (SP , R4);
FINAL_14:
/*************tc-applic code starts here11***********/
MOV (R0 ,INDD(CONSTARRAY,5));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,4));

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV ( R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL13);
JUMP (FINISH_FVAR_LABEL13);
UNDEF_LABEL13:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL13:


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
SHOW("Wrong number of args!!!" , R0);
HALT;
L_CLOSURE_EXIT_10:

/*************lambda-var code ends here***********/
/*we are here*///
/*************tc-applic cont8***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_8);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));


INFO
/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover9);
ADD (R10 , IMM(1));
tc_applic_for_label9:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover9);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label9);




tc_applic_end_param_ranover9:
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
L_Error_cannot_tc_apply_non_closure_8:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_7:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , R0);
HALT;
L_CLOSURE_EXIT_7:

/*************lambda-var code ends here***********/


/*************tc-applic cont5***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover6);
ADD (R10 , IMM(1));
tc_applic_for_label6:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover6);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label6);
tc_applic_end_param_ranover6:
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
L_Error_cannot_tc_apply_non_closure_5:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , R0);
HALT;
L_CLOSURE_EXIT_4:

/*************lambda-opt code ends here***********/


/*************tc-applic cont2***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_2);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover3);
ADD (R10 , IMM(1));
tc_applic_for_label3:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover3);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label3);
tc_applic_end_param_ranover3:
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
L_Error_cannot_tc_apply_non_closure_2:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_1:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , R0);
HALT;
L_CLOSURE_EXIT_1:

/*************lambda-var code ends here***********/

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_0);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_0:

/*************applic code ends here***********/

INFO
STOP_MACHINE;
return 0;
}