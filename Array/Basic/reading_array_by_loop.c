                        //reading array by using loop

#include<stdio.h>                                        
int main(){  
    int mark[5],i;
    for(i=0;i<5;i++){
        printf("Enter the mark:");
        scanf("%d",&mark[i]);
    }
    for(i=0;i<5;i++){
        printf("%d\n",mark[i]);
    }
    return 0;
}