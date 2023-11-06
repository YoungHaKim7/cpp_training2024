/*----- FILE: PUSHPOP.CPP --------------------------------------------*/
/*                                                                    */
/* Push and pop functions for a stack of integers                     */
/*--------------------------------------------------------------------*/
#include "calc.hpp"
#include <stdio.h>
#include <stdlib.h>
/*--------------------------------------------------------------------*/
/* input:  num - value to push on the stack                           */
/* action: get a link to hold the pushed value, push link on stack    */
/*--------------------------------------------------------------------*/
void IntStack::push(int num) {
  IntLink *ptr;
  ptr = new IntLink;
  ptr->set_i(num);
  ptr->set_next(top);
  top = ptr;
}
/*--------------------------------------------------------------------*/
/* return: int value popped from stack (0 if stack is empty)          */
/* action: pops top element from stack and get return value from it   */
/*--------------------------------------------------------------------*/
int IntStack::pop() {
  IntLink *ptr;
  int num;
  ptr = top;
  num = ptr->get_i();
  top = ptr->get_next();
  delete ptr;
  return num;
}
IntStack::IntStack() { top = 0; }
IntStack::~IntStack() {
  while (top)
    pop();
}
IntLink::IntLink() {
  //   ⁄*constructor leaves elements unassigned *⁄
}
IntLink::~IntLink() {}
void IntLink::set_i(int j) { i = j; }
int IntLink::get_i() { return i; }
void IntLink::set_next(IntLink *p) { next = p; }
IntLink *IntLink::get_next() { return next; }