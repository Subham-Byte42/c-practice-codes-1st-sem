// #include<stdio.h>                               //print 1 to n using recursion
// void numbers(int n){
//     if(n==0)    //until n=0 we have to repeat
//         return;
//     numbers(n-1);
//     printf("%d\n",n);
// }
// int main(){
//     int n;
//     printf("Enter the number here:");
//     scanf("%d",&n);
//     numbers(n);
//     return 0;
// }
// #include<stdio.h>                //reverse number untill n using recursion
// void reverse(int a){
//     if(a==0){
//         return;
//     }
//     else{
//         printf("%d\n",a);
//         reverse(a-1);
//     }
// }
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     reverse(n);
//     return 0;
// }
// #include<stdio.h>                   //sum of the first n numbers using recursion
// int sum(int n){
//     if(n==0){
//         return;
//     }
//     else{
//         return n+sum(n-1);
//     }
// }
// int main(){
//     int n,add;
//     printf("Enter n:");
//     scanf("%d",&n);
//     add=sum(n);
//     printf("The sum is:%d",add);
//     return 0;
// }
// #include<stdio.h>                //factorial of a number using recursion
// int factorial(int n){
//     if(n==1){
//         return;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     int fact;
//     fact=factorial(n);
//     printf("The factorial  of the number is given by:%d",fact);
//     return 0;
// }
// #include<stdio.h>                   //power of a function using recursion
// int power(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return x*pow(x,n-1);
//     }
// }
// int main(){
//     int x,n;
//     printf("Give the base x:");
//     scanf("%d",&x);
//     printf("Give the power n:");
//     scanf("%d",&n);
//     int pow;
//     pow=power(x,n);
//     printf("The answer is:%d",pow);
//     return 0;
// }
// #include<stdio.h>                       //printing of even numbers in between 1 to n
// void evenodd(int n){
//     if(n<2){
//         return;
//     }
//     evenodd(n-1);
//     if(n%2==0){
//         printf("%d\n",n);
//     }
// }
// int main(){
//     int num;
//     printf("Enter the value of num:");
//     scanf("%d",&num);
//     evenodd(num);
//     return 0;
// }
//  #include<stdio.h>                  //counting number of digits using recursion
//  int counting(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return 1+counting(n/10);
//     }
//  }
//  int main(){
//     int num;
//     printf("Enter number:");
//     scanf("%d",&num);
//     if(num==0){
//         printf("1");
//     }
//     else{
//     printf("%d",counting(num));
// }
//     return 0;
//  }
// #include<stdio.h>                   //sum of the digits of a number using recursion
// int add(num){
//     if(num==0){
//         return;
//     }
//     else{
//         return (num%10)+add(num/10);
//     }
// }
// int main(){
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     int sum;
//     sum=add(num);
//     printf("The sum of the digits:%d",sum);
//     return 0;
// }