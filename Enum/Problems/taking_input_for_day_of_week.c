#include<stdio.h>             //taking input for day of a week
enum day{
    mon=1,tue,wed,thurs,fri,sat,sun
};
int main(){
    enum day d;
    int num;
    printf("Enter the number of day:");
    scanf("%d",&num);
    d=num;
    switch(d){
        case mon:printf("MONDAY");
                break;
        case tue:printf("TUESDAY");
                break;
        case wed:printf("WEDNESDAY");
                break;
        case thurs:printf("THURSDAY");
                break;
        case fri:printf("FRIDAY");
                break;
        case sat:printf("SATURDAY");
                break;
        case sun:printf("SUNDAY");
                break; 
        default:printf("Not a valid date.");
                break;                                                                               
    }
    return 0;
}