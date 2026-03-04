#include<stdio.h>         //print the name of month using a variable
enum month{
    jan,feb,mar,apr,may,
    jun,jul,aug,sep,oct,nov,dec
};
int main(){
    enum month m=mar;
    switch(m){
        case jan:printf("JANUARY");
                break;
        case feb:printf("FEBRYARY");
                    break;
        case mar:printf("March");
                            break;
        case apr:printf("April");
                            break;
        case may:printf("May");
                            break;
        case jun:printf("JUNe");
                            break;
        case jul:printf("JUly");
                            break;

        case aug:printf("August");
                            break;

        case sep:printf("September");
                            break;
        case oct:printf("Pctober");
                break;
        case nov:printf("November");
                break;
        case dec:printf("December");
                break;
        default:printf("Not a valid month");
             break;           
    }
    return 0;
}