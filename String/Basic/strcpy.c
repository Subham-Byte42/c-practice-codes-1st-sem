#include<stdio.h>
#include<string.h>
int main(){
    char s1[20],s2[19];
    printf("Enter s1:");
    gets(s1);
    printf("Enter s2:");
    gets(s2);
    printf("%s",strcpy(s1,s2));               //strcpy copy the second one to the first one
    return 0;
}