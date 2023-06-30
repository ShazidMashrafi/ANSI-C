#include<stdio.h>
int main()
{
    char s1[200],s2[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    int i=0,len=0,j=0;
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }
    s1[len+j]='\0';

    printf("The concatenated string is \"%s\"",s1);
}