#include<stdio.h>
int factor(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++)
        if(n%i==0)
            sum+=i;
    return sum;
}
int main(){
    int m,n,sum1,sum2;
    printf("Enter number 1:- ");
    scanf("%d",&m);
    printf("Enter number 2:- ");
    scanf("%d",&n);
    sum1=factor(m);
    sum2=factor(n);
    if(n==sum1 && m==sum2)
        printf("\n%d and %d are amicable pairs.\n",m,n);
    else
        printf("\n%d and %d are not amicable pairs.\n",m,n);
    return 0;
}
