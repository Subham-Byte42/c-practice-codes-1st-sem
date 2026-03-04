                                       //     array of structure
#include<stdio.h>                    //listing information of three students
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
    int highest=s[0].marks;
    for(int i=0;i<3;i++){
        if(s[i].marks>highest){
        highest=s[i].marks;
    }

    }
    printf("Highest mark:%d",highest);
    for(int i=0;i<3;i++){
        printf("Name:%s\n",s[i].name);
        printf("Roll:%d\n",s[i].roll);
        printf("Marks:%d\n",s[i].marks);
    }
    return 0;
}