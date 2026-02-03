#include<stdio.h>
int main(){
    int m,n;
    printf("Enter a number to generate multiplication table:- ");
    scanf("%d",&m);
    printf("Enter times upto which the multiplication table needs to be generated:- ");
    scanf("%d",&n);
    printf("\nMultiplication table of %d is.\n",m);
    for(int i=1;i<=n;i++)
        printf("%d * %d = %d.\n",m,i,m*i);
    return 0;
}
