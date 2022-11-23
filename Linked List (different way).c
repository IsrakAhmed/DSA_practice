#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *headerNode;

struct node* createNode(){

    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->link = NULL;
    return newNode;

}

void main(){

    headerNode = (struct node*)malloc(sizeof(struct node));

    int size = 5,i,value;

    struct node *currentNode = headerNode;

    for(i = 0; i < size; i++){

        scanf("%d",&value);
        currentNode ->info = value;

        struct node *temp = createNode();

        currentNode ->link = temp;
        currentNode = temp;
    }

    currentNode = headerNode;

    for(i = 0; i < size; i++){

        printf("%d no. value %d\n",i,currentNode ->info);

        currentNode  = currentNode ->link;

    }


}
