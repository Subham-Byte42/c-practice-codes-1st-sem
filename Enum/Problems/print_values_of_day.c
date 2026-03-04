#include<stdio.h>            //print the value of the days in a week
enum days{
    MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY
};
int main(){
        enum days today=MONDAY;           //in enum also data stores as arrays
        printf("Today is %d",MONDAY);
        printf("Today is %d",TUESDAY);
        printf("Today is %d",WEDNESDAY);
        return 0;
}