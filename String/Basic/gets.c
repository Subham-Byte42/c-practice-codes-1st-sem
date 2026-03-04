#include<stdio.h>
#include<string.h>
int main(){
    int name[10];
    printf("Entee the name:");                  //To read words after the space we need to use gets() function
    gets(name);
    printf("Name=%s",name);
    return 0;    
}