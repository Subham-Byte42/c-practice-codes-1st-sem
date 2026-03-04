#include<stdio.h>               //count the number of character in a file
int main(){
    FILE *fp;
    fp=fopen("student.txt","w+");
    if(fp==NULL){
        printf("File creation failed!");
        return 1;
    }
    fprintf(fp,"Name:Subham Meher\n");
    fprintf(fp,"Roll:2503031590041\n");
    fprintf(fp,"Division:AIDS-4\n");
    rewind(fp);
    int ch,count=0;
    while((ch=fgetc(fp))!=EOF){
        count++;
    }
    printf("The number of character:%d",count);
    fclose(fp);
    return 0;
}