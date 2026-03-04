#include<stdio.h>
int main(){
    int Name[10];
    printf("Enter the name:");
    gets(Name);
    printf("The number of string:%d",strlen(Name));          //strlen prints the length of string
    return 0;
}