#include<stdio.h>                print the name according to the marks obtain           
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
    int temp;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(s[i].marks>s[j].marks){
                temp=s[i].marks;
                s[i].marks=s[j].marks;
                s[j].marks=temp;
            }
        }
    }
    for(int i=0;i<3;i++){
        printf("Name:%s\n",s[i].name);
        printf("Roll:%d\n",s[i].roll);
        printf("Marks:%d\n",s[i].marks);
    }
    return 0;
}