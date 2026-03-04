#include<stdio.h>               //append text to an existing file
int main(){                     //append means insert
    FILE *fp;
    fp=fopen("student.txt","w");
    if(fp==NULL){
        printf("File creation failed!");
        return 1;
    }
    fprintf(fp,"Name:Subham Meher\n");
    fprintf(fp,"Div:AIDS-4\n");
    fprintf(fp,"Enroll:2503031590041\n");
    fclose(fp);
    fopen("student.txt","a+");          //the function for append is "a"
    fprintf(fp,"Name:Ankit Meher\n");
    fprintf(fp,"Div:Biotechnology\n");
    fprintf(fp,"Enroll:2203031245523\n");
    rewind(fp);
    int ch;
    while((ch=fgetc(fp))!=EOF){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}