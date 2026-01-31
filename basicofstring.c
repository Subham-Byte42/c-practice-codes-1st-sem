// #include<stdio.h>                           //printing of name
// int main(){
//     char name[10];
//     printf("Enter the name you want to print:");   //Remember in scnaf fucn in string prints the name until a space
//     scanf("%s",name);                              //In scanf there is no need to write "&"
//     printf("%s",name);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int name[10];
//     printf("Entee the name:");                  //To read words after the space we need to use gets() function
//     gets(name);
//     printf("Name=%s",name);
//     return 0;    
// }
// #include<stdio.h>
// int main(){
//     int Name[10];
//     printf("Enter the name:");
//     gets(Name);
//     printf("The number of string:%d",strlen(Name));          //strlen prints the length of string
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int s1[10],s2[10];
//     printf("Enter s1:");
//     gets(s1);
//     printf("Enter s2:");
//     gets(s2);
//     if(strcmp(s1,s2)==0){                               //strcmp is used to compare between string
//         printf("Both string are same");
//     }
//     else{
//         printf("The strings are not same.");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int s1[10],s2[10];
//     printf("Enter s1:");
//     gets(s1);
//     printf("Enter s2:");                                  //strstr(stringname,"the letter you want after the letter");
//     gets(s2);
//     printf("%s",strstr(s2,"e"));
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>                              //Remember you have to use #include<string.h> in string code
// int main(){
//     char s1[10],s2[10];
//     printf("Enter s1:");
//     gets(s1);
//     printf("Enter s2:");
//     gets(s2);
//     printf("%s",strcat(s1,s2));                //strcat(s1,s2) joins or combines two strings 
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s1[10],s2[10];
//     printf("Enter s1:");
//     gets(s1);
//     printf("Enter s2:");
//     gets(s2);
//     printf("%s",strchr(s1,'i'));              //strchr returns the first appearance of the chracter after the letter
//     return 0;                                 //remember to use single code  
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[20],s2[19];
//     printf("Enter s1:");
//     gets(s1);
//     printf("Enter s2:");
//     gets(s2);
//     printf("%s",strcpy(s1,s2));               //strcpy copy the second one to the first one
//     return 0;
// }
// #include<stdio.h>                    //strrev is used to reverse a string
// #include<string.h>
// int main(){
//     char s1[18];
//     printf("Enter s1:");
//     gets(s1);
//     printf("%s",strrev(s1));
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s1[18];
//     printf("Enter s1:");
//     gets(s1);
//     printf("%s",strlwr(s1));                     //strlwr changes all to lower case
//     return 0;
// }

              //strncmp,strncat,strncpy,strnchr they use their property upto n number
              //structure is property(s1,s1,n)