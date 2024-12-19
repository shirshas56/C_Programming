#include<stdio.h>
int main(){
    int matrix[20][20],matrix2[20][20],result[20][20];
    int row, col,i,j;

    printf("Enter the no. of rows:\n");
    scanf("%d",&row);
    printf("Enter the no. of columns:\n");
    scanf("%d",&col);

    printf("Enter the elements in the row:\n");
    for(i=0;i<row;i++){
         for(j = 0; j < col; j++){
            printf("matrix[%d][%d]=",i,j);
            scanf("%d",&matrix[i][j]);
         }
    }

    printf("Enter the elements in the column:\n");
    for(i=0;i<row;i++){
         for(j = 0; j < col; j++){
            printf("matrix[%d][%d]=",i,j);
            scanf("%d",&matrix2[i][j]);
         }
    }
    printf("Matrix after addition:\n");
    for(i=0;i<row;i++){
         for(j = 0; j < col; j++){
            result[i][j]= matrix[i][j] + matrix2[i][j];
            printf("%d",result[i][j]);
         }
    printf("\n");
}
printf("matrix after subtraction:\n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        result[i][j]= matrix[i][j] - matrix2[i][j];
            printf("%d",result[i][j]);
         }
         printf("\n");
    }
    return 0;
}