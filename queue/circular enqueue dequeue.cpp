#include<stdio.h>
#include<stdlib.h>
#define size 10
struct queue{
    int arr[size];
    int rear;
    int front;
};
void initialized(struct queue *cptr){
    cptr->rear=-1;
    cptr->front=-1;
}
void enqueue(struct queue *cptr,int value){
    if((cptr->rear+1)%size==cptr->front){
        printf("overflow");
    }
    else{
        cptr->rear=(cptr->rear+1)%size;
        cptr->arr[cptr->rear]=value;
    }
}
int dequeue(struct queue *cptr){
    int a=-1;
    if(cptr->rear==cptr->front){
        printf("empty");
    }
    else{
        cptr->front=(cptr->front+1)%size;
        a=cptr->arr[cptr->front];
    }
    return a;
}
void printqueue(struct queue *cptr){
    if(cptr->front==cptr->rear){
        printf("empty");
    }
    else{
        for(int i = (cptr->front + 1) % size; i < (cptr->rear + 1) % size; i = (i + 1) % size){
            printf("%d\t",cptr->arr[i]);
        }
    }
}
int main(){
    struct queue s1;
    initialized(&s1);
    enqueue(&s1,12);
    enqueue(&s1,13);
    enqueue(&s1,14);
    enqueue(&s1,15);
    enqueue(&s1,16);
    printqueue(&s1);
    dequeue(&s1);
    printf("\n");
    printqueue(&s1);
    return 0;
    
}
