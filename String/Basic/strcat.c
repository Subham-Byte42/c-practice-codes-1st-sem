#include<stdio.h>
#include<string.h>                              //Remember you have to use #include<string.h> in string code
int main(){
    char s1[10],s2[10];
    printf("Enter s1:");
    gets(s1);
    printf("Enter s2:");
    gets(s2);
    printf("%s",strcat(s1,s2));                //strcat(s1,s2) joins or combines two strings 
    return 0;
}