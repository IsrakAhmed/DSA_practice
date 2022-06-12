// Insert an element into sorted array.

#include<stdio.h>

void main(){

    int arraySize = 10;
    int arr[10] = {1,2,3,5,6,7,8,9,10};

    int value,i,temp;

    printf("Before Insertion of new element ");

    for(i = 0; i < arraySize - 1; i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter any value : ");

    scanf("%d",&value);

    arr[arraySize - 1] = value;

    for(i = arraySize - 1; i >= 0; i--){
        if(arr[i] >= arr[i - 1]){
            break;
        }
        else{
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
    }

    printf("After Insertion of new element ");

    for(i = 0; i < arraySize; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}
