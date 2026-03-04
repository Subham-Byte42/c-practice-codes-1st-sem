#include<stdio.h>        //using of boolean values in enum and use it in if condition
enum boolean{
    FALSE,TRUE
};
int main(){
    enum boolean flag;
    if(flag==TRUE){
        printf("The condition is true");
    }else{
        printf("The condition is not true");
    }
    return 0;
}