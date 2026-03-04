#include<stdio.h>
struct book{
    char title[100];
    int price;
};
int main(){
    struct book b;
    printf("Enter title:");
    scanf("%s",b.title);
    printf("Enter price:");
    scanf("%d",&b.price);
    printf("Title:%s\n",b.title);
    printf("Price:%d",b.price);
    return 0;
}