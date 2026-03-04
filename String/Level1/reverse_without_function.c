#include<stdio.h>                       //reverse a string without using inbuilt function 
#include<ctype.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    printf("Enter the string here:");
    gets(str);
    int len,i;
    len=strlen(str);
    for(i=0;i<len;i++){
        rev[i]=str[len-i-1];
    }
    printf("The reverse of the number is:%s",rev);
    return 0;
}