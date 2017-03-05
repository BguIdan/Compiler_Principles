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
PUSH(IMM(34));
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
MOV(INDD(CONSTARRAY,182) , R0);
PUSH (1);
CALL (MAKE_SOB_INTEGER);
DROP (1);
MOV(INDD(CONSTARRAY,183) , R0);
PUSH (97);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,184) , R0);
MOV(R1, (INDD(CONSTARRAY,184)));
PUSH (INDD(R1, 1));
PUSH (1);
CALL (MAKE_SOB_STRING)
DROP (1);
MOV(INDD(CONSTARRAY,185) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,185));
MOV (INDD (CONSTARRAY ,186) , R0);

PUSH (98);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,187) , R0);
MOV(R1, (INDD(CONSTARRAY,187)));
PUSH (INDD(R1, 1));
PUSH (1);
CALL (MAKE_SOB_STRING)
DROP (1);
MOV(INDD(CONSTARRAY,188) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,188));
MOV (INDD (CONSTARRAY ,189) , R0);

PUSH (99);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,190) , R0);
MOV(R1, (INDD(CONSTARRAY,190)));
PUSH (INDD(R1, 1));
PUSH (1);
CALL (MAKE_SOB_STRING)
DROP (1);
MOV(INDD(CONSTARRAY,191) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,191));
MOV (INDD (CONSTARRAY ,192) , R0);

PUSH (100);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,193) , R0);
MOV(R1, (INDD(CONSTARRAY,193)));
PUSH (INDD(R1, 1));
PUSH (1);
CALL (MAKE_SOB_STRING)
DROP (1);
MOV(INDD(CONSTARRAY,194) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,194));
MOV (INDD (CONSTARRAY ,195) , R0);

PUSH (101);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,196) , R0);
MOV(R1, (INDD(CONSTARRAY,196)));
PUSH (INDD(R1, 1));
PUSH (1);
CALL (MAKE_SOB_STRING)
DROP (1);
MOV(INDD(CONSTARRAY,197) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,197));
MOV (INDD (CONSTARRAY ,198) , R0);

PUSH (102);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,199) , R0);
MOV(R1, (INDD(CONSTARRAY,199)));
PUSH (INDD(R1, 1));
PUSH (1);
CALL (MAKE_SOB_STRING)
DROP (1);
MOV(INDD(CONSTARRAY,200) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,200));
MOV (INDD (CONSTARRAY ,201) , R0);

PUSH (103);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,202) , R0);
MOV(R1, (INDD(CONSTARRAY,202)));
PUSH (INDD(R1, 1));
PUSH (1);
CALL (MAKE_SOB_STRING)
DROP (1);
MOV(INDD(CONSTARRAY,203) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,203));
MOV (INDD (CONSTARRAY ,204) , R0);

PUSH (50);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,205) , R0);
PUSH (51);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,206) , R0);
PUSH (52);
CALL (MAKE_SOB_CHAR);
DROP (1);
MOV(INDD(CONSTARRAY,207) , R0);
MOV(R1, (INDD(CONSTARRAY,202)));
PUSH (INDD(R1, 1));
MOV(R1, (INDD(CONSTARRAY,205)));
PUSH (INDD(R1, 1));
MOV(R1, (INDD(CONSTARRAY,206)));
PUSH (INDD(R1, 1));
MOV(R1, (INDD(CONSTARRAY,207)));
PUSH (INDD(R1, 1));
PUSH (4);
CALL (MAKE_SOB_STRING)
DROP (4);
MOV(INDD(CONSTARRAY,208) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,208));
MOV (INDD (CONSTARRAY ,209) , R0);

MOV(R1, (INDD(CONSTARRAY,184)));
PUSH (INDD(R1, 1));
MOV(R1, (INDD(CONSTARRAY,187)));
PUSH (INDD(R1, 1));
MOV(R1, (INDD(CONSTARRAY,190)));
PUSH (INDD(R1, 1));
PUSH (3);
CALL (MAKE_SOB_STRING)
DROP (3);
MOV(INDD(CONSTARRAY,210) , R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV(IND(R0) , T_SYMBOL);
		MOV(INDD(R0,1) ,INDD(CONSTARRAY,210));
MOV (INDD (CONSTARRAY ,211) , R0);


/*************init Const-Table ends here***********/

/*************symbol table starts: ***********/
MOV (R7,SOB_NIL);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,210));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,208));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,203));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,200));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,197));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,194));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,191));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,188));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(2));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0 ,0) ,INDD(CONSTARRAY,185));
MOV (INDD (R0,1) , R7);
MOV (R7, R0);
PUSH(IMM(1));
CALL (MALLOC);
DROP(1);
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
MOV (R4 , FPARG(4));
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
JUMP_EQ (tc_applic_end_param_ranover4780);
ADD (R10 , IMM(1));
tc_applic_for_label4780:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4780);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4780);
tc_applic_end_param_ranover4780:
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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5360);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5360:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5360);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5360);
EXIT_LOOP_COPY_5360:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5360:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5360);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5360);
EXIT_LOOP_EXTEND_ENV_5360:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5342));
JUMP(L_CLOSURE_EXIT_5342);
L_CLOSURE_BODY_5342:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5342);

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
JUMP_EQ (UNDEF_LABEL5359);
JUMP (FINISH_FVAR_LABEL5359);
UNDEF_LABEL5359:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5359:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5358);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5358:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5344);

/*************tc-applic code starts here5355***********/
PUSH (IMM(0));

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,36));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5357);
JUMP (FINISH_FVAR_LABEL5357);
UNDEF_LABEL5357:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5357:


/*************tc-applic cont5355***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5355);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5356);
ADD (R10 , IMM(1));
tc_applic_for_label5356:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5356);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5356);
tc_applic_end_param_ranover5356:
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
L_Error_cannot_tc_apply_non_closure_5355:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5343);
L_IF3_ELSE5344:

/*************tc-applic code starts here5345***********/

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
JUMP_EQ (UNDEF_LABEL5354);
JUMP (FINISH_FVAR_LABEL5354);
UNDEF_LABEL5354:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5354:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5353);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5353:

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
JUMP_EQ (UNDEF_LABEL5352);
JUMP (FINISH_FVAR_LABEL5352);
UNDEF_LABEL5352:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5352:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5351);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5351:

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
JUMP_EQ (UNDEF_LABEL5350);
JUMP (FINISH_FVAR_LABEL5350);
UNDEF_LABEL5350:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5350:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5349);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5349:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5348);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5348:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,2));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5347);
JUMP (FINISH_FVAR_LABEL5347);
UNDEF_LABEL5347:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5347:


/*************tc-applic cont5345***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5345);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5346);
ADD (R10 , IMM(1));
tc_applic_for_label5346:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5346);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5346);
tc_applic_end_param_ranover5346:
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
L_Error_cannot_tc_apply_non_closure_5345:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT5343:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5342:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5342:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,48),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5341);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5341:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5376);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5376:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5376);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5376);
EXIT_LOOP_COPY_5376:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5376:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5376);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5376);
EXIT_LOOP_EXTEND_ENV_5376:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5362));
JUMP(L_CLOSURE_EXIT_5362);
L_CLOSURE_BODY_5362:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5362);

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
JUMP_EQ (UNDEF_LABEL5375);
JUMP (FINISH_FVAR_LABEL5375);
UNDEF_LABEL5375:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5375:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5374);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5374:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5364);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT5363);
L_IF3_ELSE5364:

/*************tc-applic code starts here5365***********/

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
JUMP_EQ (UNDEF_LABEL5373);
JUMP (FINISH_FVAR_LABEL5373);
UNDEF_LABEL5373:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5373:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5372);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5372:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,2));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5371);
JUMP (FINISH_FVAR_LABEL5371);
UNDEF_LABEL5371:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5371:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5370);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5370:

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
JUMP_EQ (UNDEF_LABEL5369);
JUMP (FINISH_FVAR_LABEL5369);
UNDEF_LABEL5369:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5369:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5368);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5368:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,51));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5367);
JUMP (FINISH_FVAR_LABEL5367);
UNDEF_LABEL5367:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5367:


/*************tc-applic cont5365***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5365);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5366);
ADD (R10 , IMM(1));
tc_applic_for_label5366:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5366);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5366);
tc_applic_end_param_ranover5366:
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
L_Error_cannot_tc_apply_non_closure_5365:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT5363:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5362:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5362:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,51),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5361);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5361:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5318);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5318:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5318);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5318);
EXIT_LOOP_COPY_5318:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5318:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5318);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5318);
EXIT_LOOP_EXTEND_ENV_5318:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5305));
JUMP(L_CLOSURE_EXIT_5305);
L_CLOSURE_BODY_5305:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5305);

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
JUMP_EQ (UNDEF_LABEL5317);
JUMP (FINISH_FVAR_LABEL5317);
UNDEF_LABEL5317:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5317:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5316);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5316:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5307);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT5306);
L_IF3_ELSE5307:

/*************tc-applic code starts here5308***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 2));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5315);
JUMP (FINISH_FVAR_LABEL5315);
UNDEF_LABEL5315:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5315:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5314);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5314:

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
JUMP_EQ (UNDEF_LABEL5313);
JUMP (FINISH_FVAR_LABEL5313);
UNDEF_LABEL5313:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5313:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5312);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5312:

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
JUMP_NE(L_Error_cannot_apply_non_closure_5311);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5311:

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
JUMP_EQ (UNDEF_LABEL5310);
JUMP (FINISH_FVAR_LABEL5310);
UNDEF_LABEL5310:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5310:


/*************tc-applic cont5308***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5308);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5309);
ADD (R10 , IMM(1));
tc_applic_for_label5309:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5309);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5309);
tc_applic_end_param_ranover5309:
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
L_Error_cannot_tc_apply_non_closure_5308:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT5306:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5305:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5305:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,49),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5304);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5304:

/*************'def' code starts here***********/

/*************lambda-opt code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5340);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5340:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5340);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5340);
EXIT_LOOP_COPY_5340:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5340:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5340);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5340);
EXIT_LOOP_EXTEND_ENV_5340:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5320));
JUMP(L_CLOSURE_EXIT_5320);
L_CLOSURE_BODY_5320:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 1);
JUMP_EQ(NO_OPTIONAL_ARGS_5339);
MOV (R8,FPARG(1)-1- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_5339:
CMP (R4 ,0);
JUMP_EQ(EXIT_LOOP_ARGS_5339);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_5339);
EXIT_LOOP_ARGS_5339:
MOV (FPARG(2 + 1), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 2);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_5339:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_5339);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_5339);
EXIT_FIXING_STACK_5339:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_5339);
NO_OPTIONAL_ARGS_5339:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_5339:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_5339);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_5339);
EXIT_NIL_CASE_LOOP_5339:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_5339:

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
JUMP_EQ (UNDEF_LABEL5338);
JUMP (FINISH_FVAR_LABEL5338);
UNDEF_LABEL5338:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5338:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5337);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5337:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5322);

/*************tc-applic code starts here5334***********/
MOV (R0 ,INDD(CONSTARRAY,182));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,29));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5336);
JUMP (FINISH_FVAR_LABEL5336);
UNDEF_LABEL5336:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5336:


/*************tc-applic cont5334***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5334);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5335);
ADD (R10 , IMM(1));
tc_applic_for_label5335:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5335);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5335);
tc_applic_end_param_ranover5335:
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
L_Error_cannot_tc_apply_non_closure_5334:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5321);
L_IF3_ELSE5322:

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
JUMP_EQ (UNDEF_LABEL5333);
JUMP (FINISH_FVAR_LABEL5333);
UNDEF_LABEL5333:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5333:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5332);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5332:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,6));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5331);
JUMP (FINISH_FVAR_LABEL5331);
UNDEF_LABEL5331:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5331:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5330);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5330:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5324);

/*************tc-applic code starts here5325***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5329);
JUMP (FINISH_FVAR_LABEL5329);
UNDEF_LABEL5329:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5329:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5328);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5328:

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
JUMP_EQ (UNDEF_LABEL5327);
JUMP (FINISH_FVAR_LABEL5327);
UNDEF_LABEL5327:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5327:


/*************tc-applic cont5325***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5325);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5326);
ADD (R10 , IMM(1));
tc_applic_for_label5326:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5326);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5326);
tc_applic_end_param_ranover5326:
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
L_Error_cannot_tc_apply_non_closure_5325:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5323);
L_IF3_ELSE5324:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5323:

/*************if3 code ends here***********/

L_IF3_EXIT5321:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5320:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5320:

/*************lambda-opt code ends here***********/
MOV(INDD(FVARARRAY,50),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5319);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5319:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5280);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5280:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5280);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5280);
EXIT_LOOP_COPY_5280:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5280:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5280);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5280);
EXIT_LOOP_EXTEND_ENV_5280:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5230));
JUMP(L_CLOSURE_EXIT_5230);
L_CLOSURE_BODY_5230:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5230);

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
JUMP_EQ (UNDEF_LABEL5279);
JUMP (FINISH_FVAR_LABEL5279);
UNDEF_LABEL5279:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5279:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5278);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5278:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5232);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT5231);
L_IF3_ELSE5232:

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
JUMP_EQ (UNDEF_LABEL5277);
JUMP (FINISH_FVAR_LABEL5277);
UNDEF_LABEL5277:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5277:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5276);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5276:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5234);

/*************tc-applic code starts here5269***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5275);
JUMP (FINISH_FVAR_LABEL5275);
UNDEF_LABEL5275:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5275:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5274);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5274:

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
JUMP_EQ (UNDEF_LABEL5273);
JUMP (FINISH_FVAR_LABEL5273);
UNDEF_LABEL5273:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5273:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5272);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5272:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,53));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5271);
JUMP (FINISH_FVAR_LABEL5271);
UNDEF_LABEL5271:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5271:


/*************tc-applic cont5269***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5269);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5270);
ADD (R10 , IMM(1));
tc_applic_for_label5270:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5270);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5270);
tc_applic_end_param_ranover5270:
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
L_Error_cannot_tc_apply_non_closure_5269:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5233);
L_IF3_ELSE5234:

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
JUMP_EQ (UNDEF_LABEL5268);
JUMP (FINISH_FVAR_LABEL5268);
UNDEF_LABEL5268:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5268:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5267);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5267:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5266);
JUMP (FINISH_FVAR_LABEL5266);
UNDEF_LABEL5266:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5266:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5265);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5265:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,17));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5264);
JUMP (FINISH_FVAR_LABEL5264);
UNDEF_LABEL5264:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5264:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5263);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5263:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5258);

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
JUMP_EQ (UNDEF_LABEL5262);
JUMP (FINISH_FVAR_LABEL5262);
UNDEF_LABEL5262:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5262:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5261);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5261:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5260);
JUMP (FINISH_FVAR_LABEL5260);
UNDEF_LABEL5260:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5260:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5259);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5259:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5257);
L_IF3_ELSE5258:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5257:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5236);

/*************tc-applic code starts here5252***********/

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
JUMP_EQ (UNDEF_LABEL5256);
JUMP (FINISH_FVAR_LABEL5256);
UNDEF_LABEL5256:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5256:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5255);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5255:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,53));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5254);
JUMP (FINISH_FVAR_LABEL5254);
UNDEF_LABEL5254:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5254:


/*************tc-applic cont5252***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5252);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5253);
ADD (R10 , IMM(1));
tc_applic_for_label5253:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5253);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5253);
tc_applic_end_param_ranover5253:
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
L_Error_cannot_tc_apply_non_closure_5252:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5235);
L_IF3_ELSE5236:

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
JUMP_EQ (UNDEF_LABEL5251);
JUMP (FINISH_FVAR_LABEL5251);
UNDEF_LABEL5251:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5251:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5250);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5250:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5249);
JUMP (FINISH_FVAR_LABEL5249);
UNDEF_LABEL5249:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5249:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5248);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5248:

/*************applic code ends here***********/

/*************tc-applic code starts here5237***********/

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
JUMP_EQ (UNDEF_LABEL5247);
JUMP (FINISH_FVAR_LABEL5247);
UNDEF_LABEL5247:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5247:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5246);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5246:

/*************applic code ends here***********/

PUSH(R0);

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,178));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,51));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5245);
JUMP (FINISH_FVAR_LABEL5245);
UNDEF_LABEL5245:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5245:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5244);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5244:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,32));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5243);
JUMP (FINISH_FVAR_LABEL5243);
UNDEF_LABEL5243:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5243:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5242);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5242:

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
JUMP_EQ (UNDEF_LABEL5241);
JUMP (FINISH_FVAR_LABEL5241);
UNDEF_LABEL5241:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5241:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5240);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5240:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,53));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5239);
JUMP (FINISH_FVAR_LABEL5239);
UNDEF_LABEL5239:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5239:


/*************tc-applic cont5237***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5237);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5238);
ADD (R10 , IMM(1));
tc_applic_for_label5238:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5238);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5238);
tc_applic_end_param_ranover5238:
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
L_Error_cannot_tc_apply_non_closure_5237:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/

L_IF3_EXIT5235:

/*************if3 code ends here***********/

L_IF3_EXIT5233:

/*************if3 code ends here***********/

L_IF3_EXIT5231:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5230:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5230:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,53),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5229);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5229:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5303);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5303:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5303);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5303);
EXIT_LOOP_COPY_5303:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5303:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5303);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5303);
EXIT_LOOP_EXTEND_ENV_5303:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5282));
JUMP(L_CLOSURE_EXIT_5282);
L_CLOSURE_BODY_5282:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_5302);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_5302:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_5302);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_5302);
EXIT_LOOP_ARGS_5302:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_5302:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_5302);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_5302);
EXIT_FIXING_STACK_5302:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_5302);
NO_OPTIONAL_ARGS_5302:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_5302:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_5302);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_5302);
EXIT_NIL_CASE_LOOP_5302:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_5302:

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
JUMP_EQ (UNDEF_LABEL5301);
JUMP (FINISH_FVAR_LABEL5301);
UNDEF_LABEL5301:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5301:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5300);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5300:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5284);

/*************tc-applic code starts here5297***********/
PUSH (IMM(0));

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,36));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5299);
JUMP (FINISH_FVAR_LABEL5299);
UNDEF_LABEL5299:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5299:


/*************tc-applic cont5297***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5297);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5298);
ADD (R10 , IMM(1));
tc_applic_for_label5298:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5298);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5298);
tc_applic_end_param_ranover5298:
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
L_Error_cannot_tc_apply_non_closure_5297:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5283);
L_IF3_ELSE5284:

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
JUMP_EQ (UNDEF_LABEL5296);
JUMP (FINISH_FVAR_LABEL5296);
UNDEF_LABEL5296:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5296:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5295);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5295:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5294);
JUMP (FINISH_FVAR_LABEL5294);
UNDEF_LABEL5294:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5294:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5293);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5293:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5286);

/*************tc-applic code starts here5290***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5292);
JUMP (FINISH_FVAR_LABEL5292);
UNDEF_LABEL5292:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5292:


/*************tc-applic cont5290***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5290);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5291);
ADD (R10 , IMM(1));
tc_applic_for_label5291:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5291);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5291);
tc_applic_end_param_ranover5291:
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
L_Error_cannot_tc_apply_non_closure_5290:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5285);
L_IF3_ELSE5286:

/*************tc-applic code starts here5287***********/
MOV (R0 ,INDD(CONSTARRAY,178));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,53));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5289);
JUMP (FINISH_FVAR_LABEL5289);
UNDEF_LABEL5289:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5289:


/*************tc-applic cont5287***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5287);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5288);
ADD (R10 , IMM(1));
tc_applic_for_label5288:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5288);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5288);
tc_applic_end_param_ranover5288:
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
L_Error_cannot_tc_apply_non_closure_5287:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT5285:

/*************if3 code ends here***********/

L_IF3_EXIT5283:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5282:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5282:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,52),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5281);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5281:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5219);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5219:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5219);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5219);
EXIT_LOOP_COPY_5219:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5219:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5219);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5219);
EXIT_LOOP_EXTEND_ENV_5219:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5215));
JUMP(L_CLOSURE_EXIT_5215);
L_CLOSURE_BODY_5215:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5215);

/*************tc-applic code starts here5216***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,55));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5218);
JUMP (FINISH_FVAR_LABEL5218);
UNDEF_LABEL5218:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5218:


/*************tc-applic cont5216***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5216);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5217);
ADD (R10 , IMM(1));
tc_applic_for_label5217:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5217);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5217);
tc_applic_end_param_ranover5217:
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
L_Error_cannot_tc_apply_non_closure_5216:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5215:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5215:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,54),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5214);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5214:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5228);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5228:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5228);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5228);
EXIT_LOOP_COPY_5228:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5228:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5228);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5228);
EXIT_LOOP_EXTEND_ENV_5228:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5221));
JUMP(L_CLOSURE_EXIT_5221);
L_CLOSURE_BODY_5221:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5221);

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
JUMP_EQ (UNDEF_LABEL5227);
JUMP (FINISH_FVAR_LABEL5227);
UNDEF_LABEL5227:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5227:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5226);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5226:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5222);

/*************tc-applic code starts here5223***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5225);
JUMP (FINISH_FVAR_LABEL5225);
UNDEF_LABEL5225:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5225:


/*************tc-applic cont5223***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5223);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5224);
ADD (R10 , IMM(1));
tc_applic_for_label5224:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5224);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5224);
tc_applic_end_param_ranover5224:
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
L_Error_cannot_tc_apply_non_closure_5223:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5222);
L_OR_EXIT5222:

/*************or code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5221:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5221:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,55),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5220);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5220:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5201);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5201:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5201);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5201);
EXIT_LOOP_COPY_5201:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5201:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5201);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5201);
EXIT_LOOP_EXTEND_ENV_5201:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5128));
JUMP(L_CLOSURE_EXIT_5128);
L_CLOSURE_BODY_5128:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5128);

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
JUMP_EQ (UNDEF_LABEL5200);
JUMP (FINISH_FVAR_LABEL5200);
UNDEF_LABEL5200:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5200:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5199);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5199:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5196);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,7));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5198);
JUMP (FINISH_FVAR_LABEL5198);
UNDEF_LABEL5198:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5198:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5197);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5197:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5195);
L_IF3_ELSE5196:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5195:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5176);

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
JUMP_EQ (UNDEF_LABEL5194);
JUMP (FINISH_FVAR_LABEL5194);
UNDEF_LABEL5194:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5194:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5193);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5193:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5190);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,15));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5192);
JUMP (FINISH_FVAR_LABEL5192);
UNDEF_LABEL5192:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5192:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5191);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5191:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5189);
L_IF3_ELSE5190:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5189:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5176);

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
JUMP_EQ (UNDEF_LABEL5188);
JUMP (FINISH_FVAR_LABEL5188);
UNDEF_LABEL5188:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5188:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5187);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5187:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5184);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,6));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5186);
JUMP (FINISH_FVAR_LABEL5186);
UNDEF_LABEL5186:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5186:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5185);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5185:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5183);
L_IF3_ELSE5184:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5183:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5176);

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
JUMP_EQ (UNDEF_LABEL5182);
JUMP (FINISH_FVAR_LABEL5182);
UNDEF_LABEL5182:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5182:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5181);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5181:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5178);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,11));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5180);
JUMP (FINISH_FVAR_LABEL5180);
UNDEF_LABEL5180:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5180:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5179);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5179:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5177);
L_IF3_ELSE5178:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5177:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5176);
L_OR_EXIT5176:

/*************or code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5130);

/*************tc-applic code starts here5173***********/

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
JUMP_EQ (UNDEF_LABEL5175);
JUMP (FINISH_FVAR_LABEL5175);
UNDEF_LABEL5175:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5175:


/*************tc-applic cont5173***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5173);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5174);
ADD (R10 , IMM(1));
tc_applic_for_label5174:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5174);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5174);
tc_applic_end_param_ranover5174:
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
L_Error_cannot_tc_apply_non_closure_5173:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5129);
L_IF3_ELSE5130:

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
JUMP_EQ (UNDEF_LABEL5172);
JUMP (FINISH_FVAR_LABEL5172);
UNDEF_LABEL5172:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5172:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5171);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5171:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5168);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5170);
JUMP (FINISH_FVAR_LABEL5170);
UNDEF_LABEL5170:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5170:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5169);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5169:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5167);
L_IF3_ELSE5168:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5167:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5136);

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
JUMP_EQ (UNDEF_LABEL5166);
JUMP (FINISH_FVAR_LABEL5166);
UNDEF_LABEL5166:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5166:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5165);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5165:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5162);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,14));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5164);
JUMP (FINISH_FVAR_LABEL5164);
UNDEF_LABEL5164:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5164:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5163);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5163:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5161);
L_IF3_ELSE5162:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5161:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5136);

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
JUMP_EQ (UNDEF_LABEL5160);
JUMP (FINISH_FVAR_LABEL5160);
UNDEF_LABEL5160:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5160:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5159);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5159:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5156);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,5));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5158);
JUMP (FINISH_FVAR_LABEL5158);
UNDEF_LABEL5158:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5158:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5157);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5157:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5155);
L_IF3_ELSE5156:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5155:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5136);

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
JUMP_EQ (UNDEF_LABEL5154);
JUMP (FINISH_FVAR_LABEL5154);
UNDEF_LABEL5154:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5154:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5153);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5153:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5150);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,10));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5152);
JUMP (FINISH_FVAR_LABEL5152);
UNDEF_LABEL5152:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5152:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5151);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5151:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5149);
L_IF3_ELSE5150:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5149:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5136);

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
JUMP_EQ (UNDEF_LABEL5148);
JUMP (FINISH_FVAR_LABEL5148);
UNDEF_LABEL5148:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5148:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5147);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5147:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5144);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,12));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5146);
JUMP (FINISH_FVAR_LABEL5146);
UNDEF_LABEL5146:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5146:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5145);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5145:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5143);
L_IF3_ELSE5144:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5143:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5136);

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
JUMP_EQ (UNDEF_LABEL5142);
JUMP (FINISH_FVAR_LABEL5142);
UNDEF_LABEL5142:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5142:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5141);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5141:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5138);

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,8));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5140);
JUMP (FINISH_FVAR_LABEL5140);
UNDEF_LABEL5140:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5140:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5139);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5139:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT5137);
L_IF3_ELSE5138:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5137:

/*************if3 code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_NE (L_OR_EXIT5136);
L_OR_EXIT5136:

/*************or code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5132);

/*************tc-applic code starts here5133***********/

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
JUMP_EQ (UNDEF_LABEL5135);
JUMP (FINISH_FVAR_LABEL5135);
UNDEF_LABEL5135:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5135:


/*************tc-applic cont5133***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5133);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5134);
ADD (R10 , IMM(1));
tc_applic_for_label5134:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5134);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5134);
tc_applic_end_param_ranover5134:
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
L_Error_cannot_tc_apply_non_closure_5133:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5131);
L_IF3_ELSE5132:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT5131:

/*************if3 code ends here***********/

L_IF3_EXIT5129:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5128:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5128:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,56),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5127);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5127:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5213);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5213:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5213);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5213);
EXIT_LOOP_COPY_5213:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5213:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5213);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5213);
EXIT_LOOP_EXTEND_ENV_5213:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5203));
JUMP(L_CLOSURE_EXIT_5203);
L_CLOSURE_BODY_5203:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5203);

/*************if3 code starts here***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,182));

PUSH(R0);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,56));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5212);
JUMP (FINISH_FVAR_LABEL5212);
UNDEF_LABEL5212:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5212:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5211);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5211:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5205);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT5204);
L_IF3_ELSE5205:

/*************tc-applic code starts here5206***********/

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
JUMP_EQ (UNDEF_LABEL5210);
JUMP (FINISH_FVAR_LABEL5210);
UNDEF_LABEL5210:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5210:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5209);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5209:

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
JUMP_EQ (UNDEF_LABEL5208);
JUMP (FINISH_FVAR_LABEL5208);
UNDEF_LABEL5208:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5208:


/*************tc-applic cont5206***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5206);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5207);
ADD (R10 , IMM(1));
tc_applic_for_label5207:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5207);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5207);
tc_applic_end_param_ranover5207:
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
L_Error_cannot_tc_apply_non_closure_5206:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT5204:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5203:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5203:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,57),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5202);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5202:

/*************'def' code starts here***********/

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5080);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5080:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5080);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5080);
EXIT_LOOP_COPY_5080:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5080:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5080);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5080);
EXIT_LOOP_EXTEND_ENV_5080:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5058));
JUMP(L_CLOSURE_EXIT_5058);
L_CLOSURE_BODY_5058:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5058);

/*************tc-applic code starts here5059***********/
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
PUSH(3);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5079);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5079:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_5079);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5079);
EXIT_LOOP_COPY_5079:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5079:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5079);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5079);
EXIT_LOOP_EXTEND_ENV_5079:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5061));
JUMP(L_CLOSURE_EXIT_5061);
L_CLOSURE_BODY_5061:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(3));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5061);

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
JUMP_EQ (UNDEF_LABEL5078);
JUMP (FINISH_FVAR_LABEL5078);
UNDEF_LABEL5078:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5078:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5077);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5077:

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
JUMP_EQ (UNDEF_LABEL5076);
JUMP (FINISH_FVAR_LABEL5076);
UNDEF_LABEL5076:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5076:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5075);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5075:

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
JUMP_EQ (UNDEF_LABEL5074);
JUMP (FINISH_FVAR_LABEL5074);
UNDEF_LABEL5074:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5074:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5073);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5073:

/*************applic code ends here***********/
MOV(FPARG(4),R0);
MOV (R0,SOB_VOID);

/*************if3 code starts here***********/

/*************applic code starts here***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,183));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5072);
JUMP (FINISH_FVAR_LABEL5072);
UNDEF_LABEL5072:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5072:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5071);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5071:

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
JUMP_EQ (UNDEF_LABEL5070);
JUMP (FINISH_FVAR_LABEL5070);
UNDEF_LABEL5070:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5070:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5069);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5069:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,46));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5068);
JUMP (FINISH_FVAR_LABEL5068);
UNDEF_LABEL5068:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5068:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5067);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5067:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5063);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT5062);
L_IF3_ELSE5063:

/*************tc-applic code starts here5064***********/

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
JUMP_EQ (UNDEF_LABEL5066);
JUMP (FINISH_FVAR_LABEL5066);
UNDEF_LABEL5066:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5066:


/*************tc-applic cont5064***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5064);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5065);
ADD (R10 , IMM(1));
tc_applic_for_label5065:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5065);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5065);
tc_applic_end_param_ranover5065:
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
L_Error_cannot_tc_apply_non_closure_5064:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT5062:

/*************if3 code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5061:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5061:

/*************lambda-simple code ends here***********/


/*************tc-applic cont5059***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5059);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5060);
ADD (R10 , IMM(1));
tc_applic_for_label5060:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5060);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5060);
tc_applic_end_param_ranover5060:
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
L_Error_cannot_tc_apply_non_closure_5059:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5058:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5058:

/*************lambda-simple code ends here***********/
MOV(INDD(FVARARRAY,62),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5057);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5057:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5126);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5126:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5126);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5126);
EXIT_LOOP_COPY_5126:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5126:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5126);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5126);
EXIT_LOOP_EXTEND_ENV_5126:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5082));
JUMP(L_CLOSURE_EXIT_5082);
L_CLOSURE_BODY_5082:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_5125);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_5125:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_5125);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_5125);
EXIT_LOOP_ARGS_5125:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_5125:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_5125);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_5125);
EXIT_FIXING_STACK_5125:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_5125);
NO_OPTIONAL_ARGS_5125:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_5125:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_5125);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_5125);
EXIT_NIL_CASE_LOOP_5125:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_5125:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here5083***********/
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5124);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5124:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_5124);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5124);
EXIT_LOOP_COPY_5124:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5124:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5124);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5124);
EXIT_LOOP_EXTEND_ENV_5124:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5085));
JUMP(L_CLOSURE_EXIT_5085);
L_CLOSURE_BODY_5085:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5085);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5123);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5123:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_5123);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5123);
EXIT_LOOP_COPY_5123:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5123:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5123);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5123);
EXIT_LOOP_EXTEND_ENV_5123:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5090));
JUMP(L_CLOSURE_EXIT_5090);
L_CLOSURE_BODY_5090:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5090);

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
JUMP_EQ (UNDEF_LABEL5122);
JUMP (FINISH_FVAR_LABEL5122);
UNDEF_LABEL5122:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5122:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5121);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5121:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5092);

/*************tc-applic code starts here5118***********/
MOV (R0 ,INDD(CONSTARRAY,182));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5120);
JUMP (FINISH_FVAR_LABEL5120);
UNDEF_LABEL5120:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5120:


/*************tc-applic cont5118***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5118);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5119);
ADD (R10 , IMM(1));
tc_applic_for_label5119:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5119);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5119);
tc_applic_end_param_ranover5119:
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
L_Error_cannot_tc_apply_non_closure_5118:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5091);
L_IF3_ELSE5092:

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
JUMP_EQ (UNDEF_LABEL5117);
JUMP (FINISH_FVAR_LABEL5117);
UNDEF_LABEL5117:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5117:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5116);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5116:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5115);
JUMP (FINISH_FVAR_LABEL5115);
UNDEF_LABEL5115:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5115:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5114);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5114:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5094);

/*************tc-applic code starts here5105***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,182));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5113);
JUMP (FINISH_FVAR_LABEL5113);
UNDEF_LABEL5113:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5113:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5112);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5112:

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
JUMP_EQ (UNDEF_LABEL5111);
JUMP (FINISH_FVAR_LABEL5111);
UNDEF_LABEL5111:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5111:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5110);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5110:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5109);
JUMP (FINISH_FVAR_LABEL5109);
UNDEF_LABEL5109:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5109:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5108);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5108:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,40));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5107);
JUMP (FINISH_FVAR_LABEL5107);
UNDEF_LABEL5107:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5107:


/*************tc-applic cont5105***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5105);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5106);
ADD (R10 , IMM(1));
tc_applic_for_label5106:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5106);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5106);
tc_applic_end_param_ranover5106:
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
L_Error_cannot_tc_apply_non_closure_5105:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5093);
L_IF3_ELSE5094:

/*************tc-applic code starts here5095***********/

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
JUMP_EQ (UNDEF_LABEL5104);
JUMP (FINISH_FVAR_LABEL5104);
UNDEF_LABEL5104:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5104:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5103);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5103:

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
JUMP_NE(L_Error_cannot_apply_non_closure_5102);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5102:

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
JUMP_EQ (UNDEF_LABEL5101);
JUMP (FINISH_FVAR_LABEL5101);
UNDEF_LABEL5101:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5101:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5100);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5100:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5099);
JUMP (FINISH_FVAR_LABEL5099);
UNDEF_LABEL5099:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5099:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5098);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5098:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,40));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5097);
JUMP (FINISH_FVAR_LABEL5097);
UNDEF_LABEL5097:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5097:


/*************tc-applic cont5095***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5095);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5096);
ADD (R10 , IMM(1));
tc_applic_for_label5096:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5096);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5096);
tc_applic_end_param_ranover5096:
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
L_Error_cannot_tc_apply_non_closure_5095:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT5093:

/*************if3 code ends here***********/

L_IF3_EXIT5091:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5090:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5090:

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
JUMP_NE(L_Error_cannot_apply_non_closure_5089);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5089:

/*************applic code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here5086***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,62));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5088);
JUMP (FINISH_FVAR_LABEL5088);
UNDEF_LABEL5088:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5088:


/*************tc-applic cont5086***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5086);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5087);
ADD (R10 , IMM(1));
tc_applic_for_label5087:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5087);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5087);
tc_applic_end_param_ranover5087:
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
L_Error_cannot_tc_apply_non_closure_5086:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5085:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5085:

/*************lambda-simple code ends here***********/


/*************tc-applic cont5083***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5083);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5084);
ADD (R10 , IMM(1));
tc_applic_for_label5084:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5084);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5084);
tc_applic_end_param_ranover5084:
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
L_Error_cannot_tc_apply_non_closure_5083:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5082:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5082:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,58),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5081);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5081:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5010);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5010:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5010);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5010);
EXIT_LOOP_COPY_5010:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5010:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5010);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5010);
EXIT_LOOP_EXTEND_ENV_5010:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4960));
JUMP(L_CLOSURE_EXIT_4960);
L_CLOSURE_BODY_4960:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_5009);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_5009:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_5009);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_5009);
EXIT_LOOP_ARGS_5009:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_5009:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_5009);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_5009);
EXIT_FIXING_STACK_5009:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_5009);
NO_OPTIONAL_ARGS_5009:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_5009:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_5009);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_5009);
EXIT_NIL_CASE_LOOP_5009:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_5009:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here4961***********/
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5008);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5008:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_5008);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5008);
EXIT_LOOP_COPY_5008:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5008:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5008);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5008);
EXIT_LOOP_EXTEND_ENV_5008:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4963));
JUMP(L_CLOSURE_EXIT_4963);
L_CLOSURE_BODY_4963:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_4963);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5007);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5007:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_5007);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5007);
EXIT_LOOP_COPY_5007:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5007:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5007);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5007);
EXIT_LOOP_EXTEND_ENV_5007:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4979));
JUMP(L_CLOSURE_EXIT_4979);
L_CLOSURE_BODY_4979:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_4979);

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
JUMP_EQ (UNDEF_LABEL5006);
JUMP (FINISH_FVAR_LABEL5006);
UNDEF_LABEL5006:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5006:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5005);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5005:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5004);
JUMP (FINISH_FVAR_LABEL5004);
UNDEF_LABEL5004:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5004:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5003);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5003:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4981);

/*************tc-applic code starts here4994***********/

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
JUMP_EQ (UNDEF_LABEL5002);
JUMP (FINISH_FVAR_LABEL5002);
UNDEF_LABEL5002:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5002:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5001);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5001:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5000);
JUMP (FINISH_FVAR_LABEL5000);
UNDEF_LABEL5000:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5000:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4999);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4999:

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
JUMP_EQ (UNDEF_LABEL4998);
JUMP (FINISH_FVAR_LABEL4998);
UNDEF_LABEL4998:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4998:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4997);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4997:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,41));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4996);
JUMP (FINISH_FVAR_LABEL4996);
UNDEF_LABEL4996:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4996:


/*************tc-applic cont4994***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4994);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4995);
ADD (R10 , IMM(1));
tc_applic_for_label4995:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4995);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4995);
tc_applic_end_param_ranover4995:
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
L_Error_cannot_tc_apply_non_closure_4994:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT4980);
L_IF3_ELSE4981:

/*************tc-applic code starts here4982***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4993);
JUMP (FINISH_FVAR_LABEL4993);
UNDEF_LABEL4993:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4993:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4992);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4992:

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
JUMP_EQ (UNDEF_LABEL4991);
JUMP (FINISH_FVAR_LABEL4991);
UNDEF_LABEL4991:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4991:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4990);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4990:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4989);
JUMP (FINISH_FVAR_LABEL4989);
UNDEF_LABEL4989:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4989:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4988);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4988:

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
JUMP_EQ (UNDEF_LABEL4987);
JUMP (FINISH_FVAR_LABEL4987);
UNDEF_LABEL4987:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4987:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4986);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4986:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,41));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4985);
JUMP (FINISH_FVAR_LABEL4985);
UNDEF_LABEL4985:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4985:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4984);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4984:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont4982***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4982);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4983);
ADD (R10 , IMM(1));
tc_applic_for_label4983:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4983);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4983);
tc_applic_end_param_ranover4983:
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
L_Error_cannot_tc_apply_non_closure_4982:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT4980:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4979:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4979:

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
JUMP_EQ (UNDEF_LABEL4978);
JUMP (FINISH_FVAR_LABEL4978);
UNDEF_LABEL4978:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4978:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4977);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4977:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4976);
JUMP (FINISH_FVAR_LABEL4976);
UNDEF_LABEL4976:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4976:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4975);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4975:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4968);

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,182));

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4974);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4974:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT4967);
L_IF3_ELSE4968:

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
JUMP_EQ (UNDEF_LABEL4973);
JUMP (FINISH_FVAR_LABEL4973);
UNDEF_LABEL4973:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4973:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4972);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4972:

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
JUMP_EQ (UNDEF_LABEL4971);
JUMP (FINISH_FVAR_LABEL4971);
UNDEF_LABEL4971:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4971:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4970);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4970:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4969);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4969:

/*************applic code ends here***********/

L_IF3_EXIT4967:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here4964***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,62));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4966);
JUMP (FINISH_FVAR_LABEL4966);
UNDEF_LABEL4966:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4966:


/*************tc-applic cont4964***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4964);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4965);
ADD (R10 , IMM(1));
tc_applic_for_label4965:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4965);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4965);
tc_applic_end_param_ranover4965:
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
L_Error_cannot_tc_apply_non_closure_4964:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4963:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4963:

/*************lambda-simple code ends here***********/


/*************tc-applic cont4961***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4961);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4962);
ADD (R10 , IMM(1));
tc_applic_for_label4962:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4962);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4962);
tc_applic_end_param_ranover4962:
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
L_Error_cannot_tc_apply_non_closure_4961:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4960:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4960:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,59),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_4959);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_4959:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5056);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5056:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_5056);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5056);
EXIT_LOOP_COPY_5056:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5056:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5056);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5056);
EXIT_LOOP_EXTEND_ENV_5056:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5012));
JUMP(L_CLOSURE_EXIT_5012);
L_CLOSURE_BODY_5012:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_5055);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_5055:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_5055);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_5055);
EXIT_LOOP_ARGS_5055:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_5055:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_5055);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_5055);
EXIT_FIXING_STACK_5055:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_5055);
NO_OPTIONAL_ARGS_5055:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_5055:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_5055);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_5055);
EXIT_NIL_CASE_LOOP_5055:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_5055:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here5013***********/
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5054);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5054:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_5054);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5054);
EXIT_LOOP_COPY_5054:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5054:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5054);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5054);
EXIT_LOOP_EXTEND_ENV_5054:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5015));
JUMP(L_CLOSURE_EXIT_5015);
L_CLOSURE_BODY_5015:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5015);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_5053);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_5053:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_5053);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_5053);
EXIT_LOOP_COPY_5053:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_5053:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_5053);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_5053);
EXIT_LOOP_EXTEND_ENV_5053:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_5020));
JUMP(L_CLOSURE_EXIT_5020);
L_CLOSURE_BODY_5020:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(1));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_5020);

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
JUMP_EQ (UNDEF_LABEL5052);
JUMP (FINISH_FVAR_LABEL5052);
UNDEF_LABEL5052:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5052:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5051);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5051:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5022);

/*************tc-applic code starts here5048***********/
MOV (R0 ,INDD(CONSTARRAY,183));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5050);
JUMP (FINISH_FVAR_LABEL5050);
UNDEF_LABEL5050:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5050:


/*************tc-applic cont5048***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5048);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5049);
ADD (R10 , IMM(1));
tc_applic_for_label5049:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5049);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5049);
tc_applic_end_param_ranover5049:
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
L_Error_cannot_tc_apply_non_closure_5048:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5021);
L_IF3_ELSE5022:

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
JUMP_EQ (UNDEF_LABEL5047);
JUMP (FINISH_FVAR_LABEL5047);
UNDEF_LABEL5047:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5047:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5046);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5046:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5045);
JUMP (FINISH_FVAR_LABEL5045);
UNDEF_LABEL5045:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5045:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5044);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5044:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE5024);

/*************tc-applic code starts here5035***********/

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,183));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5043);
JUMP (FINISH_FVAR_LABEL5043);
UNDEF_LABEL5043:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5043:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5042);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5042:

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
JUMP_EQ (UNDEF_LABEL5041);
JUMP (FINISH_FVAR_LABEL5041);
UNDEF_LABEL5041:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5041:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5040);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5040:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5039);
JUMP (FINISH_FVAR_LABEL5039);
UNDEF_LABEL5039:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5039:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5038);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5038:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,45));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5037);
JUMP (FINISH_FVAR_LABEL5037);
UNDEF_LABEL5037:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5037:


/*************tc-applic cont5035***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5035);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5036);
ADD (R10 , IMM(1));
tc_applic_for_label5036:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5036);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5036);
tc_applic_end_param_ranover5036:
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
L_Error_cannot_tc_apply_non_closure_5035:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT5023);
L_IF3_ELSE5024:

/*************tc-applic code starts here5025***********/

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
JUMP_EQ (UNDEF_LABEL5034);
JUMP (FINISH_FVAR_LABEL5034);
UNDEF_LABEL5034:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5034:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5033);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5033:

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
JUMP_NE(L_Error_cannot_apply_non_closure_5032);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5032:

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
JUMP_EQ (UNDEF_LABEL5031);
JUMP (FINISH_FVAR_LABEL5031);
UNDEF_LABEL5031:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5031:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5030);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5030:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5029);
JUMP (FINISH_FVAR_LABEL5029);
UNDEF_LABEL5029:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5029:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_5028);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5028:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,45));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5027);
JUMP (FINISH_FVAR_LABEL5027);
UNDEF_LABEL5027:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5027:


/*************tc-applic cont5025***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5025);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5026);
ADD (R10 , IMM(1));
tc_applic_for_label5026:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5026);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5026);
tc_applic_end_param_ranover5026:
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
L_Error_cannot_tc_apply_non_closure_5025:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT5023:

/*************if3 code ends here***********/

L_IF3_EXIT5021:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5020:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5020:

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
JUMP_NE(L_Error_cannot_apply_non_closure_5019);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_5019:

/*************applic code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here5016***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,62));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL5018);
JUMP (FINISH_FVAR_LABEL5018);
UNDEF_LABEL5018:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL5018:


/*************tc-applic cont5016***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5016);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5017);
ADD (R10 , IMM(1));
tc_applic_for_label5017:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5017);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5017);
tc_applic_end_param_ranover5017:
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
L_Error_cannot_tc_apply_non_closure_5016:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5015:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5015:

/*************lambda-simple code ends here***********/


/*************tc-applic cont5013***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_5013);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover5014);
ADD (R10 , IMM(1));
tc_applic_for_label5014:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover5014);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label5014);
tc_applic_end_param_ranover5014:
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
L_Error_cannot_tc_apply_non_closure_5013:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_5012:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_5012:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,60),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_5011);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_5011:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4917);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4917:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_4917);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4917);
EXIT_LOOP_COPY_4917:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4917:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4917);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4917);
EXIT_LOOP_EXTEND_ENV_4917:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4867));
JUMP(L_CLOSURE_EXIT_4867);
L_CLOSURE_BODY_4867:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_4916);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_4916:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_4916);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_4916);
EXIT_LOOP_ARGS_4916:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_4916:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_4916);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_4916);
EXIT_FIXING_STACK_4916:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_4916);
NO_OPTIONAL_ARGS_4916:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_4916:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_4916);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_4916);
EXIT_NIL_CASE_LOOP_4916:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_4916:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here4868***********/
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4915);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4915:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_4915);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4915);
EXIT_LOOP_COPY_4915:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4915:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4915);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4915);
EXIT_LOOP_EXTEND_ENV_4915:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4870));
JUMP(L_CLOSURE_EXIT_4870);
L_CLOSURE_BODY_4870:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_4870);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4914);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4914:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_4914);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4914);
EXIT_LOOP_COPY_4914:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4914:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4914);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4914);
EXIT_LOOP_EXTEND_ENV_4914:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4886));
JUMP(L_CLOSURE_EXIT_4886);
L_CLOSURE_BODY_4886:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_4886);

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
JUMP_EQ (UNDEF_LABEL4913);
JUMP (FINISH_FVAR_LABEL4913);
UNDEF_LABEL4913:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4913:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4912);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4912:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4911);
JUMP (FINISH_FVAR_LABEL4911);
UNDEF_LABEL4911:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4911:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4910);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4910:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4888);

/*************tc-applic code starts here4901***********/

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
JUMP_EQ (UNDEF_LABEL4909);
JUMP (FINISH_FVAR_LABEL4909);
UNDEF_LABEL4909:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4909:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4908);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4908:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4907);
JUMP (FINISH_FVAR_LABEL4907);
UNDEF_LABEL4907:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4907:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4906);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4906:

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
JUMP_EQ (UNDEF_LABEL4905);
JUMP (FINISH_FVAR_LABEL4905);
UNDEF_LABEL4905:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4905:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4904);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4904:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,44));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4903);
JUMP (FINISH_FVAR_LABEL4903);
UNDEF_LABEL4903:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4903:


/*************tc-applic cont4901***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4901);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4902);
ADD (R10 , IMM(1));
tc_applic_for_label4902:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4902);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4902);
tc_applic_end_param_ranover4902:
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
L_Error_cannot_tc_apply_non_closure_4901:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

JUMP (L_IF3_EXIT4887);
L_IF3_ELSE4888:

/*************tc-applic code starts here4889***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4900);
JUMP (FINISH_FVAR_LABEL4900);
UNDEF_LABEL4900:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4900:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4899);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4899:

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
JUMP_EQ (UNDEF_LABEL4898);
JUMP (FINISH_FVAR_LABEL4898);
UNDEF_LABEL4898:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4898:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4897);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4897:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4896);
JUMP (FINISH_FVAR_LABEL4896);
UNDEF_LABEL4896:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4896:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4895);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4895:

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
JUMP_EQ (UNDEF_LABEL4894);
JUMP (FINISH_FVAR_LABEL4894);
UNDEF_LABEL4894:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4894:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4893);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4893:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,44));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4892);
JUMP (FINISH_FVAR_LABEL4892);
UNDEF_LABEL4892:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4892:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4891);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4891:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont4889***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4889);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4890);
ADD (R10 , IMM(1));
tc_applic_for_label4890:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4890);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4890);
tc_applic_end_param_ranover4890:
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
L_Error_cannot_tc_apply_non_closure_4889:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT4887:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4886:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4886:

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
JUMP_EQ (UNDEF_LABEL4885);
JUMP (FINISH_FVAR_LABEL4885);
UNDEF_LABEL4885:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4885:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4884);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4884:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4883);
JUMP (FINISH_FVAR_LABEL4883);
UNDEF_LABEL4883:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4883:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4882);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4882:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4875);

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,183));

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4881);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4881:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT4874);
L_IF3_ELSE4875:

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
JUMP_EQ (UNDEF_LABEL4880);
JUMP (FINISH_FVAR_LABEL4880);
UNDEF_LABEL4880:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4880:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4879);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4879:

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
JUMP_EQ (UNDEF_LABEL4878);
JUMP (FINISH_FVAR_LABEL4878);
UNDEF_LABEL4878:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4878:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4877);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4877:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4876);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4876:

/*************applic code ends here***********/

L_IF3_EXIT4874:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************tc-applic code starts here4871***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,62));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4873);
JUMP (FINISH_FVAR_LABEL4873);
UNDEF_LABEL4873:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4873:


/*************tc-applic cont4871***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4871);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4872);
ADD (R10 , IMM(1));
tc_applic_for_label4872:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4872);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4872);
tc_applic_end_param_ranover4872:
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
L_Error_cannot_tc_apply_non_closure_4871:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4870:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4870:

/*************lambda-simple code ends here***********/


/*************tc-applic cont4868***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4868);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4869);
ADD (R10 , IMM(1));
tc_applic_for_label4869:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4869);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4869);
tc_applic_end_param_ranover4869:
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
L_Error_cannot_tc_apply_non_closure_4868:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4867:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4867:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,61),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_4866);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_4866:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4958);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4958:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_4958);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4958);
EXIT_LOOP_COPY_4958:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4958:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4958);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4958);
EXIT_LOOP_EXTEND_ENV_4958:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4919));
JUMP(L_CLOSURE_EXIT_4919);
L_CLOSURE_BODY_4919:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_4957);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_4957:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_4957);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_4957);
EXIT_LOOP_ARGS_4957:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_4957:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_4957);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_4957);
EXIT_FIXING_STACK_4957:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_4957);
NO_OPTIONAL_ARGS_4957:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_4957:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_4957);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_4957);
EXIT_NIL_CASE_LOOP_4957:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_4957:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here4920***********/
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4956);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4956:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_4956);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4956);
EXIT_LOOP_COPY_4956:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4956:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4956);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4956);
EXIT_LOOP_EXTEND_ENV_4956:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4922));
JUMP(L_CLOSURE_EXIT_4922);
L_CLOSURE_BODY_4922:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_4922);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4955);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4955:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_4955);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4955);
EXIT_LOOP_COPY_4955:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4955:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4955);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4955);
EXIT_LOOP_EXTEND_ENV_4955:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4930));
JUMP(L_CLOSURE_EXIT_4930);
L_CLOSURE_BODY_4930:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_4930);

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
JUMP_EQ (UNDEF_LABEL4954);
JUMP (FINISH_FVAR_LABEL4954);
UNDEF_LABEL4954:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4954:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4953);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4953:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4952);
JUMP (FINISH_FVAR_LABEL4952);
UNDEF_LABEL4952:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4952:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4951);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4951:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4932);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT4931);
L_IF3_ELSE4932:

/*************tc-applic code starts here4933***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4950);
JUMP (FINISH_FVAR_LABEL4950);
UNDEF_LABEL4950:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4950:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4949);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4949:

/*************applic code ends here***********/

PUSH(R0);

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4936);

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
JUMP_EQ (UNDEF_LABEL4948);
JUMP (FINISH_FVAR_LABEL4948);
UNDEF_LABEL4948:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4948:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4947);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4947:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4946);
JUMP (FINISH_FVAR_LABEL4946);
UNDEF_LABEL4946:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4946:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4945);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4945:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4944);
JUMP (FINISH_FVAR_LABEL4944);
UNDEF_LABEL4944:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4944:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4943);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4943:

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
JUMP_EQ (UNDEF_LABEL4942);
JUMP (FINISH_FVAR_LABEL4942);
UNDEF_LABEL4942:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4942:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4941);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4941:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4940);
JUMP (FINISH_FVAR_LABEL4940);
UNDEF_LABEL4940:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4940:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4939);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4939:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,42));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4938);
JUMP (FINISH_FVAR_LABEL4938);
UNDEF_LABEL4938:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4938:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4937);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4937:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT4935);
L_IF3_ELSE4936:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT4935:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont4933***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4933);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4934);
ADD (R10 , IMM(1));
tc_applic_for_label4934:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4934);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4934);
tc_applic_end_param_ranover4934:
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
L_Error_cannot_tc_apply_non_closure_4933:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT4931:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4930:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4930:

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
JUMP_EQ (UNDEF_LABEL4929);
JUMP (FINISH_FVAR_LABEL4929);
UNDEF_LABEL4929:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4929:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4928);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4928:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4927);
JUMP (FINISH_FVAR_LABEL4927);
UNDEF_LABEL4927:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4927:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4926);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4926:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4924);
MOV (R0 ,INDD(CONSTARRAY,180));

JUMP (L_IF3_EXIT4923);
L_IF3_ELSE4924:

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,180));

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4925);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4925:

/*************applic code ends here***********/

L_IF3_EXIT4923:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4922:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4922:

/*************lambda-simple code ends here***********/


/*************tc-applic cont4920***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4920);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4921);
ADD (R10 , IMM(1));
tc_applic_for_label4921:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4921);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4921);
tc_applic_end_param_ranover4921:
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
L_Error_cannot_tc_apply_non_closure_4920:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4919:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4919:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,63),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_4918);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_4918:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4824);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4824:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_4824);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4824);
EXIT_LOOP_COPY_4824:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4824:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4824);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4824);
EXIT_LOOP_EXTEND_ENV_4824:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4785));
JUMP(L_CLOSURE_EXIT_4785);
L_CLOSURE_BODY_4785:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_4823);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_4823:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_4823);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_4823);
EXIT_LOOP_ARGS_4823:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_4823:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_4823);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_4823);
EXIT_FIXING_STACK_4823:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_4823);
NO_OPTIONAL_ARGS_4823:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_4823:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_4823);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_4823);
EXIT_NIL_CASE_LOOP_4823:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_4823:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here4786***********/
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4822);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4822:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_4822);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4822);
EXIT_LOOP_COPY_4822:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4822:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4822);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4822);
EXIT_LOOP_EXTEND_ENV_4822:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4788));
JUMP(L_CLOSURE_EXIT_4788);
L_CLOSURE_BODY_4788:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_4788);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4821);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4821:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_4821);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4821);
EXIT_LOOP_COPY_4821:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4821:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4821);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4821);
EXIT_LOOP_EXTEND_ENV_4821:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4796));
JUMP(L_CLOSURE_EXIT_4796);
L_CLOSURE_BODY_4796:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_4796);

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
JUMP_EQ (UNDEF_LABEL4820);
JUMP (FINISH_FVAR_LABEL4820);
UNDEF_LABEL4820:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4820:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4819);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4819:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4818);
JUMP (FINISH_FVAR_LABEL4818);
UNDEF_LABEL4818:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4818:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4817);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4817:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4798);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT4797);
L_IF3_ELSE4798:

/*************tc-applic code starts here4799***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4816);
JUMP (FINISH_FVAR_LABEL4816);
UNDEF_LABEL4816:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4816:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4815);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4815:

/*************applic code ends here***********/

PUSH(R0);

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4802);

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
JUMP_EQ (UNDEF_LABEL4814);
JUMP (FINISH_FVAR_LABEL4814);
UNDEF_LABEL4814:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4814:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4813);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4813:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4812);
JUMP (FINISH_FVAR_LABEL4812);
UNDEF_LABEL4812:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4812:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4811);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4811:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4810);
JUMP (FINISH_FVAR_LABEL4810);
UNDEF_LABEL4810:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4810:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4809);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4809:

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
JUMP_EQ (UNDEF_LABEL4808);
JUMP (FINISH_FVAR_LABEL4808);
UNDEF_LABEL4808:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4808:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4807);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4807:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4806);
JUMP (FINISH_FVAR_LABEL4806);
UNDEF_LABEL4806:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4806:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4805);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4805:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,43));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4804);
JUMP (FINISH_FVAR_LABEL4804);
UNDEF_LABEL4804:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4804:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4803);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4803:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT4801);
L_IF3_ELSE4802:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT4801:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont4799***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4799);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4800);
ADD (R10 , IMM(1));
tc_applic_for_label4800:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4800);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4800);
tc_applic_end_param_ranover4800:
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
L_Error_cannot_tc_apply_non_closure_4799:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT4797:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4796:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4796:

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
JUMP_EQ (UNDEF_LABEL4795);
JUMP (FINISH_FVAR_LABEL4795);
UNDEF_LABEL4795:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4795:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4794);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4794:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4793);
JUMP (FINISH_FVAR_LABEL4793);
UNDEF_LABEL4793:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4793:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4792);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4792:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4790);
MOV (R0 ,INDD(CONSTARRAY,180));

JUMP (L_IF3_EXIT4789);
L_IF3_ELSE4790:

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,180));

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4791);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4791:

/*************applic code ends here***********/

L_IF3_EXIT4789:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4788:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4788:

/*************lambda-simple code ends here***********/


/*************tc-applic cont4786***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4786);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4787);
ADD (R10 , IMM(1));
tc_applic_for_label4787:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4787);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4787);
tc_applic_end_param_ranover4787:
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
L_Error_cannot_tc_apply_non_closure_4786:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4785:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4785:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,64),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_4784);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_4784:

/*************'def' code starts here***********/

/*************lambda-var code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (1,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4865);
PUSH(1);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4865:
CMP(R4,0);
JUMP_EQ(EXIT_LOOP_COPY_4865);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4865);
EXIT_LOOP_COPY_4865:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4865:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4865);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4865);
EXIT_LOOP_EXTEND_ENV_4865:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4826));
JUMP(L_CLOSURE_EXIT_4826);
L_CLOSURE_BODY_4826:
PUSH(FP);
MOV (FP , SP);

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/
CMP (FPARG(1) , 0);
JUMP_EQ(NO_OPTIONAL_ARGS_4864);
MOV (R8,FPARG(1)-0- 1);
MOV (R6 ,SOB_NIL);
MOV (R5 , R6);
MOV (R4 , FPARG(1));
DECR(R4);
LOOP_ARGS_4864:
CMP (R4 ,-1);
JUMP_EQ(EXIT_LOOP_ARGS_4864);
PUSH(IMM(3));
CALL (MALLOC);
DROP(1);
MOV (INDD(R0,0) , T_PAIR);
MOV (INDD(R0,2) , R5);
MOV (R5 , R0);
MOV (INDD(R5,1) , FPARG(2 + R4));
MOV (R6, R5);
DECR(R4);
JUMP(LOOP_ARGS_4864);
EXIT_LOOP_ARGS_4864:
MOV (FPARG(2 + 0), R6);
MOV (R4, FPARG(1));
MOV (FPARG(1), 1);
MOV (R3 , FPARG(1));
ADD (R3 , IMM(3));
FIXING_STACK_4864:
CMP (R3,IMM(0));
JUMP_EQ(EXIT_FIXING_STACK_4864);
MOV (FPARG(1 + R4), FPARG(-2 + R3));
DECR(R3);
DECR(R4);
JUMP(FIXING_STACK_4864);
EXIT_FIXING_STACK_4864:
MOV (FPARG(1 + R4), FPARG(-2 + R3));
MOV (SP , FP);
SUB (SP , R4);
SUB (SP , IMM(3));
SUB (FP,R8);
JUMP(FINAL_4864);
NO_OPTIONAL_ARGS_4864:
MOV (R5 , SOB_NIL);
MOV (R4 , FPARG(1));
ADD(R4 , IMM(4));
ADD (FPARG(1) , IMM(1));
NIL_CASE_LOOP_4864:
CMP (R4 , IMM(0));
JUMP_EQ(EXIT_NIL_CASE_LOOP_4864);
MOV (R3 , FPARG(-2 + R4 - 1));
MOV (FPARG(-2 + R4 - 1) , R5);
MOV (R5 , R3);
DECR(R4);
JUMP(NIL_CASE_LOOP_4864);
EXIT_NIL_CASE_LOOP_4864:
MOV (FPARG(-2 + R4 - 1) , R5);
DECR(R4);
SUB(FP,R4);
MOV (SP , FP);
FINAL_4864:

/*************~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~***********/

/*************tc-applic code starts here4827***********/
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,181));

PUSH(R0);
PUSH(2);

/*************lambda-simple code starts here***********/
MOV (R1,FPARG(0));
MOV(R2 ,SOB_NIL);
CMP (2,IMM(1));
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4863);
PUSH(2);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4863:
CMP(R4,1);
JUMP_EQ(EXIT_LOOP_COPY_4863);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4863);
EXIT_LOOP_COPY_4863:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4863:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4863);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4863);
EXIT_LOOP_EXTEND_ENV_4863:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4829));
JUMP(L_CLOSURE_EXIT_4829);
L_CLOSURE_BODY_4829:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_4829);

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
JUMP_EQ (EXIT_LOOP_EXTEND_ENV_4862);
PUSH(3);
CALL(MALLOC);
DROP(1);
MOV (R2,R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(1));
LOOP_COPY_ENV_4862:
CMP(R4,2);
JUMP_EQ(EXIT_LOOP_COPY_4862);
MOV (INDD(R2,R5) , INDD(R1,R4) );
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_COPY_ENV_4862);
EXIT_LOOP_COPY_4862:
MOV (R3 , FPARG(1));
PUSH(R3);
CALL(MALLOC);
DROP(1);
MOV (INDD(R2,0) , R0);
MOV (R4 , IMM(0));
MOV (R5 , IMM(2));
LOOP_EXTEND_ENV_4862:
CMP(R4 , R3);
JUMP_EQ(EXIT_LOOP_EXTEND_ENV_4862);
MOV (INDD(INDD(R2,0), R4) , FPARG(R5));
ADD(R4 , IMM(1));
ADD(R5 , IMM(1));
JUMP(LOOP_EXTEND_ENV_4862);
EXIT_LOOP_EXTEND_ENV_4862:
PUSH (IMM(3));
CALL(MALLOC);
DROP(1);
MOV (INDD(R0 ,0) , T_CLOSURE);
MOV (INDD(R0 ,1) , R2);
MOV (INDD(R0 ,2) ,LABEL(L_CLOSURE_BODY_4837));
JUMP(L_CLOSURE_EXIT_4837);
L_CLOSURE_BODY_4837:
PUSH(FP);
MOV (FP , SP);
CMP(FPARG(1) , IMM(2));
JUMP_NE(L_ERROR_LAMBDA_ARGS_COUNT_4837);

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
JUMP_EQ (UNDEF_LABEL4861);
JUMP (FINISH_FVAR_LABEL4861);
UNDEF_LABEL4861:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4861:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4860);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4860:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4859);
JUMP (FINISH_FVAR_LABEL4859);
UNDEF_LABEL4859:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4859:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4858);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4858:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4839);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

JUMP (L_IF3_EXIT4838);
L_IF3_ELSE4839:

/*************tc-applic code starts here4840***********/

/*************applic code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,1));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4857);
JUMP (FINISH_FVAR_LABEL4857);
UNDEF_LABEL4857:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4857:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4856);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4856:

/*************applic code ends here***********/

PUSH(R0);

/*************if3 code starts here***********/

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4843);

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
JUMP_EQ (UNDEF_LABEL4855);
JUMP (FINISH_FVAR_LABEL4855);
UNDEF_LABEL4855:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4855:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4854);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4854:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,0));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4853);
JUMP (FINISH_FVAR_LABEL4853);
UNDEF_LABEL4853:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4853:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4852);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4852:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4851);
JUMP (FINISH_FVAR_LABEL4851);
UNDEF_LABEL4851:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4851:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4850);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4850:

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
JUMP_EQ (UNDEF_LABEL4849);
JUMP (FINISH_FVAR_LABEL4849);
UNDEF_LABEL4849:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4849:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4848);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4848:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,34));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4847);
JUMP (FINISH_FVAR_LABEL4847);
UNDEF_LABEL4847:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4847:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4846);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4846:

/*************applic code ends here***********/

PUSH(R0);
PUSH(2);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,46));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4845);
JUMP (FINISH_FVAR_LABEL4845);
UNDEF_LABEL4845:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4845:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4844);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4844:

/*************applic code ends here***********/

JUMP (L_IF3_EXIT4842);
L_IF3_ELSE4843:
MOV (R0 ,INDD(CONSTARRAY,181));

L_IF3_EXIT4842:

/*************if3 code ends here***********/

PUSH(R0);
PUSH(2);

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/
MOV(R0, (IND R0));

/*************tc-applic cont4840***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4840);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4841);
ADD (R10 , IMM(1));
tc_applic_for_label4841:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4841);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4841);
tc_applic_end_param_ranover4841:
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
L_Error_cannot_tc_apply_non_closure_4840:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));

L_IF3_EXIT4838:

/*************if3 code ends here***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4837:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4837:

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
JUMP_EQ (UNDEF_LABEL4836);
JUMP (FINISH_FVAR_LABEL4836);
UNDEF_LABEL4836:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4836:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4835);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4835:

/*************applic code ends here***********/

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,13));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4834);
JUMP (FINISH_FVAR_LABEL4834);
UNDEF_LABEL4834:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4834:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4833);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4833:

/*************applic code ends here***********/

CMP (R0, SOB_FALSE);
JUMP_EQ (L_IF3_ELSE4831);
MOV (R0 ,INDD(CONSTARRAY,180));

JUMP (L_IF3_EXIT4830);
L_IF3_ELSE4831:

/*************applic code starts here***********/

/*************bvar code starts here***********/
MOV (R0,FPARG(0));
MOV (R0,INDD(R0,0));
MOV (R0,INDD(R0,0));

/*************bvar code ends here***********/

PUSH(R0);
MOV (R0 ,INDD(CONSTARRAY,180));

PUSH(R0);
PUSH(2);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 0));

/*************pvar code ends here***********/
MOV(R0, (IND R0));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4832);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4832:

/*************applic code ends here***********/

L_IF3_EXIT4830:

/*************if3 code ends here***********/
MOV(FPARG(3),R0);
MOV (R0,SOB_VOID);

/*************pvar code starts here***********/
MOV (R0,FPARG(2 + 1));

/*************pvar code ends here***********/

/*************seq code ends***********/
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4829:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4829:

/*************lambda-simple code ends here***********/


/*************tc-applic cont4827***********/
MOV (R7,FPARG(IMM(-1)));
MOV (R8, FPARG(IMM(-2)));
CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE (L_Error_cannot_tc_apply_non_closure_4827);
PUSH (INDD (R0,1));
MOV (R9 , FPARG(IMM(1)));
ADD (R9 , IMM(1));

/*************run run_over_frame starts***********/
PUSH (R7);
MOV(R10 , STARG(IMM(1)));
MOV(R12,R10);
CMP(R10 , IMM(0));
JUMP_EQ (tc_applic_end_param_ranover4828);
ADD (R10 , IMM(1));
tc_applic_for_label4828:
CMP (R10 , 1);
JUMP_LE (tc_applic_end_param_ranover4828);
MOV (R11,STARG(R10));
MOV (FPARG(R9),R11);
SUB (R9 , 1);
SUB (R10 , 1);
JUMP (tc_applic_for_label4828);
tc_applic_end_param_ranover4828:
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
L_Error_cannot_tc_apply_non_closure_4827:
SHOW ("NOT A CLOSURE:" , INDD(R0,0));
POP(FP);
RETURN;
L_ERROR_LAMBDA_ARGS_COUNT_4826:
OUT(IMM(2) , 'c' );
SHOW("Wrong number of args!!!" , FPARG(1));
HALT;
L_CLOSURE_EXIT_4826:

/*************lambda-var code ends here***********/
MOV(INDD(FVARARRAY,65),R0);
MOV (R0 , SOB_VOID);

/*************'def' code ends here***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_4825);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_4825:

/*************seq code starts***********/
MOV (R0 ,INDD(CONSTARRAY,186));
MOV (R0 ,INDD(CONSTARRAY,189));
MOV (R0 ,INDD(CONSTARRAY,192));
MOV (R0 ,INDD(CONSTARRAY,195));
MOV (R0 ,INDD(CONSTARRAY,198));
MOV (R0 ,INDD(CONSTARRAY,201));
MOV (R0 ,INDD(CONSTARRAY,204));
MOV (R0 ,INDD(CONSTARRAY,209));
MOV (R0 ,INDD(CONSTARRAY,211));

/*************applic code starts here***********/
MOV (R0 ,INDD(CONSTARRAY,208));

PUSH(R0);
PUSH(1);

/*************fvar code:***********/
MOV (R0 ,INDD(FVARARRAY,20));
CMP (R0 , 0XDEF);
JUMP_EQ (UNDEF_LABEL4783);
JUMP (FINISH_FVAR_LABEL4783);
UNDEF_LABEL4783:
SHOW("THE VAR YOU ARE LOOKING FOR IS UNDEFINE",R0);
HALT;
FINISH_FVAR_LABEL4783:

CMP (INDD (R0,0) ,IMM(T_CLOSURE));
JUMP_NE(L_Error_cannot_apply_non_closure_4782);
MOV (R1 , INDD (R0,1));
PUSH (R1);
MOV (R1 , INDD (R0,2));
CALLA (R1);
DROP(1);
POP(R1);
DROP(R1);
L_Error_cannot_apply_non_closure_4782:

/*************applic code ends here***********/

/*************seq code ends***********/

CMP(R0,SOB_VOID);
JUMP_EQ(R0_IS_VOID_number_4781);
PUSH(R0); 
CALL(WRITE_SOB);
DROP(1);
PUSH(10); 
CALL(PUTCHAR);
DROP(1);
R0_IS_VOID_number_4781:


STOP_MACHINE;
return 0;
}