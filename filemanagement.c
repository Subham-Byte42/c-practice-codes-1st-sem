// #include<stdio.h>               //create a file and write something in it
// int main(){
//     FILE *fp;
//     fp=fopen("student.txt","w");
//     if(fp==NULL){
//         printf("File creation failed!");
//         return 1;
//     }
//     fprintf(fp,"Name:Subham Meher\n");
//     fprintf(fp,"Class:1st year BTECH\n");
//     fprintf(fp,"Enroll:2503031590041\n");
//     fclose(fp);
//     printf("Data written successfully.\n");
//     return 0;
// }
// #include<stdio.h>               //read contents of a text file and display them using file functions
// int main(){
//     FILE *fp;
//     int ch;
//     fp=fopen("student.txt","w+");
//     if(fp==NULL){
//         printf("File creation failed!\n");
//     }
//     fprintf(fp,"Name:Subham Meher\n");
//     fprintf(fp,"Div:Aids-4\n");
//     fprintf(fp,"Ern:2503031590041\n");
//     printf("File creation successfull!\n");
//     rewind(fp);
//     while((ch=fgetc(fp))!=EOF){
//         putchar(ch);
//     }
//     fclose(fp);
//     return 0;
// }
// #include<stdio.h>               //count the number of character in a file
// int main(){
//     FILE *fp;
//     fp=fopen("student.txt","w+");
//     if(fp==NULL){
//         printf("File creation failed!");
//         return 1;
//     }
//     fprintf(fp,"Name:Subham Meher\n");
//     fprintf(fp,"Roll:2503031590041\n");
//     fprintf(fp,"Division:AIDS-4\n");
//     rewind(fp);
//     int ch,count=0;
//     while((ch=fgetc(fp))!=EOF){
//         count++;
//     }
//     printf("The number of character:%d",count);
//     fclose(fp);
//     return 0;
// }
// #include<stdio.h>               //count the number of words in a line
// int main(){
//     FILE *fp;
//     fp=fopen("student.txt","w+");
//     if(fp==NULL){
//         printf("File construction failed!");
//         return 1;
//     }
//     fprintf(fp,"Name:Subham Meher\n");
//     fprintf(fp,"Class:AIDS-4\n");
//     fprintf(fp,"ENo:2503031490041\n");
//     rewind(fp);
//     int words=0;
//     int inword=0;
//     int ch;
//     while((ch=fgetc(fp))!=EOF){
//         if(ch==' ' || ch=='\n'){
//             inword=0;
//         }else if(inword==0){
//             inword=1;
//             words++;
//         }
//     }
//     printf("The number of words:%d",words);
//     fclose(fp);
//     return 0;
// }
// #include<stdio.h>               //append text to an existing file
// int main(){                     //append means insert
//     FILE *fp;
//     fp=fopen("student.txt","w");
//     if(fp==NULL){
//         printf("File creation failed!");
//         return 1;
//     }
//     fprintf(fp,"Name:Subham Meher\n");
//     fprintf(fp,"Div:AIDS-4\n");
//     fprintf(fp,"Enroll:2503031590041\n");
//     fclose(fp);
//     fopen("student.txt","a+");          //the function for append is "a"
//     fprintf(fp,"Name:Ankit Meher\n");
//     fprintf(fp,"Div:Biotechnology\n");
//     fprintf(fp,"Enroll:2203031245523\n");
//     rewind(fp);
//     int ch;
//     while((ch=fgetc(fp))!=EOF){
//         putchar(ch);
//     }
//     fclose(fp);
//     return 0;
// }