#include<stdio.h>

// declaretion of functions
void push(int data);
int pop();
int isEmpty();
int isFull();
void showStackData();

int sizeOfStack = 5;
int stack[5];
int top;
int index = -1;

void main(){

    push(3);
    showStackData();
    pop();
    showStackData();
    pop();
    showStackData();
}

void push(int data){        // this method adds data to the stack
    if(isFull()){
        printf("Stack Overflow\n");
    }
    else{
        top = data;
        index++;
        stack[index] = top;
    }
}

int pop(){
    if(isEmpty()){          // this method pops out the latest data from the stack
        printf("Stack Underflow\n");
    }
    else{
        index--;
        top = stack[index];
    }
    return stack[index + 1];
}

int isEmpty(){              // this method checks if the stack is empty or not
    if(index == -1) return 1;
    else return 0;
}

int isFull(){               // this method checks if the stack is full or not
    if(index == sizeOfStack - 1) return 1;
    else return 0;
}

void showStackData(){       // this method shows all the recent values of the stack
    int i;
    for(i = 0; i <= index; i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
