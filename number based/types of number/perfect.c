#include<stdio.h>
int factor(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++)
        if(n%i==0)
            sum+=i;
    return sum;
}
int main(){
    int n,sum;
    printf("Enter a number:- ");
    scanf("%d",&n);
    sum=factor(n);
    if(n==sum)
        printf("\n%d is a perfect number.\n",n);
    else
        printf("\n%d is not a perfect number.\n",n);
    return 0;
}
