#include<stdio.h>               //count the number of words in a line
int main(){
    FILE *fp;
    fp=fopen("student.txt","w+");
    if(fp==NULL){
        printf("File construction failed!");
        return 1;
    }
    fprintf(fp,"Name:Subham Meher\n");
    fprintf(fp,"Class:AIDS-4\n");
    fprintf(fp,"ENo:2503031490041\n");
    rewind(fp);
    int words=0;
    int inword=0;
    int ch;
    while((ch=fgetc(fp))!=EOF){
        if(ch==' ' || ch=='\n'){
            inword=0;
        }else if(inword==0){
            inword=1;
            words++;
        }
    }
    printf("The number of words:%d",words);
    fclose(fp);
    return 0;
}