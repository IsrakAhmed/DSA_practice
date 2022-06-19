// search an item with Binary Search
// array must be sorted

#include<stdio.h>

int findTargetIndex(int values[],int left,int right,int target);

void main(){
    int values[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 5;
    int sizeOfValues = (sizeof(values) / sizeof(values[0]));
    int targetIndex = findTargetIndex(values,0,sizeOfValues - 1,target);

    if(targetIndex == -1){
        printf("Value not found\n");
    }
    else{
        printf("Value found at index : %d\n",targetIndex);
    }
}

int findTargetIndex(int values[],int left,int right,int target){

    int targetIndex = -1;

    while(left <= right){

        int mid = (left + right) / 2;

        if(target == values[mid]){
            targetIndex = mid;
            break;
        }
        else if(target < values[mid]){
            //go left
            right = mid - 1;
        }
        else if(target > values[mid]){
            //go right
            left = mid + 1;
        }
    }

    return targetIndex;
}
