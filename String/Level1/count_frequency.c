#include<stdio.h>                               //count the frequency of a given number in a string
int main(){
    char str[399];
    printf("Enter the string:");
    gets(str);
    char dig;
    int digit=0;
    printf("Enter the digit you want to count:");
    scanf("%c",&dig);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==dig){
            digit++;
        }
    }
    printf("The frequency of character is:%d",digit);
    return 0;

}