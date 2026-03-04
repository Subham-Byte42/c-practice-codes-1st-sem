#include<stdio.h>
int main(){
    int s1[10],s2[10];
    printf("Enter s1:");
    gets(s1);
    printf("Enter s2:");
    gets(s2);
    if(strcmp(s1,s2)==0){                               //strcmp is used to compare between string
        printf("Both string are same");
    }
    else{
        printf("The strings are not same.");
    }
    return 0;
}