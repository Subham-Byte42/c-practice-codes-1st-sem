// #include<stdio.h>                   //simple structure
// struct student{
//     int roll;
//     char name[50];
//     int marks;
// };
//  int main(){
//     struct student s1={5,"subham",50};  //or we can indivisually scan for input
//     printf("%d\n",s1.roll);
//     printf("%s\n",s1.name);
//     printf("%d",s1.marks);
//     return 0;

// }
// #include<stdio.h>
// struct book{
//     char title[100];
//     int price;
// };
// int main(){
//     struct book b;
//     printf("Enter title:");
//     scanf("%s",b.title);
//     printf("Enter price:");
//     scanf("%d",&b.price);
//     printf("Title:%s\n",b.title);
//     printf("Price:%d",b.price);
//     return 0;
// }
                                            //array of structure
// #include<stdio.h>                    //listing information of three students
// struct students{
//     char name[20];
//     int roll;
//     int marks;
// };
// int main(){
//     struct students s[3];
//     for(int i=0;i<3;i++){
//         printf("Enter name:");
//         scanf("%s",s[i].name);
//         printf("Enter roll:");
//         scanf("%d",&s[i].roll);
//         printf("Enter marks:");
//         scanf("%d",&s[i].marks);
//     }
//     int highest=s[0].marks;
//     for(int i=0;i<3;i++){
//         if(s[i].marks>highest){
//         highest=s[i].marks;
//     }

//     }
//     printf("Highest mark:%d",highest);
//     for(int i=0;i<3;i++){
//         printf("Name:%s\n",s[i].name);
//         printf("Roll:%d\n",s[i].roll);
//         printf("Marks:%d\n",s[i].marks);
//     }
//     return 0;
// }
// #include<stdio.h>                //print the name if marks is greater than 60            
// struct students{
//     char name[20];
//     int roll;
//     int marks;
// };
// int main(){
//     struct students s[3];
//     for(int i=0;i<3;i++){
//         printf("Enter name:");
//         scanf("%s",s[i].name);
//         printf("Enter roll:");
//         scanf("%d",&s[i].roll);
//         printf("Enter marks:");
//         scanf("%d",&s[i].marks);
//     }
//     for(int i=0;i<3;i++){
//         if(s[i].marks>60){
//             printf("%s",s[i].name);
//         }
//     }
//     return 0;
// }
// #include<stdio.h>                print the name according to the marks obtain           
// struct students{
//     char name[20];
//     int roll;
//     int marks;
// };
// int main(){
//     struct students s[3];
//     for(int i=0;i<3;i++){
//         printf("Enter name:");
//         scanf("%s",s[i].name);
//         printf("Enter roll:");
//         scanf("%d",&s[i].roll);
//         printf("Enter marks:");
//         scanf("%d",&s[i].marks);
//     }
//     int temp;
//     for(int i=0;i<3;i++){
//         for(int j=i+1;j<3;j++){
//             if(s[i].marks>s[j].marks){
//                 temp=s[i].marks;
//                 s[i].marks=s[j].marks;
//                 s[j].marks=temp;
//             }
//         }
//     }
//     for(int i=0;i<3;i++){
//         printf("Name:%s\n",s[i].name);
//         printf("Roll:%d\n",s[i].roll);
//         printf("Marks:%d\n",s[i].marks);
//     }
//     return 0;
// }

