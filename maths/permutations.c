#include<stdio.h>
long long fact(int n){
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}
int main(){
    int n,r;
    long long result;
    printf("Enter a number of people(n):- ");
    scanf("%d",&n);
    printf("Enter a number of seats(r):- ");
    scanf("%d",&r);
    while(n<0||r<0||n<r){
        printf("Invalid input! n must be greater than or equal r and both non-negative.Enter correctly.\n");
        printf("\nEnter a number of people(n):- ");
        scanf("%d",&n);
        printf("Enter a number of seats(r):- ");
        scanf("%d",&r);
    }
    result=fact(n)/fact(n-r);
    printf("\nNumber of permutations for %d people and %d seats is = %lld\n",n,r,result);
    return 0;
}
