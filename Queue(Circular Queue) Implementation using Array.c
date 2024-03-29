

/** Queue(Circular Queue) implementation using array **/


#include<stdio.h>

#define size 5

int queue[size];
int front = 0;
int rear = -1;
int totalData = 0;

int isFull(){

    if(totalData == size) return 1;
    else                  return 0;

}

int isEmpty(){

    if(totalData == 0)    return 1;
    else                  return 0;

}

void enqueue(int data){

    if(isFull()){
        printf("Overflow\n");
    }
    else{
        rear = (rear + 1) % size;
        queue[rear] = data;
        totalData++;
    }
}

int dequeue(){

    int data;

    if(isEmpty()){
        printf("Underflow\n");
    }
    else{
        data = queue[front];
        queue[front] = NULL;
        front = (front + 1) % size;
        totalData--;
    }

    return data;
}

void showQueueData(){

    if(isEmpty()){
        printf("Queue is empty\n");
    }
    else{
        int i;

        printf("Queue: [");

        for(i = 0; i < size; i++){
            if(i == size - 1 && queue[i] != NULL){
                printf(" %d ]\n",queue[i]);
            }
            else if(queue[i] != NULL){
                printf(" %d ,",queue[i]);
            }
        }
    }
}

int main(){

    enqueue(10);
    enqueue(5);
    enqueue(5);
    enqueue(1);
    enqueue(2);
    enqueue(6);


    showQueueData();

    dequeue();
    dequeue();
    enqueue(6);

    showQueueData();

    return 0;
}
