#include<stdio.h>                   //print of multi-plication number
void multi(int a){
    for(int i=1;i<=10;i++){
        printf("%d X %d=%d\n",a,i,a*i);
    }
}
int main(){
    int num;
    printf("Enter num:");
    scanf("%d",&num);
    multi(num);
    return 0;
}