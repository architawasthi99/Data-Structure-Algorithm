#include<stdio.h>
#include<stdlib.h>

// Node structure
struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to create a new node with user input
struct node* createnode() {
    int data;
    printf("Enter data for the node (-1 to skip): ");
    scanf("%d", &data);

    // Base case: if input is -1, no node is created
    if (data == -1) {
        return NULL;
    }

    // Create the new node
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;

    // Ask for left and right children recursively
    printf("Enter left child of %d:\n", data);
    newnode->left = createnode();

    printf("Enter right child of %d:\n", data);
    newnode->right = createnode();

    return newnode;
}

// Function to perform in-order traversal and print the tree
void inorderTraversal(struct node* root) {
    if (root != NULL) {
        inorderTraversal(root->left); // Visit left subtree
        printf("%d ", root->data);    // Visit current node
        inorderTraversal(root->right); // Visit right subtree
    }
}

int main() {
    struct node* root;

    printf("Create the root node:\n");
    root = createnode();

    printf("In-order traversal of the tree: ");
    inorderTraversal(root);

    return 0;
}
