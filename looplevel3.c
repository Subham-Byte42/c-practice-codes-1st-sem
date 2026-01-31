// #include<stdio.h>                                                  //       *
// int main(){                                                        //      ***  
//     int n,i,j,s;                                                   //     ***** 
//     printf("Give how many line you want to print:");
//     scanf("%d",&n);                                              //print the above pattern
//     for(i=1;i<=n;i++){
//         for(s=1;s<=n-i;s++){
//             printf(" ");
//         }
//         for(j=1;j<=(2*i-1);j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){                                                      //print 54321                   
//     int n,i,j;                                                           4321                                                          
//     printf("Enter how many line you want to print:");                    321
//     scanf("%d",&n);                                                      21
//     for(i=n;i>=1;i--){                                                   1
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//             n=n-1;
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h >                                       //check strong number
// int main(){
//     int n,i,fact=1,sum=0,d,num;
//     printf("Enter the number:");
//     scanf("%d",&num);
//     n=num;
//     while(n != 0){
//         d=n%10;
//     for(i=1;i<=d;i++){
//         fact=fact*i;
//     }
//     sum=sum+fact;
//     n=n/10;
// }
//     if(sum==num){
//         printf("The number %d is a strong number.",num);
//     }
//     else{
//         printf("The number %d is not a strong number.",num);
//     }
//     return 0;
// }