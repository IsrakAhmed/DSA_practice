// unsorted list(problem 1)

#include<stdio.h>

void main(){
    int size;

    printf("Enter how many elements you want to add : ");

    scanf("%d",&size);

    int arr[size],i;

    printf("\nEnter the elements : ");

    for(i = 0; i < size - 1; i++){
        scanf("%d",&arr[i]);
    }

    printf("\nAll elements : ");
    for(i = 0; i < size - 1; i++){
        printf("%d ",arr[i]);
    }

    int pos,j,newE;
    printf("\n\nEnter position of next element : ");

    scanf("%d",&pos);

    for(j = size - 1; j > pos; j--){
        arr[j] = arr[j - 1];
    }

    printf("\nInsert new element : ");

    scanf("%d",&newE);

    arr[pos] = newE;

    printf("\nAll elements after new insertion : ");
    for(j = 0; j < size; j++){
        printf("%d ",arr[j]);
    }

    printf("\n");
}
