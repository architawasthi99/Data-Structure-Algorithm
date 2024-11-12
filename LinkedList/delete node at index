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
struct node *delete_beg(struct node *head){
    if(head==NULL){
        return NULL;
    }
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node *delete_bet(struct node *head,int index){
    if(head==NULL || index<=0){
        return NULL;
    }
    struct node *p=head;
    struct node *q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
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
    
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=16;
    third->next=fourth;
    fourth->data=29;
    fourth->next=NULL;
    
    traversal(head);
    head=delete_bet(head,2);
    traversal(head);
    return 0;
    
}
