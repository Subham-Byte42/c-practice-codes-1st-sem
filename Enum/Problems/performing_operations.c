#include<stdio.h>                       //using of enum in performing operations
enum ope{
    add=1,subs,mul,div
};
int main(){
    int a=2,b=3;
    int choice;
     printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
     printf("Enter which you want:");
     scanf("%d",&choice);
    switch(choice){
        case add:printf("%d",a+b);
                break;
        case subs:printf("%d",a-b);
                break;
        case mul:printf("%d",a*b);
                break;
        case div:printf("%d",a/b);
                break;
        default:printf("not a valid operator.");
                break;                                          
    }
return 0;
}