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
    int n,found=0;
    printf("Enter a number:- ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(isPrime(i) && isPrime(n-i)){
            if(found==0)
                printf("\nPrime pair(s) exist(s) to represent %d.\n",n);
            printf("\n[Pair %d] %d + %d = %d.", ++found,i, n - i,n);
        }
    }
    if (!found)
        printf("\nNo such prime pair exists which represent %d.",n);
    printf("\n\nThis shows every even integer greater than 2 can be expressed as the sum of two prime numbers - GoldBatch Conjecture.\n");
    return 0;
}
