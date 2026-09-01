#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int data){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void inorderTraversal(struct node* root) {
    if (root != NULL) {
        inorderTraversal(root->left); // Visit left subtree
        printf("%d ", root->data);    // Visit current node
        inorderTraversal(root->right); // Visit right subtree
    }
}
int main(){
    struct node* p=createnode(2);
    struct node* p1=createnode(3);
    struct node* p2=createnode(4);
    p->left=p1;
    p->right=p2;
    inorderTraversal(p);
    return 0;
}
