#include <stdio.h>
#include <stdlib.h>

struct stack{
    int capacity;
    int top;
    int *array;
};
struct stack *createstack(int capacity){
    struct stack*stack=(struct stack*)malloc(sizeof(struct stack));
    stack->capacity=capacity;
    stack->top=-1;
    stack->array=(int*)malloc(stack->capacity*sizeof(int));
    return stack;
}
int isEmpty(struct stack *stack){
    return stack->top==-1;

}
void push(struct stack *stack,int item){
    stack->array[++stack->top]=item;
}

int pop(struct stack*stack){
    return stack->array[stack->top--];
}
int peek(struct stack*stack){
return stack->array[stack->top];
}
  

struct  queue
{
    struct  stack *stack1;
    struct  stack *stack2;
   
    
};
struct queue*create(){
struct queue *queue=(struct queue *)malloc(sizeof(struct queue));
queue->stack1=createstack(100);
queue->stack2=createstack(100);
return queue;
}

void push(struct queue*queue,int item){
    while(!isEmpty(queue->stack1)){
        push(queue->stack2,pop(queue->stack1));
    }
    push(queue->stack1, item);
    while(!isEmpty(queue->stack2)){
        push(queue->stack1,pop(queue->stack2));
    }
}

int pop(struct queue*queue)
{
if(isEmpty(queue->stack1)){
    printf("queue is empty");
    return -1;
}
return pop(queue->stack1);
};

int peek(struct queue*queue){
    if(isEmpty(queue->stack1)){
    printf("queue is empty");
    return -1;
}
return peek(queue->stack1);
}

int empty(struct queue*queue){
    return isEmpty(queue->stack1);
}
