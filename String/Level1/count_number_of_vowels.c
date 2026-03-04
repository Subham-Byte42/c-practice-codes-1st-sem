#include<stdio.h>                                  //to count the number of vowels in a string
#include<ctype.h>
int main(){
    char str[30];
    int i,count=0;
    printf("Enter the word you want to count:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);                                //To lower all the input "tolower()" is used
        if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count++;
        }
    }
    printf("The number of vowels:%d",count);
    return 0;
}