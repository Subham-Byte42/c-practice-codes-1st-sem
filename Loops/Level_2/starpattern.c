#include<stdio.h>                                    //Print this pattern:

                                                            //   *
                                                            //   **
                                                            //   ***
                                                            //   ****
int main(){
    int i,j,n;
    printf("Give how many line you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}