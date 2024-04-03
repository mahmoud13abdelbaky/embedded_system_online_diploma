#include <stdio.h>
int power_(int n1, int n2);

int main()
{
    int base, power;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number (positive integer): ");
    scanf("%d", &power);
    printf("%d^%d = %d", base, power, power_(base, power));
    return 0;
}
int power_(int base, int power)
{
    if (power != 0)
    {
        return base * power_(base, power - 1);
    }
    else
    {
        return 1;
    }
}
