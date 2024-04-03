#include <stdio.h>
int main()
{
    int n,i;
    float arr[100],sum =0;
    printf("Enter the numbers of data:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("%d. Enter number: ",i+1);
        scanf("%f",&arr[i]);
        sum += arr[i];
    }
    printf("Average = %.2f",sum/n);
    
    return 0;
}