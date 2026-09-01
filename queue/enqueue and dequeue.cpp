#include<stdio.h>
#include<stdlib.h>
#define size 10
struct queue{
    int arr[size];
    int front;
    int rear;
};
void initialized(struct queue *qptr){
    qptr->front=-1;
    qptr->rear=-1;
}
int enqueue(struct queue *qptr,int data){
    if(qptr->rear==size-1){
        return 0;
    }
    else{
        if(qptr->rear==-1){
            qptr->front =0;
        }
        qptr->rear++;
        qptr->arr[qptr->rear]=data;
        return 1;
    }
}
int dequeue(struct queue *qptr){
    int a=-1;
    if(qptr->front==-1){
        printf("queue is empty");
    }
    else if(qptr->front==qptr->rear){
        a=qptr->arr[qptr->front];
        qptr->front--;
        qptr->rear--;
    }
    else{
        a=qptr->arr[qptr->front];
        qptr->front++;
    }
    return a;
}
void printqueue(struct queue *qptr){
    if(qptr->rear==-1){
        printf("queue is empty");
    }
    else{
        for(int i=qptr->front;i<=qptr->rear;i++){
            printf("%d\t",qptr->arr[i]);
        }
    }
}
int main(){
    struct queue q1;
    initialized(&q1);
    enqueue(&q1,22);
    enqueue(&q1,23);
    enqueue(&q1,24);
    enqueue(&q1,25);
    enqueue(&q1,26);
    printqueue(&q1);
    printf("\n");
    dequeue(&q1);
    dequeue(&q1);
    dequeue(&q1);
    printqueue(&q1);
    return 0;
    
}
