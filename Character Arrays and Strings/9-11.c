#include<stdio.h>
#include<string.h>
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
int main()
{
    char str1[20],str2[20];
    scanf("%s %s",str1,str2);
    int d=strcmp(str1,str2);
    if(d==0) printf("First string is equal to the second string\n");
    else if(d>0) printf("First string is greater than second string\n");
    else printf("First string is less than second string\n");
}