
/**    Binary Search Tree Traversing   **/


#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* left;
    int data;
    struct node* right;
};

struct node* createNode(int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode ->data = data;
    newNode ->left = NULL;
    newNode ->right = NULL;
    return newNode;
};

struct node* insert(struct node* root,int data){
    if(root == NULL){
        root = createNode(data);
        return root;
    }
    else if(data <= root ->data){
        root ->left = insert(root ->left,data);
    }
    else if(data > root ->data){
        root ->right = insert(root ->right,data);
    }
}

void inOrder(struct node* root){
    if(root == NULL){
        return;
    }
    inOrder(root ->left);
    printf("%d ",root ->data);
    inOrder(root->right);
}

void preOrder(struct node* root){
    if(root == NULL){
        return;
    }
    printf("%d ",root ->data);
    inOrder(root ->left);
    inOrder(root->right);
}

void postOrder(struct node* root){
    if(root == NULL){
        return;
    }
    inOrder(root ->left);
    inOrder(root->right);
    printf("%d ",root ->data);
}

void main(){

    struct node* root = NULL;

    root = insert(root,10);
    root = insert(root,9);
    root = insert(root,12);


    printf("In order : ");
    inOrder(root);
    printf("\nPre order : ");
    preOrder(root);
    printf("\nPost order : ");
    postOrder(root);
}
