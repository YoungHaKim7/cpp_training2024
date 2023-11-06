/*----- FILE CALC.CPP ------------------------------------------------*/
/*                                                                    */
/* A simple calculator that does operations on integers that          */
/* are pushed and popped on a stack                                   */
/*--------------------------------------------------------------------*/
#include "calc.hpp"
#include <stdio.h>
#include <stdlib.h>
IntStack stack;
int main() {
  Token tok;
  char word[100];
  char buf_out[100];
  int num, num2;
  for (;;) {
    tok = read_token(word);
    switch (tok) {
    case T_STOP:
      break;
    case T_INTEGER:
      num = atoi(word);
      stack.push(num);
      //   ⁄*CALC1 statement *⁄
      break;
    case T_PLUS:
      stack.push(stack.pop() + stack.pop());
      break;
    case T_MINUS:
      num = stack.pop();
      stack.push(num - stack.pop());
      break;
    case T_TIMES:
      stack.push(stack.pop() * stack.pop());
      break;
    case T_DIVIDE:
      num2 = stack.pop();
      num = stack.pop();
      stack.push(num / num2);
      // ⁄*CALC2 statement *⁄ break;
      break;
    case T_EQUALS:
      num = stack.pop();
      printf(buf_out, "= %d ", num);
      stack.push(num);
      break;
    }
    if (tok == T_STOP)
      break;
  }
  return 0;
}