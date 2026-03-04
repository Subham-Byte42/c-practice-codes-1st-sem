#include<stdio.h>                                   //print all the characters of a string separately
int main(){
    char str[399];
    printf("Enter the string here:");
    gets(str);
    int i;
    for(i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
    return 0;
}