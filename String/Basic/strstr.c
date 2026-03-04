#include<stdio.h>
int main(){
    int s1[10],s2[10];
    printf("Enter s1:");
    gets(s1);
    printf("Enter s2:");                                  //strstr(stringname,"the letter you want after the letter");
    gets(s2);
    printf("%s",strstr(s2,"e"));
    return 0;
}