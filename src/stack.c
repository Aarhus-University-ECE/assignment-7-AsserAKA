#include "stack.h"
#include <assert.h>

void initialize(stack* s){
  //implement initialize here
  s->head = NULL; /* Intializing the head of the stack to NULL */
  return;
}

void push(int x, stack* s){
  //implement push here
  node *prev = s->head; /* Pointer refering to the current top node. Becomes the next node in the stack (second to the top) */
  
  s->head = (node*)malloc(sizeof(node)); /* Allocating memory to the new top node in the stack */
  s->head->data = x; /* Inserting value x */
  s->head->next = prev; /* Refers to the second top node */

  return;
}

int pop(stack* s){
  // implement pop here
  assert(s->head != NULL); /* Precondition: stack must not be empty */
  
  node *top = s->head; /* Pointer refering to the top node of the stack */
  int popped_value = 0; /* Valued popped from the stack */

  s->head = top->next; /* Assigning the top node to beomce the second top node */

  popped_value = top->data; /* Assigning the top value to the variable */
 
  free(top); /* Removing top item */

  return popped_value;
}

bool empty(stack* s)
{
  //implement empty here
  /* if-statement checking if the stack is empty */
  if(s->head == NULL){
    return true; /* If the stack is empty, it returns true */
  }
  else{
    return false; /* If the stack is not empty, it returns false */
  }
}

bool full(stack* s) {
    //implement full here
    /* The list can never be full, since it is dynamic */
  return false;
}
