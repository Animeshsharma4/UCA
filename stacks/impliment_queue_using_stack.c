//  Implement Queue using Stacks

// Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

// Implement the MyQueue class:

// void push(int x) Pushes element x to the back of the queue.

// int pop() Removes the element from the front of the queue and returns it.

// int peek() Returns the element at the front of the queue.

// boolean empty() Returns true if the queue is empty, false otherwise.

// Notes:

// You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.

// Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
 

// Example 1:

// Input
// ["MyQueue", "push", "push", "peek", "pop", "empty"]
// [[], [1], [2], [], [], []]
// Output
// [null, null, null, 1, 1, false] 

#include <stdio.h>

#define N 20

int s[N],top=-1;
int pop(){
    return s[top--];
}

void push(int x){
    if(top==N-1){
        printf("stack is full");
    }
    else{
        top++;
        s[top]=x;
    }
}
void enqueue(int x){
    push(x);
}
void display(){
    int i;
    for(i=0;i<=top;i++){
        printf("%d ",s[i]);
    }
}

int dequeue(){
    int data, res;
        if(top==-1){
            printf("Queue is empty");
        }
        else if (top==0){
            return pop();
        }
        data=pop();
        res=dequeue();
        push(data);
        return res;
}

int main ()
{
  enqueue (5);
  enqueue (10);
  enqueue (15);
  enqueue (20);
  enqueue (25);
  printf ("Queue:");
  display ();
  printf ("\nQueue After Dequeue:");
  dequeue ();
  display ();

}