#include <stdio.h>
#include <stdlib.h>

#define EMPTY 0
#define FULL 10000

typedef int                data;

typedef struct elem{  // an element on the stack
  data  d;
  data n;
  
  struct elem *next;
} elem;

typedef struct stack{
  int cnt;    // a count of the elements
  elem *top;  // ptr to the top element
} stack;

void    initialize(stack *stk);
void    push(data d, stack *stk);
data    pop(stack *stk);
data    top(stack *stk);
bool empty(const stack *stk);
bool full(const stack *stk);

stack *stack1 = NULL;
void    initialize(stack *stk){
  stack1 = stk;
  stack1 -> cnt = 0;
}
void    push(data d, stack *stk){
  elem *e = NULL;
  e = (elem *)malloc(sizeof(elem));
  e -> d = d;
  e -> next = stack1->top;
  stack1->top = e;
  stack1->cnt += 1;
}
data    pop(stack *stk){
  data d;
  d = stack1->top->d;
  stack1->top = stack1->top->next;
  stack1->cnt -= 1;
  return d;
}
data    top(stack *stk){
  data d;
  d = stack1->top->d;
  return d;
}
bool empty(const stack *stk){
  if(stk -> cnt == 0){
    return true;
  }
  else{
    return false;
  }
}
bool full(const stack *stk){
  return (stk->cnt < FULL)?0:1;
}

int main(void){
	char str[] = "My name is Hasoo Eun!";
	int i;
	stack s;

	initialize(&s);	// initialize the stack
	printf("In the string: %s\n", str);
	for(int i=0; str[i] != '\0'; i++){
		if(!full(&s)) push(str[i], &s);
	}
	printf("From the stack: ");
	while(!empty(&s)){
		putchar(pop(&s));
	}
	putchar('\n');
	return 0;
}