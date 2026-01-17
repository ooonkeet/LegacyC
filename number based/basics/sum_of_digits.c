#include<stdio.h>
int main(){
    int n,c=0,t;
    printf("Enter a number:- ");
    scanf("%d",&n);
    t=n;
    while(t!=0){
        c+=t%10;
        t/=10;
    }
    if(c<0)
        c*=-1;
    printf("Sum of digits in number %d is %d.",n,c);
    return 0;
}
