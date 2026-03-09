#include<stdio.h>
long long power(long long b,int e){
    if(e==0)
        return 1;
    return b*power(b,e-1);
}
int main(){
    int n,cnt=0,temp;
    printf("Enter a number:- ");
    scanf("%d",&n);
    long long k=n*n;
    temp=n;
    while(temp>0){
        cnt++;
        temp/=10;
    }
    int div=power(10,cnt);
    if(k%div==n)
        printf("\n%d is an automorphic number.\n",n);
    else
        printf("\n%d is not an automorphic number.\n",n);
    return 0;
}
