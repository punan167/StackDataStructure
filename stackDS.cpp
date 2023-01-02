//
// Created by amp on 1/1/23.
//
#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 10

struct stack{
    int data[MAXOFSTACK];
    int top;
};

typedef struct stack st;

int isStackIsFull(st *myStack)
{
    if(myStack->top == MAXOFSTACK-1)
    {
        return 1;
    }else{
        return 0;
    }
}

int isStackIsEmpty(st *myStack)
{
    if(myStack->top == -1)
    {
        return 1;
    } else{
        return 0;
    }
}

void create_emptyStack(st *myStack)
{
    myStack->top = -1;
}

void pushToStack(st *myStack , int value)
{
    if(isStackIsFull(myStack))
    {
        printf("Stack is Full.\n");

    } else{

        myStack->top++;
        myStack->data[myStack->top] = value;
        printf("data : %d added to index of Stack : %d\n",value,myStack->top);
    }
}

void popFromStack(st *myStack)
{
    if(isStackIsEmpty(myStack))
    {
        printf("Stack is Empty");
    } else{
        printf("data : %d poped from index of Stack : %d\n",myStack->data[myStack->top],myStack->top);
        myStack->top--;
    }
}

void stackData(st *myStack){
    printf("----------------\nData from Stack\n----------------\n");
    for (int i = 0; i < MAXOFSTACK; i++)
        printf("data : %d | index : %d\n", myStack->data[i],i);
    printf("\n-------xxx----------\n");
}
int main(){
    st *myStack=(st*)malloc(sizeof (st));

    printf("----------------\nMAX of STACK : %d\n----------------\n",MAXOFSTACK);

    create_emptyStack(myStack);

    pushToStack(myStack,10);
    pushToStack(myStack,20);
    pushToStack(myStack,30);
    pushToStack(myStack,40);
    pushToStack(myStack,50);
    pushToStack(myStack,60);
    pushToStack(myStack,70);
    pushToStack(myStack,80);
    pushToStack(myStack,90);
    pushToStack(myStack,100);
    pushToStack(myStack,110);

    stackData(myStack);

    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);


    return 0;
}