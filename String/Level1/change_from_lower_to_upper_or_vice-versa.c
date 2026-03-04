#include<stdio.h>                               //to change a string into lower or upper case
#include<string.h>
int main(){
    char str[329];
    printf("Enter the string:");
    gets(str);
    int i;
    for(i=0;str[i]!='\0';i++){
        str[i]=toupper(str[i]);                 //to upper change the string to uppercase letters
    }
    printf("The upper case is:%s",str);
    return 0;
}