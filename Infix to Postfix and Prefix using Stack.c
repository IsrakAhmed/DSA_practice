
/** Infix to Postfix and Prefix using Stack **/

#include<stdio.h>
#include<string.h>
#include <ctype.h>

#define sizeOfStack 100

char stack[sizeOfStack];
char top;
int indexN = -1;

int isEmpty(){
    if(indexN == -1) return 1;
    else return 0;
}

int isFull(){
    if(indexN == sizeOfStack - 1) return 1;
    else return 0;
}

void push(char data){
    if(isFull()){
        printf("Stack Overflow\n");
    }
    else{
        top = data;
        indexN++;
        stack[indexN] = top;
    }
}

char pop(){
    if(isEmpty()){
        printf("Stack Underflow\n");
    }
    else{
        indexN--;
        top = stack[indexN];
    }
    return stack[indexN + 1];
}

void showStackData(){
    int i;

    for(i = 0; i <= indexN; i++){
        printf("%c ",stack[i]);
    }
    printf("\n");
}

int isOperator(char symbol){

	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-'){
		return 1;
	}
	else{
        return 0;
	}
}

int checkPrecedence(char op){

    if(op == '^')               return 3;
    else if(op == '/' || op == '*')   return 2;
    else if(op == '+' || op == '-')   return 1;
    else                        return 0;

}

void toPostFix(char *infix,char *postfix){

    int size = strlen(infix);
    int i;
    int j = 0;
    char item;

    push('(');

    for(i = 0; i <= size; i++){

        if(i == size){
            item = ')';
        }

        else{
            item = infix[i];
        }

        if(isdigit(item) || isalpha(item)){
            postfix[j] = item;
            j++;
        }

        else if(item == '('){
            push(item);
        }

        else if(isOperator(item)){
            char temp = pop();

            while(isOperator(temp) && checkPrecedence(temp) >= checkPrecedence(item)){
                postfix[j] = temp;
                j++;
                temp = pop();
            }
            push(temp);
            push(item);
        }

        else if(item == ')'){
            char temp = pop();

            while(temp != '('){
                postfix[j] = temp;
                j++;
                temp = pop();
            }
        }

        //showStackData();
    }

    postfix[j] = '\0';

}

void toPreFix(char *infix,char *prefix){

    /*

    Steps to get Prefix from infix

    1.  Reverse infix expression
    2.  Interchange right and left parenthesis
    3.  Apply postfix
    4.  Reverse Postfix Expression

    */


    int size = strlen(infix);

    char reverseInfix[size];

    strcpy(reverseInfix,infix);

    strrev(reverseInfix);

    int i;

    for(i = 0; i < size; i++){
        if(reverseInfix[i] == '('){
            reverseInfix[i] = ')';
        }
        else if(reverseInfix[i] == ')'){
            reverseInfix[i] = '(';
        }
    }

    toPostFix(reverseInfix,prefix);
    strrev(prefix);
}

void main(){

    char infix[100],postfix[100],prefix[100];

    printf("Enter Infix Expression:     ");
    gets(infix);

    toPostFix(infix,postfix);
    toPreFix(infix,prefix);

    printf("Postfix:    ");
    puts(postfix);

    printf("Prefix:    ");
    puts(prefix);

}
