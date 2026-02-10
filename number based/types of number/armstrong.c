#include<stdio.h>
int dig(int a){
    int c=0;
    while(a!=0){
        a/=10;
        c++;
    }
    return c;
}
long long power(long long b,int e){
    if(e==0)
        return 1;
    return b*power(b,e-1);
}

int main(){
    int cnt;
    long long sum=0,n,t;
    printf("Enter a number:- ");
    scanf("%lld",&n);
    t=n;
    cnt=dig(n);
    while(n>0){
        long long pow=power(n%10,cnt);
        sum=sum+pow;
        n/=10;
    }
    if(t==sum)
        printf("\nNumber %lld is an armstrong number.\n",t);
    else
        printf("\nNumber %lld is not an armstrong number.\n",t);
    return 0;
    }
