#include<stdio.h>
int sum(int a){
    if(a==1)
        return 1;
    return a+sum(a-1);
}
int main(){
    int n;
    printf("Enter the limit: ");
    scanf("%d",&n);
    while(n<=0){
        printf("Enter positive limit: ");
        scanf("%d",&n);
    }
    printf("\nSum of %d natural numbers = %d.\n",n,sum(n));
    return 0;
}
