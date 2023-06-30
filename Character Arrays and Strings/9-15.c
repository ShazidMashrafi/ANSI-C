#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    char s[100];
    printf("Enter a string: ");
    gets(s);
    int rows = (strlen(s) + 1) / 2;

    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j <= rows - i; j++)
        {
            printf("   ");
        }
        for (j = i; j < i * 2; j++)
        {
            printf("%2c ", s[j - 1]);
        }
        for (j = 2 * (i - 1); j >= i; j--)
        {
            printf("%2c ", s[j - 1]);
        }
        printf("\n");
    }

    return 0;
}