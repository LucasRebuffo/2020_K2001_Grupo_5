

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pila.h"

struct Stack { 
    int top; 
    unsigned capacity; 
    int* array; 
}; 

struct Stack* createStack(unsigned capacity) 
{ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array = (int*)malloc(stack->capacity * sizeof(int)); 
    return stack; 
} 

int isFull(struct Stack* stack) 
{ 
    return stack->top == stack->capacity - 1; 
} 

int isEmpty(struct Stack* stack) 
{ 
    return stack->top == -1; 
} 

void push(struct Stack* stack, int item) 
{ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item;  
} 

int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return 0; 
    return stack->array[stack->top--]; 
} 

int peek(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return 0; 
    return stack->array[stack->top]; 
} 