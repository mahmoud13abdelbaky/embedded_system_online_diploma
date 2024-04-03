#include <stdio.h>
int main()
{
    int n,count;
    unsigned long long factorial = 1;
    printf("Enter an integer : ");
    scanf("%d", &n);
    if ( n<0)
    {
        printf("Error!!! factorial of negative number doesn't exist ");
    }
    else
    {
        for ( count = 2; count <= n; count++)
        {
            factorial *= count;
        }
        printf("factorial = %llu",factorial);
    }

    return 0;
}