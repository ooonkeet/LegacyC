#include<stdio.h>
long long fact(int n){
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}
int main(){
    int n,t;
    printf("Enter a number:- ");
    scanf("%d",&n);
    t=n;
    long long sum=0;
    while(n>0){
        sum+=fact(n%10);
        n/=10;
    }
    if(sum==t)
        printf("\n%d is a strong number.\n",t);
    else
        printf("\n%d is not a strong number.\n",t);
    return 0;
}
