#include<stdio.h>                                                  //       *
int main(){                                                        //      ***  
    int n,i,j,s;                                                   //     ***** 
    printf("Give how many line you want to print:");
    scanf("%d",&n);                                              //print the above pattern
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}