#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
int isFull(){
    return top == MAX-1;
}
int isEmpty(){
    return top == -1;
}
void push(int value){
    if(isFull()){
        printf("Stack Over flow");
    }else{
        top++;
        stack[top]=value;
        printf("pushed =%d\n",value);
    }
}
int pop(){
    if(isEmpty()){
        printf("\nNo element to pop\n");
        return-1;
    }else{
        int poppedvalue = stack[top];
        top--;
        return poppedvalue;
    }
}
int peek(){
    if(isEmpty()){
        printf("stack is Empty\n");
        return-1;
    }
    return stack[top];
}
void display(){
    if(isEmpty()){
        printf("Stack is Empty\n");
        return;
    }
    printf("stack Elements\n");
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
    printf("\n");
}
int main(){
    pop();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    display();
    printf("popped = %d\n",pop());
    printf("Top element = %d\n",peek());
    display();
    return 0;
}