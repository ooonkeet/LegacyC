#include<stdio.h>
int isPrime(int n){
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}
int main(){
    int m,n,it=0;
    printf("Enter lower bound number:- ");
    scanf("%d",&m);
    printf("Enter upper bound number:- ");
    scanf("%d",&n);
    for(int i=m;i<=n;i++){
        if (isPrime(i)) {
            if (it == 0)
                printf("\nPrime numbers between %d and %d are:\n", m, n);
            printf("Prime Number %d = %d\n", ++it, i);
        }
    }
    if(it==0)
        printf("\nThere are no prime numbers between %d and %d.",m,n);
    return 0;
}
