#include<stdio.h>                    //strrev is used to reverse a string
#include<string.h>
int main(){
    char s1[18];
    printf("Enter s1:");
    gets(s1);
    printf("%s",strrev(s1));
    return 0;
}