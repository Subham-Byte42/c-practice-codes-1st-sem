// #include<stdio.h>                                  //to count the number of vowels in a string
// #include<ctype.h>
// int main(){
//     char str[30];
//     int i,count=0;
//     printf("Enter the word you want to count:");
//     gets(str);
//     for(i=0;str[i]!='\0';i++){
//         char ch=tolower(str[i]);                                //To lower all the input "tolower()" is used
//         if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){
//             count++;
//         }
//     }
//     printf("The number of vowels:%d",count);
//     return 0;
// }
// #include<stdio.h>                                             //to check wheather a string is palindrome or not
// #include<string.h>
// int main(){
//     char str[200],rev[200];
//     printf("Enter the word you want to check:");
//     gets(str);

//     strcpy(rev,str);
//     strrev(rev);
//     if(strcmp(rev,str)==0){
//         printf("The given string is a palindrome.");
//     }
//     else{
//         printf("The given string is not a palindrome.");
//     }
//     return 0;
// }
// #include<stdio.h>                               //to change a string into lower or upper case
// #include<string.h>
// int main(){
//     char str[329];
//     printf("Enter the string:");
//     gets(str);
//     int i;
//     for(i=0;str[i]!='\0';i++){
//         str[i]=toupper(str[i]);                 //to upper change the string to uppercase letters
//     }
//     printf("The upper case is:%s",str);
//     return 0;
// }
// #include<stdio.h>                               //Find the length of a string without using strlen
// #include<string.h>
// int main(){
//     char str[299];
//     printf("Enter the word here:");
//     gets(str);
//     int i,count=0;
//     for(i=0;str[i]!=0;i++){
//         count++;
//     }
//     printf("The length of the word is:%d",count);
//     return 0;
// }
// #include<stdio.h>                                       //count the number of alphabets,special character & digits in a stirng
// #include<ctype.h>
// #include<string.h>
// int main(){
//     char str[200];
//     printf("Enter the string here:");
//     gets(str);
//     int alphabet=0,digit=0,special=0;                   // "isalpha" , "isdigit" is used to compare
//     for(int i=0;str[i]!='\0';i++){
//         if(isalpha(str[i])){
//             alphabet++;
//         }
//         else if(isdigit(str[i])){
//             digit++;
//         }
//         else if(str[i]!=' ' && str[i]!='\n'){
//             special++;
//         }
//     }
//     printf("The number of alphabet is:%d\n",alphabet);
//     printf("The number of digit is:%d\n",digit);
//     printf("The number of special character is:%d",special);
//     return 0;

// }
// #include<stdio.h>                       //reverse a string without using inbuilt function 
// #include<ctype.h>
// #include<string.h>
// int main(){
//     char str[100],rev[100];
//     printf("Enter the string here:");
//     gets(str);
//     int len,i;
//     len=strlen(str);
//     for(i=0;i<len;i++){
//         rev[i]=str[len-i-1];
//     }
//     printf("The reverse of the number is:%s",rev);
//     return 0;
// }
// #include<stdio.h>                               //count the number of spaces in a string
// int main(){
//     char str[299];
//     printf("Enter the string here:");
//     gets(str);
//     int i,space=0;
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]==' '){
//             space++;
//         }
//     }
//     printf("The number of spaces in the string is:%d",space);
//     return 0;
// }
// #include<stdio.h>                               //check wheather two strings are same or not
// int main(){
//     char str[399],shu[200];
//     printf("Enter the first string here:");
//     gets(str);
//     printf("Enter the second string here:");
//     gets(shu);
//     if(strcmp(str,shu)==0){
//         printf("Both the strings are same.");
//     }
//     else{
//         printf("Both strings are not same.");
//     }
//     return 0;
// }
// #include<stdio.h>                                   //print all the characters of a string separately
// int main(){
//     char str[399];
//     printf("Enter the string here:");
//     gets(str);
//     int i;
//     for(i=0;str[i]!='\0';i++){
//         printf("%c\n",str[i]);
//     }
//     return 0;
// }
// #include<stdio.h>                               //count the frequency of a given number in a string
// int main(){
//     char str[399];
//     printf("Enter the string:");
//     gets(str);
//     char dig;
//     int digit=0;
//     printf("Enter the digit you want to count:");
//     scanf("%c",&dig);
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]==dig){
//             digit++;
//         }
//     }
//     printf("The frequency of character is:%d",digit);
//     return 0;

// }