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
struct node *insert_bet(struct node *head,int data,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node *insert_last(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
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
    //head=insert_beg(head,56);
    //head=insert_bet(head,56,1);
    head=insert_last(head,56);
    traversal(head);
    return 0;
    
}
