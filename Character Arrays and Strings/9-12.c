#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],substr[10];
    printf("Enter a line of text: ");
    gets(str);
    printf("Enter substring: ");
    gets(substr);
    char *ptr=strstr(str,substr);
    
    int count=0;
    while(ptr!=NULL)
    {
        count++;
        ptr=strstr(ptr+1,substr);
    }
    printf("The number of occurences of substring \"%s\" in the line of text \"%s\" is %d\n",substr,str,count);
    return 0;
}