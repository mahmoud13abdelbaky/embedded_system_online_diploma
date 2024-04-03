#include <stdio.h>
int main()
{
    int arr[10][10],i,j,rows,cols;
    printf("Enter rows and colomn of matrix: ");
    scanf("%d%d",&rows,&cols);
    printf("Enter elements of matrix:\n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("Enter elements of a%d%d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nEntered matrix : \n");
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of matrix : \n");
    for ( i = 0; i < cols; i++)
    {
        for ( j = 0; j < rows; j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }

    
    return 0;
}