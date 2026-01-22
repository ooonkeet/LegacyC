#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines:- ");
    scanf("%d",&n);
    printf("\nPattern consisting equal number of stars as per iterations.\n");
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--)
            printf(" ");
        for(int k=1;k<=i;k++)
            printf("* ");
        printf("\n");
    }
    printf("\nPattern consisting incremental number of stars as per iterations.\n");
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--)
            printf(" ");
        for(int k=1;k<=i*2-1;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
