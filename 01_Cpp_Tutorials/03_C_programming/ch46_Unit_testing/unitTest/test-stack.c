#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#include <stdlib.h>

#include "stack.h"
#include "tester.h"

#define STRESS_TEST_ITERATIONS (1000000)

int main(int argc, char **argv) {
  Stack s;
  int i;

  tester_init();

  /* first we need to build one */
  TRY { s = stack_create(); }
  ENDTRY;

  /* 25 */ TEST_ASSERT(s != 0);

  /* now we'll try pushing and popping a bit */
  TRY { stack_push(s, 1); }
  ENDTRY;
  TRY { stack_push(s, 2); }
  ENDTRY;
  TRY { stack_push(s, 3); }
  ENDTRY;

  /* 32 */ TEST(stack_isempty(s), 0);
  /* 33 */ TEST(stack_pop(s), 3);
  /* 34 */ TEST(stack_isempty(s), 0);
  /* 35 */ TEST(stack_pop(s), 2);
  /* 36 */ TEST(stack_isempty(s), 0);
  /* 37 */ TEST(stack_pop(s), 1);
  /* 38 */ TEST(stack_isempty(s), 1);
  /* 39 */ TEST(stack_pop(s), STACK_EMPTY);
  /* 40 */ TEST(stack_isempty(s), 1);
  /* 41 */ TEST(stack_pop(s), STACK_EMPTY);

  /* can we still push after popping too much? */
  TRY { stack_push(s, 4); }
  ENDTRY;
  /* 45 */ TEST(stack_isempty(s), 0);
  /* 46 */ TEST(stack_pop(s), 4);
  /* 47 */ TEST(stack_isempty(s), 1);
  /* 48 */ TEST(stack_pop(s), STACK_EMPTY);
  /* 49 */ TEST(stack_isempty(s), 1);

  /* let's do some stress testing */
  /* we won't use TEST for this because we might get too much output */
  TRY {
    for (i = 0; i < STRESS_TEST_ITERATIONS; i++) {
      stack_push(s, i);
    }
    for (i = 0; i < STRESS_TEST_ITERATIONS; i++) {
      stack_push(s, 957);
      if (stack_pop(s) != 957) {
        /* 60 */ FAIL("wanted 957 but didn't get it");
        abort();
      }
    }
    for (i = STRESS_TEST_ITERATIONS - 1; i >= 0; i--) {
      if (stack_isempty(s)) {
        /* 66 */ FAIL("stack empty too early");
        abort();
      }
      if (stack_pop(s) != i) {
        /* 70 */ FAIL("got wrong value!");
        abort();
      }
    }
  }
  ENDTRY; /* 74 */

  /* 76 */ TEST(stack_isempty(s), 1);

  TRY { stack_destroy(s); }
  ENDTRY;

  tester_report(stdout, argv[0]);
  return tester_result();
}