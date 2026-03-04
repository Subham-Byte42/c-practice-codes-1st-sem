#include<stdio.h>       //enum for traffic light colors and display their integer values
enum light{
    RED,
    YELLOW,
    GREEN
};
int main(){
    enum light traffic;
    printf("%d\n",RED);
    printf("%d\n",YELLOW);
    printf("%d",GREEN);
    return 0;
}