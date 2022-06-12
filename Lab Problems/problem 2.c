//Sort some data using bubble sort

#include<stdio.h>

void main(){
    int size;

    printf("How many elements you want ? : ");

    scanf("%d",&size);

    int arr[size],i,j,temp;

    printf("\nEnter Elements : ");

    for(i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nAfter bubble sort : ");

    for(i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
}
