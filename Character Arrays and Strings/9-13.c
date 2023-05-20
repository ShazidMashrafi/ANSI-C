#include<stdio.h>
int main()
{
    int n,m;
    char s1[100],s2[100];
    printf("Enter string: ");
    gets(s1);
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);

    int len=strlen(s1);
    if(n>=len) printf("Invalid value of n\n");

    for(int i=n-1,j=0;i<len && j<m;i++,j++)
    {
        s2[j]=s1[i];;
    }
    printf("First string: %s\n",s1);
    printf("%d chartecrs copied from first string begining at %d is: %s",m,n,s2);
}