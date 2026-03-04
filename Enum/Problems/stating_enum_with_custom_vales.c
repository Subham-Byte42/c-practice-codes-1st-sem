#include<stdio.h>          //starting a enum with custrom values
enum cus{
    START=5,
    NEXT,NEXT1,NEXT2
};
int main(){
    enum cus custom=START;
    printf("%d\n",START);
    printf("%d\n",NEXT);
    printf("%d\n",NEXT1);
    printf("%d",NEXT2);
    return 0;
}