#include <stdio.h>
#include <string.h>

int main()
{
    int max = 0, min = 0, count = 0;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    char small[100], large[100];
    for (int i = 0; i < len; i++)
    {
        count = 0;
        for (int j = i; str[j] != ' ' && str[j] != '\0'; j++)
        {
            count++;
        }
        if (count > max)
        {
            max = count;
            strncpy(large, str + i, max);
            large[max] = '\0';
        }
        if (count < min || min == 0)
        {
            min = count;
            strncpy(small, str + i, min);
            small[min] = '\0';
        }
        i += count;
    }
    printf("Smallest word is \"%s\"\n", small);
    printf("Largest word is \"%s\"\n", large);

    return 0;
}
