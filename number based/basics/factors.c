#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter a number:- ");
    scanf("%d",&n);
    int it=0;
    printf("\nFactors of %d are.\n",n);
    for(int i=1;i<=n/2;i++)
        if(n%i==0)
            printf("\nFactor %d: %d.",++it,i);
    return 0;
}
