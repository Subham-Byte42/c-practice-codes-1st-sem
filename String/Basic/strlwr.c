#include<stdio.h>
#include<string.h>
int main(){
    char s1[18];
    printf("Enter s1:");
    gets(s1);
    printf("%s",strlwr(s1));                     //strlwr changes all to lower case
    return 0;
}

              strncmp,strncat,strncpy,strnchr they use their property upto n number
              structure is property(s1,s1,n)