

/***    Insertion Sort    ***/


#include<stdio.h>

void insertionSort(int *arr,int n)
{

    int i,j,temp;

    for(i = 1; i < n; i++)
    {

        temp = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;

    }
}

void main()
{

    int n;

    printf("Enter Array Size:   ");
    scanf("%d",&n);

    int arr[n],i;

    printf("Enter Array Data:   ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");

    insertionSort(arr,n);

    printf("Sorted Array Data:   ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
