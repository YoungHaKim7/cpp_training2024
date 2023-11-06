#include "stack.h"
#include <stdlib.h>

struct stack {
  int top;   /* first unused slot in data */
  int size;  /* number of slots in data */
  int *data; /* stack contents */
};

#define INITIAL_STACK_SIZE (1)
#define STACK_SIZE_MULTIPLIER (2)

Stack stack_create(void) {
  struct stack *s;

  s = malloc(sizeof(*s));
  if (s == 0)
    return 0;

  s->top = 0;
  s->size = INITIAL_STACK_SIZE;
  s->data = malloc(s->size * sizeof(*(s->data)));
  if (s->data == 0)
    return 0;

  /* else everything is ok */
  return s;
}