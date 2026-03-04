#include<stdio.h>                                //print        1                      
int main(){                                               //    12   
    int n,i,j;                                            //    123
    printf("Give how many line you want:");               //    1234
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}