#include<stdio.h>                      //celcius to farenheit
int temp(int c){
    int faren=(9/5*c)+32;
    return faren;
}
int main(){
    int c;
    printf("Enter temp in celcius:");
    scanf("%d",&c);
    int fa=temp(c);
    printf("The temp in faren is:%d",fa);
    return 0;
}