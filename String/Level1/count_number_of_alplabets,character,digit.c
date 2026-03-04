#include<stdio.h>                                       //count the number of alphabets,special character & digits in a stirng
#include<ctype.h>
#include<string.h>
int main(){
    char str[200];
    printf("Enter the string here:");
    gets(str);
    int alphabet=0,digit=0,special=0;                   // "isalpha" , "isdigit" is used to compare
    for(int i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            alphabet++;
        }
        else if(isdigit(str[i])){
            digit++;
        }
        else if(str[i]!=' ' && str[i]!='\n'){
            special++;
        }
    }
    printf("The number of alphabet is:%d\n",alphabet);
    printf("The number of digit is:%d\n",digit);
    printf("The number of special character is:%d",special);
    return 0;

}