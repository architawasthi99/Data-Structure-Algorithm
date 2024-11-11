#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *next;
    int data;
};
void traversal(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
struct node *insert_beg(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
int main (){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    head=(struct node *)(malloc(sizeof(struct node)));
    second=(struct node *)(malloc(sizeof(struct node)));
    third=(struct node *)(malloc(sizeof(struct node)));
    fourth=(struct node *)(malloc(sizeof(struct node)));
    
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=16;
    third->next=fourth;
    fourth->data=29;
    fourth->next=NULL;
    
    traversal(head);
    head=insert_beg(head,56);
    traversal(head);
    return 0;
    
}
