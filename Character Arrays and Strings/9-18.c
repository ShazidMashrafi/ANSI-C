#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int newLen = len;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            for (int j = newLen; j > i; j--)
            {
                str[j + 1] = str[j];
            }

            str[i] = ' ';
            str[i + 1] = ' ';
            newLen += 2;
            i++;
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
