#include<stdio.h>                               //Find the length of a string without using strlen
#include<string.h>
int main(){
    char str[299];
    printf("Enter the word here:");
    gets(str);
    int i,count=0;
    for(i=0;str[i]!=0;i++){
        count++;
    }
    printf("The length of the word is:%d",count);
    return 0;
}