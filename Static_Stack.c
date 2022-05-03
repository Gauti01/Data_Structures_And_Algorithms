#include <stdio.h>
#define CAPACITY 5
int top = -1;
int stack[CAPACITY];
int IsFullStack(){
    if(top == CAPACITY-1)
    return 1;
    else
    return 0;
}
void push(int element){
    if(IsFullStack()){
        printf("Sorry!,the element cannot be pushed.The stack is full");
    }
    else{
        top++;
        stack[top]=element;
    }
}
int IsEmptyStack(){
    if(top == -1)
    return 1;
    else
    return 0;
    
}
int pop(){
    int popped_element = 0;
    if(IsEmptyStack()){
        printf("Sorry!,Since the Stack is Empty no element can be poppeed");
    }
    else{
        popped_element = stack[top];
        top--;
    }
    
    return popped_element;
}
void peek(){
    if(IsEmptyStack()){
        printf("The Stack is Empty");
    }
    else{
        printf("%d",stack[top]);
    }
    
}

int main() {
    push(5);
    push(10);
    push(15);
    push(890);
    push(90);
    peek();
    //push(657);
    for(int i=0;i<5;i++){
       // printf("\t%d\t",stack[i]);
    }
    printf("\t%d\t",pop());
    
    
    
    
	
	return 0;
}
