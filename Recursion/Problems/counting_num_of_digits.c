 #include<stdio.h>                  //counting number of digits using recursion
 int counting(int n){
    if(n==0){
        return 0;
    }
    else{
        return 1+counting(n/10);
    }
 }
 int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    if(num==0){
        printf("1");
    }
    else{
    printf("%d",counting(num));
}
    return 0;
 }