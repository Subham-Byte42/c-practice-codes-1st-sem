#include <stdio.h>                                                      //print the pattern given      

int main() {                                                            //54321
    int n, i, j;                                                        //4321
                                                                        //321
    printf("Enter how many lines you want to print: ");                 //21
    scanf("%d", &n);                                                    //1

    for(i = n; i >= 1; i--) {
        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}