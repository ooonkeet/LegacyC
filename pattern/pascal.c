#include<stdio.h>
int main(){
    int n,k=1;
    printf("Enter number of lines:- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int sp=1;sp<=n-i;sp++)
            printf(" ");
        for(int j=0;j<=i;j++){
            if(j==0||i==0)
                k=1;
            else
                k=k*(i-j+1)/j;
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}
