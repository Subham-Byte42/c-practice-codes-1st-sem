// #include<stdio.h>                    //print hello world
//     void print(){
//         printf("Hello World!");
//     }
//     int main(){
//         print();
//         return 0;
//     }
// #include<stdio.h>                       //sum of two numbers 
// int add(int a,int b){
//     return a+b;
// }
// int main(){
//     int a,b,result;
//     scanf("%d %d",&a,&b);
//     result=add(a,b);
//     printf("Sum:%d",result);
//     return 0;
// }
// #include<stdio.h>                   //wheather a num is even or odd
// void check(int a){
//     if(a%2==0){
//         printf("Even");
//     }
//     else{
//         printf("Odd");
//     }
// }
// int main(){
//     int a;
//     printf("Enter a number:");
//     scanf("%d",&a);
//     check(a);
//     return 0;
// }
// #include<stdio.h>                   //square of number
// int squ(int a){
//     return a*a;
// }
// int main(){
//     int num,sq;
//     printf("Enter num:");
//     scanf("%d",&num);
//     sq=squ(num);
//     printf("%d",sq);
//     return 0;
// }
// #include<stdio.h>                       //max of two numbers
// int max(int a,int b){
//     if(a>b){
//         return a;
//     }
//     else if(b>a){
//         return b;
//     }
//     else {
//         return a;
//     }
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int m=max(a,b);
//     printf("%d",m);
//     return 0;
// }
// #include<stdio.h>                      //celcius to farenheit
// int temp(int c){
//     int faren=(9/5*c)+32;
//     return faren;
// }
// int main(){
//     int c;
//     printf("Enter temp in celcius:");
//     scanf("%d",&c);
//     int fa=temp(c);
//     printf("The temp in faren is:%d",fa);
//     return 0;
// }
// #include<stdio.h>                   //factorial of a num
// int facto(int a){
//     int fact=1;
//     for(int i=1;i<=a;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     int fact=facto(num);
//     printf("The factorial of the number:%d",fact);
//     return 0;
// }
// #include<stdio.h>               //check wheather a number is positive or negative
// void check(int a){
//     if(a>0){
//         printf("POSITIVE");
//     }
//     else if(a<0){
//         printf("NEGATIVE");
//     }
//     else{
//         printf("ZERO");
//     }
// }
// int main(){
//     int num;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     check(num);
//     return 0;
// }
// #include<stdio.h>                   //print of multi-plication number
// void multi(int a){
//     for(int i=1;i<=10;i++){
//         printf("%d X %d=%d\n",a,i,a*i);
//     }
// }
// int main(){
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     multi(num);
//     return 0;
// }
// #include<stdio.h>               //swaping of two numbers
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int  main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     swap(&a,&b);
//     printf("after swaping a:%d,b:%d",a,b);
//     return 0;
// }
