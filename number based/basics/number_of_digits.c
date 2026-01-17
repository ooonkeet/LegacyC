#include<stdio.h>
int main(){
    int n,c=0,t;
    printf("Enter a number:- ");
    scanf("%d",&n);
    t=n;
    while(t!=0){
        c++;
        t/=10;
    }
    if(n==0||c==1)
        printf("%d consists of 1 digit.",n);
    else
        printf("%d consists of %d digits.",n,c);
    return 0;
}
