// // #include<stdio.h>
// // int main(){
// //     int marks[5]={10,20,30,40,50};
// //     printf("%d\n",marks[0]);     //prints 10  
// //     printf("%d\n",marks[1]);     //prints 20
// //     printf("%d\n",marks[2]);     //prints 30
// //     printf("%d\n",marks[3]);     //prints 40
// //     printf("%d\n",marks[4]);     //prints 50
// //     return 0;
// // }
// // #include<stdio.h>
// // int main(){                                         //reading array without loops
// //     int marks[3];
// //     printf("Enter the first number:");
// //     scanf("%d",&marks[0]);
// //     printf("Enter the second number:");
// //     scanf("%d",&marks[1]);
// //     printf("Enter the third number:");
// //     scanf("%d",&marks[2]);
// //     printf("%d\n",marks[0]);
// //     printf("%d\n",marks[1]);
// //     printf("%d\n",marks[2]);
// //     return 0;
// // }
// // #include<stdio.h>                                        //reading array by using loop
// // int main(){  
// //     int mark[5],i;
// //     for(i=0;i<5;i++){
// //         printf("Enter the mark:");
// //         scanf("%d",&mark[i]);
// //     }
// //     for(i=0;i<5;i++){
// //         printf("%d\n",mark[i]);
// //     }
// //     return 0;
// // }
// #include<stdio.h>                                            //by taking inputs from the user find how many of those are positive and negative
// int main(){
//     int num[10],pos=0,neg=0,i;
//     for(i=0;i<10;i++){
//         printf("Enter the number:");
//         scanf("%d",&num[i]);
//     }
//     for(i=0;i<10;i++){
//         if(num[i]>0){
//             pos=pos+1;
//         }
//         else{
//             neg=neg+1;
//         }
//     }
//     printf("The number of positive numbers:%d\n",pos);
//     printf("The number of negative numbers:%d",neg);
//     return 0;
// }
                                                 //2D ARRAY
                                                 
#include<stdio.h>
int main(){
    int data[3][3]={{1,2,3},{4,5,6},{7,8,9}}; //remember here we have to give double bracket('}')
    printf("%d ",data[0][0]);
    printf("%d ",data[0][1]);
    printf("%d\n",data[0][2]);
    
    printf("%d ",data[1][0]);
    printf("%d ",data[1][1]);
    printf("%d\n",data[1][2]);

    printf("%d ",data[2][0]);
    printf("%d ",data[2][1]);
    printf("%d\n",data[2][2]);
    return 0;
}                                                 
// #include<stdio.h>                         //2D array using loops
// int main(){
//     int data[3][3],i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("Enter the data:");
//             scanf("%d",&data[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d ",data[i][j]);
//         }
//         printf("\n");
//     }
// }