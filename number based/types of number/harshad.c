#include<stdio.h>
int dig(int a){
    int c=0;
    while(a!=0){
        c=c+(a%10);
        a/=10;
    }
    return c;
}
int main(){
    int n,sum;
    printf("Enter a number:- ");
    scanf("%d",&n);
    sum=dig(n);
    if(n%sum==0)
        printf("\n%d is a Harshad Number.\n",n);
    else
        printf("\n%d is not a Harshad Number.\n",n);
    return 0;
}
