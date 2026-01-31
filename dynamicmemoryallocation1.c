// #include<stdio.h>                       //memory allocation of an integer
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     ptr=(int *)malloc(sizeof(int));
//     if(ptr==NULL){
//         printf("Memory allocation failed");
//         return 1;
//     }
//     printf("Enter the value:");
//     scanf("%d",ptr);//while taking the input of pointer we does not need to write &
//     printf("You have entered:%d",*ptr);
//     free(ptr);
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int n,i;
//     int *arr;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//      arr=(int *)malloc(n*sizeof(int));   //in malloc there is multiplication
//      if(arr==NULL){
//         printf("Memory allocation failed!");
//      return 1;
//     }
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Entered integers are:");
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     free(arr);
//     return 0;
// }
// #include<stdio.h>                   //memory allocation using calloc of an array
// #include<stdlib.h>
// int main(){
//     int n,i;
//     int *arr;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     arr=(int *)calloc(n,sizeof(int));           //in calloc there is comma
//     if(arr==NULL){
//         printf("Memmory allocation failed!");
//     }
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Entered numbers are:");
//     for(i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     free(arr);
//     return 0;
// }
// #include<stdio.h>                   //sum of n numbers using memory allocation
// #include<stdlib.h>
// int main(){
//     int sum=0,i,n;
//     int *ptr;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     ptr=(int *)malloc(n*sizeof(int));
//     if(ptr==NULL){
//         printf("Memory allocation failed!");
//         return 1;
//     }
//     for(i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     printf("Sum is:%d",sum);
//     free(ptr);
//     return 0;

// }
// #include<stdio.h>               //memory allocation of float and finding their average
// #include<stdlib.h>
// int main(){
//     int n,i;
//     float *arr,sum=0,avg;
//     printf("Enter how many input you want:");
//     scanf("%d",&n);
//     arr=(float *)malloc(n*sizeof(float));
//     for(i=0;i<n;i++){
//         scanf("%f",&arr[i]);
//         sum=sum+arr[i];
//     }
//     avg=sum/n;
//     printf("The average of all the elements of this array:%f",avg);
//     free(arr);
//     return 0;
// }
