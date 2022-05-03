/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Stack{
    int top;
    int capacity;
    int *arr;
};
//Utility function to initialize the stack
struct Stack *NewStack(int cap){
    struct Stack *pt = (struct Stack*)malloc(cap*sizeof(struct Stack));
    pt->capacity = cap;
    pt->top = -1;
    pt->arr = (int *)malloc(cap*sizeof(int));
    return pt;
    
}
int IsStackFull(struct Stack *pt){
    return pt->top == pt->capacity-1;
    
}
void push(struct Stack* stack,int element){
    if(IsStackFull(stack)){
        printf("The element cannot be pushed as the stack is full\n");
    }
    else
    {
        stack->top++;
        stack->arr[stack->top] = element;
    }
}
int IsEmptyStack(struct Stack *pt){
    if(pt->top == -1)
    return 1;
    else
    return 0;
    
}
int pop(struct Stack *pt){
    if(IsEmptyStack(pt)){
        printf("Sorry the Stack is empty so the element cannot be popped");
    }
    else{
        return pt->arr[pt->top];
        pt->top--;
    }
    
}

int main()
{
    printf("Hello World\n");
    struct Stack *pt = NewStack(3); //Create a stack of capacity 5
    push(pt,35);
    push(pt,56);
    push(pt,67);
    for(int i=0;i<3;i++){
        printf("%d\t",pt->arr[i]);
    }
    
    printf("\n%d\t",pop(pt));
    
    

    return 0;
}
