#include<stdio.h>                               //count the number of spaces in a string
int main(){
    char str[299];
    printf("Enter the string here:");
    gets(str);
    int i,space=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            space++;
        }
    }
    printf("The number of spaces in the string is:%d",space);
    return 0;
}