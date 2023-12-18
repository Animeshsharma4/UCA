#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include<stdlib.h>
typedef struct{
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;
} mycircularqueue;

mycircularqueue* create(int k){
    mycircularqueue* obj=(mycircularqueue*)malloc(sizeof(mycircularqueue));
    obj->arr=(int*)malloc(sizeof(int)*k);
    obj->front=-1;
    obj->rear=-1;
    obj->size=0;
    obj->capacity=k;
    return obj;
}

bool EnQueue(mycircularqueue* obj,int value){
    if(IsFull(obj)){
        return false;
    }
    if(IsEmpty(obj)){
          obj->front=0;
    }
    obj->rear=(obj->rear+1)%obj->capacity;
    obj->arr[obj->rear]=value;
    obj->size++;
    return true;
}

bool DeQueue(mycircularqueue* obj){
    if(IsEmpty(obj)){
        return false;
    }
    if(obj->front==obj->rear){
        obj->front=-1;
        obj->rear=-1;
    }
    else{
        obj->front=(obj->front+1)%obj->capacity;
    }
    obj->size--;
    return true;
}

int Front(mycircularqueue* obj){
     if(IsEmpty(obj)){
        return -1;
     }
     return obj->arr[obj->front];
}

int Rear(mycircularqueue* obj){
    if(IsEmpty(obj)){
        return -1;

    }
    return obj->arr[obj->rear];
}

bool IsEmpty(mycircularqueue* obj){
    return obj->size==0;
}

bool IsFull(mycircularqueue* obj){
    return obj->size==obj->capacity;
}

