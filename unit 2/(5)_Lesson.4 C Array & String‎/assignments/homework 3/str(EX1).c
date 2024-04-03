#include <stdio.h>
int main()
{
    char str[100], character;
    int i, counter =0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find frequency: ");
    scanf("%c", &character);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (character == str[i])
        {
            counter++;
        }
    }
    printf("Frequency of %c = %d", character, counter);

    return 0;
}