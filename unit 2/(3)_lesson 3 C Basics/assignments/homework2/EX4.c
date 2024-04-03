#include <stdio.h>
int main()
{
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    if (a > 0)
    {
        printf("%.2f is positive.", a);
    }
    else if (a == 0)
    {
        printf("you entered zero.");
    }
    else
    {
        printf("%.2f is negative", a);
    }
    return 0;
}