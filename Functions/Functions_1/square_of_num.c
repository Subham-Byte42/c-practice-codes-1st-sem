#include<stdio.h>                   //square of number
int squ(int a){
    return a*a;
}
int main(){
    int num,sq;
    printf("Enter num:");
    scanf("%d",&num);
    sq=squ(num);
    printf("%d",sq);
    return 0;
}