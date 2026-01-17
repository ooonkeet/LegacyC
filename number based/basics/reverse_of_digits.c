#include<stdio.h>
int main(){
    int n,c=0,t;
    printf("Enter a number:- ");
    scanf("%d",&n);
    t=n;
    while(t!=0){
        c=c*10+(t%10);
        t/=10;
    }
    printf("Reverse of %d is %d.",n,c);
    return 0;
}
