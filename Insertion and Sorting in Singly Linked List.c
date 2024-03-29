/**
 * Performing Insertion at First,Last,Given Position and Sorting in a Singly Linked List
 */


#include<stdio.h>
#include<stdlib.h>

int listSize;

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


/***  Create Linked List  ***/

void createList(){
    int i,value;

    printf("\nEnter Number Of Nodes: ");
    scanf("%d",&listSize);

    struct node *currentNode = headerNode;

    printf("\nEnter Nodes: ");

    for(i = 1; i <= listSize; i++){

        scanf("%d",&value);
        currentNode ->info = value;
        if(i != listSize){
            struct node *temp = createNode();

            currentNode ->link = temp;
            currentNode = temp;
        }

    }
}


/***  Insert Node At First  ***/

void insertFirst(){

    struct node *newNode = createNode();

    printf("\nEnter Node at first position: ");
    scanf("%d",&newNode ->info);
    listSize++;

    newNode -> link = headerNode;
    headerNode = newNode;

}


/***  Insert Node At Last  ***/

void insertLast(){

    struct node *currentNode = headerNode;

    printf("\nEnter Node at last position: ");

    while(currentNode ->link != NULL){
        currentNode  = currentNode ->link;
    }

    struct node *temp = createNode();
    scanf("%d",&temp->info);

    currentNode ->link = temp;

    listSize++;
}


/***  Insert Node At Given Position  ***/

void insertAtGivenPosition(){

    struct node *currentNode = headerNode;

    int pos;
    int index = 1;

    printf("\nEnter the Position: ");
    scanf("%d",&pos);

    while(index < pos - 1){
        currentNode  = currentNode ->link;
        index++;
    }

    printf("\nEnter the Node: ");
    struct node *temp = createNode();
    scanf("%d",&temp->info);
    listSize++;

    if(index == 1){
        temp->link = currentNode;
        headerNode = temp;
    }
    else{
        temp->link = currentNode -> link;
        currentNode -> link = temp;
    }
}


/***  Sorting  ***/

void sort(){
    struct node *currentNode = headerNode;
    struct node *nextNode;

    int temp;

    while(currentNode != NULL){
        nextNode  = currentNode ->link;
        while(nextNode != NULL){

            if(currentNode->info > nextNode ->info){
                temp = currentNode ->info;
                currentNode ->info = nextNode ->info;
                nextNode ->info = temp;
            }
            nextNode = nextNode->link;
        }

        currentNode = currentNode ->link;

    }

    printf("\n*** Sorted ***");
}


/***  Showing Linked List Data  ***/

void displayList(){
    struct node *currentNode = headerNode;
    int i;
    printf("\nList : \n");
    for(i = 1; i <= listSize; i++){

        printf("%d no. value %d\n",i,currentNode ->info);

        currentNode  = currentNode ->link;

    }
    printf("\n");
}

void main(){

    headerNode = (struct node*)malloc(sizeof(struct node));

    createList();
    displayList();

    insertFirst();
    displayList();

    insertLast();
    displayList();

    insertAtGivenPosition();
    displayList();

    sort();
    displayList();

}
