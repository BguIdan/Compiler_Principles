/* scheme/MAKE_SOB_SYMBOL.asm
 * Take pointers to a Scheme object, and places in R0 either 0 or 1
 * (long, not Scheme integer objects or Scheme boolean objets),
 * depending on whether the argument is integer.
 * 
 * Programmer: NIKITA RABBIT, 2010
 */

MAKE_SOB_SYMBOL:
PUSH(FP);
MOV(FP, SP);
PUSH(IMM(2));
CALL(MALLOC);
DROP(1);
MOV(IND(R0), IMM(T_SYMBOL));
MOV(INDD(R0, 1), FPARG(0));
POP(FP);
RETURN;


