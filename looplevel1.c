// #include<stdio.h>    //multiplication table
// int main(){
//     int num,i;
//     printf("Enter the number which you want to see the multiplication table:");
//     scanf("%d",&num);
//     for(i=1;i<=10;i++){
//         printf("%d*%d=%d\n",num,i,num*i);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()                  //factorial of a given number
// {
//     int n,i,fact=1;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("\nThe factorial of the number is given by:%d",fact);
// return 0;
// }
// #include<stdio.h>                    //count the number of digits
// int main(){
//     int num,count=0;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     if(num<0){
//         num=-num;
//     }
//     else if(num==0){
//         count=1;
//     }
//     else{
//         // for(;num!=0;num=num/10){
//         //     count++;
//         // }
//         // printf("Number of digit:%d",count);
//         while(num!=0){
//             num=num/10;
//             count++;
//         }
//         printf("The number of digit:%d",count);
//     }
//     return 0;
    
// }
// #include<stdio.h>                    //reverse a number using loop
// int main(){
//     int num,rev=0,d;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     for(;num!=0;num=num/10){
//         d=num%10;
//         rev=rev*10+d;
//     }
//     printf("The reverse of this number is:%d",rev);
//     return 0;
// }
// #include<stdio.h>            //printing of square of numbers untill a specific one
// int main()
// {
//     int i,square,n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     // for(i=1;i<=n;i++){
//     //     square=i*i;
//     //     printf("\nsquare of %d is %d",i,square);
//     i=1;
//     while(i<=n){
//         square=i*i;
//         i++;
//         printf("%d\n",square);
//     }
    
//     return 0;
// }
// #include<stdio.h>                //printfing the sum of the even numbers using loops
// int main()
// {
//     int n,i,sum=0;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(i=2;i<=n;i+=2){
//         sum=sum+i;
//     }
//     printf("The sum  of even number is:%d",sum);
//     return 0;
// }
// #include<stdio.h>                //printing the reverse of natural number
// int main(){
//     int n,i;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--){
//         printf("%d\n",i);
//     }
//     return 0;
// }