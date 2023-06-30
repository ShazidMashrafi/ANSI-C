#include <stdio.h>
int main()
{
    int i, len1 = 0, len2 = 0;
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }
    if (len1 < len2)
        printf("First string is less than second string\n");
    else if (len1 > len2)
        printf("First string is greater than second string\n");
    else
    {
        for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
        {
            if (str1[i] != str2[i])
                break;
        }
        if (str1[i] == '\0' && str2[i] == '\0')
            printf("Strings are same\n");
        else
            printf("Strings are not same but eqaul in length\n");
    }
}