#include<stdio.h>            //printing of square of numbers untill a specific one
int main()
{
    int i,square,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    // for(i=1;i<=n;i++){
    //     square=i*i;
    //     printf("\nsquare of %d is %d",i,square);
    i=1;
    while(i<=n){
        square=i*i;
        i++;
        printf("%d\n",square);
    }
    
    return 0;
}