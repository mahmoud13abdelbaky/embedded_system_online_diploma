#include <stdio.h>
long long factorial(int n);
int main()
{
    int n;
    printf("Enter an positive number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %lld",n,factorial(n));

    return 0;
}

long long factorial(int n)
{
    long long z;
    if (n != 1)
    {
        z = n*factorial(n-1);
    }else{
        z = 1;
    }
    return z;
}