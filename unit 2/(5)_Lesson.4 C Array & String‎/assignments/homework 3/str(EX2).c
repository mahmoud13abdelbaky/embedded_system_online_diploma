#include <stdio.h>
int main()
{
    char str[100],i,length;
    printf("Enter a string: ");
    gets(str);
    
    for ( i = 0; str[i] != '\0'; i++);
    printf("Length of string = %d",i);
    
    return 0;
}   