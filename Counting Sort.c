

/***    Counting Sort    ***/


#include <stdio.h>

void countingSort(int *arr,int size)
{

    int i;

    int max = arr[0];

    for (i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int countArray[max + 1];

    for (i = 0; i <= max; ++i)
    {
        countArray[i] = 0;
    }

    for (i = 0; i < size; i++)
    {
        countArray[arr[i]]++;
    }


    for (i = 1; i <= max; i++)
    {
        countArray[i] += countArray[i - 1];
    }

    int sortedArray[size];

    for (i = 0; i < size; i++)
    {
        sortedArray[countArray[arr[i]] - 1] = arr[i];

    }

    for (i = 0; i < size; i++)
    {
        arr[i] = sortedArray[i];
    }
}


void main()
{

    int size,i;

    printf("Enter Array Size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter Array Values: ");

    for (i = 0; i < size; ++i)
    {
        scanf("%d",&arr[i]);
    }

    countingSort(arr,size);

    printf("Sorted Array: ");
    for (i = 0; i < size; ++i)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");

}
