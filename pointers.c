// #include<stdio.h>               //Declare a pointer to an integer and print the value and address of a variable using it.
// int main(){
//     int n;
//     scanf("%d",&n);
//     int *ptr;
//     ptr=&n;
//     printf("%d\n",ptr);
//     printf("%d",*ptr);
//     return 0;
// }
// #include<stdio.h>               //swaping of numbers using pointers and function
// void swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int x,y;
//     printf("Enter X:");
//     scanf("%d",&x);
//     printf("\nEnter Y:");
//     scanf("%d",&y);
//     swap(&x,&y);
//     printf("X:%d",x);
//     printf("\nY:%d",y);
//     return 0;
// }
// #include<stdio.h>                               //sum  of two numbers 
// int sum(int *a,int *b){
//     return (*a+*b);
// }
// int main(){
//     int a,b,result;
//     printf("Enter a:");
//     scanf("%d",&a);
//     printf("Enter b:");
//     scanf("%d",&b);
//     result=sum(&a,&b);
//     printf("Sum:%d",result);
//     return 0;
// }
// #include<stdio.h>           //basic note
// int main(){
//     int n=5;
//     int *ptr;
//     ptr=&n;      //pointer stores address
//     *ptr=50;    //replace with the new value
//     printf("New value:%d",n);
//     return 0;
// }
// #include<stdio.h>                         //max of two numbers using pointer and function
// int max(int *a,int *b){
//     if(*a>*b){
//         return *a;
//     }
//     else{
//         return *b;
//     }
// }
// int main(){
//     int x,y,maximum;
//     printf("Enter x:");
//     scanf("%d",&x);
//     printf("Enter Y:");
//     scanf("%d",&y);
//      maximum=max(&x,&y);
//      printf("Max is:%d",maximum);
//      return 0;
// }
                                //if the value of pointer is NULL i.e. it is not pointing to any memory location
// #include<stdio.h>            //increment a variable using pointer
// int main(){
//     int num=11;
//     int *ptr;
//     ptr=&num;
//     (*ptr)++;
//     printf("Incremented value:%d",num);
//     return 0;
// }                                
