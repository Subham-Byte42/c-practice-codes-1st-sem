#include<stdio.h>                //print the name if marks is greater than 60            
struct students{
    char name[20];
    int roll;
    int marks;
};
int main(){
    struct students s[3];
    for(int i=0;i<3;i++){
        printf("Enter name:");
        scanf("%s",s[i].name);
        printf("Enter roll:");
        scanf("%d",&s[i].roll);
        printf("Enter marks:");
        scanf("%d",&s[i].marks);
    }
    for(int i=0;i<3;i++){
        if(s[i].marks>60){
            printf("%s",s[i].name);
        }
    }
    return 0;
}