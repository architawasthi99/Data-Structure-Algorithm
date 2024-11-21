#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void reversal(struct node *ptr){
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->prev;
    }
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    head=(struct node *)(malloc(sizeof(struct node)));
    second=(struct node *)(malloc(sizeof(struct node)));
    third=(struct node *)(malloc(sizeof(struct node)));
    fourth=(struct node *)(malloc(sizeof(struct node)));
    head->prev=NULL;
    head->data=7;
    head->next=second;
    second->prev=head;
    second->data=11;
    second->next=third;
    third->prev=second;
    third->data=16;
    third->next=fourth;
    fourth->prev=third;
    fourth->data=29;
    fourth->next=NULL;
    traversal(head);
    reversal(head);
    
return 0;
}
