#include<stdio.h>                       //max of two numbers
int max(int a,int b){
    if(a>b){
        return a;
    }
    else if(b>a){
        return b;
    }
    else {
        return a;
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int m=max(a,b);
    printf("%d",m);
    return 0;
}