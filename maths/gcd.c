#include<stdio.h>
int main(){
    int a,b,gcd;
    printf("Enter number 1:- ");
    scanf("%d",&a);
    printf("Enter number 2:- ");
    scanf("%d",&b);
    int temp1=a,temp2=b;
    while(b!=0){
        gcd=b;
        b=a%b;
        a=gcd;
    }
    printf("GCD of %d and %d is %d.",temp1,temp2,gcd);
    return 0;
}
