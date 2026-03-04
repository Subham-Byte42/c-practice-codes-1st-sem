                            //reading array without loops

#include<stdio.h>
int main(){                                         
    int marks[3];
    printf("Enter the first number:");
    scanf("%d",&marks[0]);
    printf("Enter the second number:");
    scanf("%d",&marks[1]);
    printf("Enter the third number:");
    scanf("%d",&marks[2]);
    printf("%d\n",marks[0]);
    printf("%d\n",marks[1]);
    printf("%d\n",marks[2]);
    return 0;
}