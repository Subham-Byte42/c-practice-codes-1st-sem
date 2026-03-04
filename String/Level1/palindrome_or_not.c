#include<stdio.h>                                             //to check wheather a string is palindrome or not
#include<string.h>
int main(){
    char str[200],rev[200];
    printf("Enter the word you want to check:");
    gets(str);

    strcpy(rev,str);
    strrev(rev);
    if(strcmp(rev,str)==0){
        printf("The given string is a palindrome.");
    }
    else{
        printf("The given string is not a palindrome.");
    }
    return 0;
}