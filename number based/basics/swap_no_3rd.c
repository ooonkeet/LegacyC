#include<stdio.h>
int main(){
    int n,m;
    printf("Enter a number:- ");
    scanf("%d",&n);
    printf("Enter another number:- ");
    scanf("%d",&m);
    m=m+n;
    n=m-n;
    m=m-n;
    printf("First number = %d and Second number = %d",n,m);
    return 0;
}
