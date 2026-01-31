// #include<stdio.h>                       //test wheather a number is prime or not.
// int main()
// {
//     int i,n,prime=1;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     if(n<=0){
//         prime=0;
//     }
//     else{
//         for(i=2;i*i<=n;i++){
//             if(n%i==0){
//                 prime=0;
//             }
//         }
//     } 
//     if(prime){
//         printf("%d is a prime number.",n);
//     }
//     else{
//         printf("%d is not a prime number.",n);
//     }
//     return 0;
    // }
// #include<stdio.h>                        //print prime numbers from 1 to 100
// int main(){
//     int i,j,prime;
//     for(i=2;i<=100;i++){
//         prime=1;
//         for(j=2;j*j<=i;j++){
//             if(i%j==0){
//                 prime=0;
//                 break;
//             }
        
//     }

// if(prime){
//         printf("%d is prime.",i);
// }
// }
// return 0;
// }
// #include<stdio.h>                           //sum of the digits of a number
// int main(){
//     int num,d,sum=0;
//     printf("Enter the value of num;");
//     scanf("%d",&num);
//     for(;num>0;num=num/10){
//         d=num%10;
//     sum=sum+d;
//     }
//     printf("The sum of the digit is:%d",sum);
//     return 0;
// }
// #include<stdio.h>                             //wheather a number is palindrome or not
// int main(){
//     int num,rev=0,pal,d;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     pal=num;
//     for(;num!=0;num=num/10){
//         d=num%10;
//         rev=rev*10+d;
//     }
//     if(rev==pal){
//         printf("The number is a palindrome.");
//     }
//     else{
//         printf("The number is not a palindrome.");
//     }
//     return 0;
// }
// #include<stdio.h>                     //Greatest common divisor between two numbers
// int main(){
//     int num1,num2,i,gci;
//     printf("Enter the first number:");
//     scanf("%d",&num1);
//     printf("Enter the second number:");
//     scanf("%d",&num2);
//     for(i=1;i<=num1 && i<=num2;i++){
//         if(num1%i==0 && num2%i==0){
//             gci=i;
//         }
        
//     }
//     printf("The value of GCI is:%d",gci);
//     return 0;
// }
// #include<stdio.h>                          //fiboniccai series
// int main(){
//     int n,a=0,b=1,next,i;
//     printf("Enter how many digits you want to print:");
//     scanf("%d",&n);
//     printf("The fabninocci series:%d ,%d ,",a,b);
//     for(i=3;i<=n;i++){
//         next=a+b;
//         printf("%d ,",next);
//         a=b;
//         b=next;
//     }
//     return 0;
// }
// #include<stdio.h>                       //count the number of even or odd digit in a number
// int main(){
//     int num,d,count1=0,count2=0;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     for(;num>0;num=num/10){
//         d=num%10;
//         if(d%2==0){
//             count1++;
//         }
//         else{
//             count2++;
//         }
//     }
//     printf("The number of even digit in this number is:%d\n",count1);
//     printf("The number of odd digit in the number is :%d",count2);
//     return 0;
// }
//#include<stdio.h>                                    //Print this pattern:

                                                            //   *
                                                            //   **
                                                            //   ***
                                                            //   ****
// int main(){
//     int i,j,n;
//     printf("Give how many line you want:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;

// }
// #include<stdio.h>                                //print      1                      
// int main(){                                                   12   
//     int n,i,j;                                                123
//     printf("Give how many line you want:");                   1234
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>                               //keeping the sum of digits of a number until it
                                                     //become single digit
// int main() {
//     int n, sum, temp;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     // Repeat until single digit
//     for (; n >= 10; n = sum) {

//         sum = 0;      // reset sum
//         temp = n;     // store current number

//         // Sum digits using for loop
//         for (; temp > 0; temp = temp / 10) {
//             sum = sum + (temp % 10);
//         }
//     }

//     printf("Single digit sum = %d\n", n);

//     return 0;
// } 
// #include<stdio.h>                                        //find the binary of a given number using loop
// int main()
// {
//     int n,rem,place=1,binary=0,num;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     num=n;
//      for(;n>0;){
//         rem=n%2;
//         binary=binary+rem*place;
//         place=place*10;
//         n=n/2;
//      }
//      printf("The binary of the number %d is %d",num,binary);
//      return 0;
// }
