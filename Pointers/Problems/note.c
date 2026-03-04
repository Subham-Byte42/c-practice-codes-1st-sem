#include<stdio.h>           //basic note
int main(){
    int n=5;
    int *ptr;
    ptr=&n;      //pointer stores address
    *ptr=50;    //replace with the new value
    printf("New value:%d",n);
    return 0;
}