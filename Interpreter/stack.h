/*
 * stack.h
 *
 *  Created on: Dec 21, 2015
 *      Author: Jeff
 */

#ifndef STACK_H_
#define STACK_H_

#include <stddef.h>

#include "shared.h"

typedef struct _Stack Stack;

#include "instruction.h"

typedef struct _Stack {
  int capacity;
  int bp, sp;
  Object *tape;
} Stack;

int    stack_init(Stack *stack, size_t capacity);
void   stack_finalize(Stack *stack);
void   stack_push(Stack *stack, Object obj);
Object stack_pop(Stack *stack);
Object stack_peek(Stack *stack);

#endif /* STACK_H_ */
