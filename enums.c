// #include<stdio.h>            //print the value of the days in a week
// enum days{
//     MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY
// };
// int main(){
//         enum days today=MONDAY;           //in enum also data stores as arrays
//         printf("Today is %d",MONDAY);
//         printf("Today is %d",TUESDAY);
//         printf("Today is %d",WEDNESDAY);
//         return 0;
// }
// #include<stdio.h>       //enum for traffic light colors and display their integer values
// enum light{
//     RED,
//     YELLOW,
//     GREEN
// };
// int main(){
//     enum light traffic;
//     printf("%d\n",RED);
//     printf("%d\n",YELLOW);
//     printf("%d",GREEN);
//     return 0;
// }
// #include<stdio.h>         //print the name of month using a variable
// enum month{
//     jan,feb,mar,apr,may,
//     jun,jul,aug,sep,oct,nov,dec
// };
// int main(){
//     enum month m=mar;
//     switch(m){
//         case jan:printf("JANUARY");
//                 break;
//         case feb:printf("FEBRYARY");
//                     break;
//         case mar:printf("March");
//                             break;
//         case apr:printf("April");
//                             break;
//         case may:printf("May");
//                             break;
//         case jun:printf("JUNe");
//                             break;
//         case jul:printf("JUly");
//                             break;

//         case aug:printf("August");
//                             break;

//         case sep:printf("September");
//                             break;
//         case oct:printf("Pctober");
//                 break;
//         case nov:printf("November");
//                 break;
//         case dec:printf("December");
//                 break;
//         default:printf("Not a valid month");
//              break;           
//     }
//     return 0;
// }
// #include<stdio.h>        //using of boolean values in enum and use it in if condition
// enum boolean{
//     FALSE,TRUE
// };
// int main(){
//     enum boolean flag;
//     if(flag==TRUE){
//         printf("The condition is true");
//     }else{
//         printf("The condition is not true");
//     }
//     return 0;
// }
// #include<stdio.h>          //starting a enum with custrom values
// enum cus{
//     START=5,
//     NEXT,NEXT1,NEXT2
// };
// int main(){
//     enum cus custom=START;
//     printf("%d\n",START);
//     printf("%d\n",NEXT);
//     printf("%d\n",NEXT1);
//     printf("%d",NEXT2);
//     return 0;
// }
// #include<stdio.h>                       //using of enum in performing operations
// enum ope{
//     add=1,subs,mul,div
// };
// int main(){
//     int a=2,b=3;
//     int choice;
//      printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
//      printf("Enter which you want:");
//      scanf("%d",&choice);
//     switch(choice){
//         case add:printf("%d",a+b);
//                 break;
//         case subs:printf("%d",a-b);
//                 break;
//         case mul:printf("%d",a*b);
//                 break;
//         case div:printf("%d",a/b);
//                 break;
//         default:printf("not a valid operator.");
//                 break;                                          
//     }
// return 0;
// }
// #include<stdio.h>            //taking input from user
// enum opinion{
//     o1,o2,o3
// };
// int main(){
//     enum opinion op;
//     int choice;
//     printf("0. OPTION1\n1. OPTION2\n2. OPTION3\n");
//     printf("select a opinion:");
//     scanf("%d",&choice);
//     op=choice;
//     switch(op){
//         case o1:printf("You have choosen opinion 1.");
//                         break;
//         case o2:printf("You have choosen opinion 2.");
//                         break;   
//         case  o3:printf("You have choosen opinion 3.");                                            
//                         break;
//         default:printf("Not a valid opinion.");
//                         break;                
//     }
//     return 0;

// }
// #include<stdio.h>             //taking input for day of a week
// enum day{
//     mon=1,tue,wed,thurs,fri,sat,sun
// };
// int main(){
//     enum day d;
//     int num;
//     printf("Enter the number of day:");
//     scanf("%d",&num);
//     d=num;
//     switch(d){
//         case mon:printf("MONDAY");
//                 break;
//         case tue:printf("TUESDAY");
//                 break;
//         case wed:printf("WEDNESDAY");
//                 break;
//         case thurs:printf("THURSDAY");
//                 break;
//         case fri:printf("FRIDAY");
//                 break;
//         case sat:printf("SATURDAY");
//                 break;
//         case sun:printf("SUNDAY");
//                 break; 
//         default:printf("Not a valid date.");
//                 break;                                                                               
//     }
//     return 0;
// }
