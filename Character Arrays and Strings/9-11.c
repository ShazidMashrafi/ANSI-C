#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int result = strncmp(str1, str2,100);

    if (result == 0)
    {
        printf("First string is equal to second string.\n");
    }
    else if (result > 0)
    {
        printf("First string is less than second string.\n");
    }
    else
    {
        printf("First string is greater than second string.\n");
    }

    return 0;
}
