#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers : ");
    scanf("%f%f%f",&a,&b,&c);
    if (a>=b && a>=c)
    {
        printf("largest number = %.2f", a);
    }
    else if (b>=a && b>=c)
    {
        printf("largest number = %.2f", b);
    }
    else
    {
        printf("largest number = %.2f", c);
    }
    return 0;
}