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
    int cnt,it=0;
    long long m,n,t,sum;
    printf("Enter lower bound number:- ");
    scanf("%lld",&m);
    printf("Enter upper bound number:- ");
    scanf("%lld",&n);
    for(long long i=m;i<=n;i++){
        sum=0;
        t=i;
        cnt=dig(t);
        while(t!=0){
            long long pow=power(t%10,cnt);
            sum=sum+pow;
            t/=10;
        }
        if(i==sum){
            if(it==0)
                printf("\nArmstrong numbers between %lld and %lld are.\n",m,n);
            printf("\nArmstrong number %d = %lld",++it,i);

        }
    }
    if(it==0)
        printf("\nNo armstrong numbers are present between %lld and %lld.\n",m,n);
    return 0;
}
