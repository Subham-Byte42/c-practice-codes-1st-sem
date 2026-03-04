#include<stdio.h>               //read contents of a text file and display them using file functions
int main(){
    FILE *fp;
    int ch;
    fp=fopen("student.txt","w+");
    if(fp==NULL){
        printf("File creation failed!\n");
    }
    fprintf(fp,"Name:Subham Meher\n");
    fprintf(fp,"Div:Aids-4\n");
    fprintf(fp,"Ern:2503031590041\n");
    printf("File creation successfull!\n");
    rewind(fp);
    while((ch=fgetc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}