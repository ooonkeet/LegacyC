#include<stdio.h>
/*
long long power(long long b,int e){
    if(e==0)
        return 1;
    return b*power(b,e-1);
}

variation 1 - SUITABLE FOR SMALLER VALUES....
*/

long long power(long long base,int exp){
    if(exp==0)
        return 1;
    long long half=power(base,exp/2);
    if(exp%2==0)
        return half*half;
    else
        return base*half*half;
}
//binary exponentiation
//it would work safely till - 2^62 or 10^18 or 3^39.
int main(){
    long long base;
    int exp;
    printf("Enter base: ");
    scanf("%lld",&base);
    printf("\nEnter exponent: ");
    scanf("%d",&exp);
    while(exp<0){
        printf("\nEnter exponent(should be positive): ");
        scanf("%d",&exp);
    }
    printf("\nResult of %lld^%d is = %lld.\n",base,exp,power(base,exp));
    return 0;
}
