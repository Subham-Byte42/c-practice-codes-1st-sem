#include<stdio.h>                //reverse number untill n using recursion
void reverse(int a){
    if(a==0){
        return;
    }
    else{
        printf("%d\n",a);
        reverse(a-1);
    }
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    reverse(n);
    return 0;
}