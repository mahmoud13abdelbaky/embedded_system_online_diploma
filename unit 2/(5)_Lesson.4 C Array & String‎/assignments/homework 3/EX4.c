#include <stdio.h>
int main()
{
    int arr[20],i,element,num,location;
    printf("Enter no of elements: ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d",&element);
    printf("Enter the location: ");
    scanf("%d",&location);
    for ( i = num; i >= location; i--)
    {
        arr[i] = arr[i-1];
    }
    num++;
    arr[location-1] = element;

    for ( i = 0; i < num; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
    return 0;
}