#include <stdio.h>
int main()
{
    int arr[20], i, element, num;
    printf("Enter no of elements: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    i = 0;
    while (i < num && arr[i] != element)
    {
        i++;
    }

    if (i < num)
    {
        printf("Number found at the location %d", i + 1);
    }
    else
    {
        printf("Number is not found");
    }

    return 0;
}