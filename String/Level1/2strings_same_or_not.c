#include<stdio.h>                               //check wheather two strings are same or not
int main(){
    char str[399],shu[200];
    printf("Enter the first string here:");
    gets(str);
    printf("Enter the second string here:");
    gets(shu);
    if(strcmp(str,shu)==0){
        printf("Both the strings are same.");
    }
    else{
        printf("Both strings are not same.");
    }
    return 0;
}