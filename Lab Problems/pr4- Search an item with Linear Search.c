// search an item with Linear Search.
// doesn't matter if the array is sorted or not.


#include<stdio.h>

int findTargetIndex(int values[],int sizeOfvalues,int target);

void main(){
    int values[] = {2,4,6,1,9,12,5,7,3,15};
    int target = 6;

    int sizeOfValues = (sizeof(values) / sizeof(values[0]));
    int targetIndex = findTargetIndex(values,sizeOfValues,target);

    if(targetIndex == -1){
        printf("Value not found\n");
    }
    else{
        printf("Value found at index : %d\n",targetIndex);
    }
}

int findTargetIndex(int values[],int sizeOfvalues,int target){

    int targetIndex = -1;
    int i;

    for(i = 0; i < sizeOfvalues; i++){
        if(target == values[i]){
            targetIndex = i;
            break;
        }
    }

    return targetIndex;
}
