#include<stdio.h>                       //printing of even numbers in between 1 to n
void evenodd(int n){
    if(n<2){
        return;
    }
    evenodd(n-1);
    if(n%2==0){
        printf("%d\n",n);
    }
}
int main(){
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    evenodd(num);
    return 0;
}