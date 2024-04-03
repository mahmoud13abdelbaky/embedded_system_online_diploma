#include <stdio.h>
int main()
{
    float a[2][2],b[2][2],c[2][2];
    int row,col;
    printf("Enter the elements of 1st matrix\n");
    for ( row = 0; row < 2; row++)
    {
        for ( col = 0; col < 2; col++)
        {
            printf("Enter a%d%d: ",row+1,col+1);
            scanf("%f",&a[row][col]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for ( row = 0; row < 2; row++)
    {
        for ( col = 0; col < 2; col++)
        {
            printf("Enter b%d%d: ",row+1,col+1);
            scanf("%f",&b[row][col]);
        }
    }
    printf("\nSum of matrix:\n");
    for ( row = 0; row < 2; row++)
    {
        for ( col = 0; col < 2; col++)
        {
            c[row][col] = a[row][col] + b[row][col];
            printf("%.1f\t",c[row][col]);
        }
        printf("\n");
    }
    return 0;
}