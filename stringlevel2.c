// #include<stdio.h>                                       //count the number of spaces in the string
// #include<string.h>
// int main(){
//     char str[100];
//     printf("Enter the string here:");
//     gets(str);
//     int count=0;
//     for(int i=0;str[i]!='\0';i++){
//         if(str[i]==' '){
//             count++;
//         }
//     }
//     printf("The number of spaces in the string is:%d",count);
//     return 0;
// }
// #include <stdio.h>                   //mergeing all the words in a sentence

// int main() {
//     char str[101];
    
//     // Read the entire line including spaces
//     fgets(str, sizeof(str), stdin);
    
//     // Print each word on a separate line
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (i == 0 || str[i-1] == ' ') {
//             printf("->->->");
//         }
//         if (str[i] != ' ')
//             printf("%c", str[i]);
//         else
//             printf("\n");
//     }

//     return 0;
// }
