#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    printf("Enter s1:");
    gets(s1);
    printf("Enter s2:");
    gets(s2);
    printf("%s",strchr(s1,'i'));              //strchr returns the first appearance of the chracter after the letter
    return 0;                                 //remember to use single code  
}