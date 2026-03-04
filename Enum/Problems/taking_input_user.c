#include<stdio.h>            //taking input from user
enum opinion{
    o1,o2,o3
};
int main(){
    enum opinion op;
    int choice;
    printf("0. OPTION1\n1. OPTION2\n2. OPTION3\n");
    printf("select a opinion:");
    scanf("%d",&choice);
    op=choice;
    switch(op){
        case o1:printf("You have choosen opinion 1.");
                        break;
        case o2:printf("You have choosen opinion 2.");
                        break;   
        case  o3:printf("You have choosen opinion 3.");                                            
                        break;
        default:printf("Not a valid opinion.");
                        break;                
    }
    return 0;

}