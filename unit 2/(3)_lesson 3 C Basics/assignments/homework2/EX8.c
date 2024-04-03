#include <stdio.h>
int main()
{
    char operator;
    float a, b;
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c", &operator);
    printf("Enter two operands : ");
    scanf("%f%f", &a, &b);
    switch (operator)
    {
    case '+':
        printf("%.1f %c %.1f = %.1f", a, operator, b, a + b);
        break;

    case '-':
        printf("%.1f %c %.1f = %.1f", a, operator, b, a - b);
        break;

    case '*':
        printf("%.1f %c %.1f = %.1f", a, operator, b, a * b);
        break;

    case '/':
        printf("%.1f %c %.1f = %.1f", a, operator, b, a / b);
        break;

    default:
        printf("Wrong operator!!!");
        break;
    }

    return 0;
}