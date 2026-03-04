#include<stdio.h>                           //printing of name
int main(){
    char name[10];
    printf("Enter the name you want to print:");   //Remember in scnaf fucn in string prints the name until a space
    scanf("%s",name);                              //In scanf there is no need to write "&"
    printf("%s",name);
    return 0;
}