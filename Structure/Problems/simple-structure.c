#include<stdio.h>                   //simple structure
struct student{
    int roll;
    char name[50];
    int marks;
};
 int main(){
    struct student s1={5,"subham",50};  //or we can indivisually scan for input
    printf("%d\n",s1.roll);
    printf("%s\n",s1.name);
    printf("%d",s1.marks);
    return 0;

}