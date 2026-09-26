#include<stdio.h>
#define SIZE 5
int enQueue(int);
int deQueue();
int display();
int isFull();
int isEmpty();
int front = -1;
int rear = -1,items[SIZE];
int main(){
    deQueue();
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    display();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();

    return 0;
}
int isFull(){
    if((front == (rear+1)%SIZE)||(front == 0 && rear == SIZE-1)){
        return -1;
    }
    return 0;
}

int isEmpty(){
    if(front == -1){
        return 1;
    }
    return 0;
}
int enQueue(int element){
    if(isFull()){
        printf("Full\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear =(rear+1)%SIZE;
        items[rear]=element;
        printf("Inserted = %d\n",element);
    }
}
int deQueue(){
    int element;
    if(isEmpty()){
        printf("Empty\n");
        return-1;
    }
    else{
        element = items[front];
        if(front == rear){
            front =-1;
            rear =-1;
        }
        else{
            front=(front+1)%SIZE;
        }
        return element;
    }
}

int display(){
    int i;
    if(isEmpty()){
        printf("Empty");
    }else{
        for(i=front; i!=rear; i=(i+1)%SIZE){
            printf("%d\n",items[i]);
        }
        printf("%d\n",items[i]);
    }
}