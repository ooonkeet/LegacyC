#include<stdio.h>
int fib(int n,int a,int b){
    if(n<3)
        return;
    int curr=a+b;
    printf("%d  ",curr);
    return fib(n-1,b,curr);
}
int main(){
    int n;
    printf("Enter last term of series:- ");
    scanf("%d",&n);
    while(n<1){
        printf("Enter correctly,value should be greater than 0.\n");
        printf("Enter last term of series:- ");
        scanf("%d",&n);
    }
    printf("Series:  ");
    if(n==1)
        printf("%d",0);
    else if(n==2)
        printf("%d  %d",0,1);
    else{
        printf("%d  %d  ",0,1);
        fib(n,0,1);
    }
    return 0;
}
