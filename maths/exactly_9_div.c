#include<stdio.h>
int factor(int n){
    int sum=0;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            sum++;
    if(sum==9)
        return 1;
    return 0;
}
int main(){
    int m,n,it=0;
    printf("Enter lower bound = ");
    scanf("%d",&m);
    printf("Enter upper bound = ");
    scanf("%d",&n);
    for(int i=m;i<=n;i++){
        if(factor(i)){
            if(it==0)
                printf("\nNumber(s) with exactly 9 divisors are.\n");
            printf("\nDivisor %d = %d.",++it,i);
        }
    }
    if(it==0)
        printf("\nThere no numbers exist within range having exactly 9 divisors!!");
    return 0;
}
