#include<stdio.h>               //create a file and write something in it
int main(){
    FILE *fp;
    fp=fopen("student.txt","w");
    if(fp==NULL){
        printf("File creation failed!");
        return 1;
    }
    fprintf(fp,"Name:Subham Meher\n");
    fprintf(fp,"Class:1st year BTECH\n");
    fprintf(fp,"Enroll:2503031590041\n");
    fclose(fp);
    printf("Data written successfully.\n");
    return 0;
}