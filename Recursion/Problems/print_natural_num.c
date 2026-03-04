#include<stdio.h>                               //print 1 to n using recursion
void numbers(int n){
    if(n==0)    //until n=0 we have to repeat
        return;
    numbers(n-1);
    printf("%d\n",n);
}
int main(){
    int n;
    printf("Enter the number here:");
    scanf("%d",&n);
    numbers(n);
    return 0;
}