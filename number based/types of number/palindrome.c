#include<stdio.h>
int rev(int t){
    int c=0;
    while(t!=0){
        c=c*10+(t%10);
        t/=10;
    }
    return c;
}
int main(){
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    if(n/10==0)
        printf("%d is a palindrome number.",n);
    else{
        if(rev(n)==n)
            printf("%d is a palindrome number.",n);
        else
            printf("%d is not a palindrome number.",n);
    }
    return 0;
}
