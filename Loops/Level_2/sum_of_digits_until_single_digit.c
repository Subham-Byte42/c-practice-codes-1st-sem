#include <stdio.h>                               //keeping the sum of digits of a number until it
                                                  //   become single digit
int main() {
    int n, sum, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Repeat until single digit
    for (; n >= 10; n = sum) {

        sum = 0;      // reset sum
        temp = n;     // store current number

        // Sum digits using for loop
        for (; temp > 0; temp = temp / 10) {
            sum = sum + (temp % 10);
        }
    }

    printf("Single digit sum = %d\n", n);

    return 0;
} 