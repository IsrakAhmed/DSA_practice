// Perform addition & subtraction between two matrix


#include<stdio.h>

void main(){
    int row,column;
    printf("Enter row and column : ");
    scanf("%d%d",&row,&column);

    int matrix_1[row][column],i,j;
    int matrix_2[row][column],sum[row][column],subtraction[row][column];

    printf("\nEnter %d values in first matrix\n",row * column);
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            scanf("%d",&matrix_1[i][j]);
        }
    }

    printf("\nEnter %d values in second matrix\n",row * column);
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            scanf("%d",&matrix_2[i][j]);
        }
    }

    printf("\nThe first matrix: \n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("%d  ",matrix_1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe second matrix: \n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("%d  ",matrix_2[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Sum of two matrix: \n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("%d  ",matrix_1[i][j] + matrix_2[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Subtraction of two matrix: \n");
    for(i = 0; i < row; i++){
        for(j = 0; j < column; j++){
            printf("%d  ",matrix_1[i][j] - matrix_2[i][j]);
        }
        printf("\n");
    }
}
