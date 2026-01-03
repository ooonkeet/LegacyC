#include<stdio.h>
int main(){
    int a,b,maximum;
    printf("Enter number 1:- ");
    scanf("%d",&a);
    printf("Enter number 2:- ");
    scanf("%d",&b);
    maximum=(a>b)?a:b;
    while(1){
        if(maximum%a==0 && maximum%b==0){
            printf("LCM of %d and %d is = %d.",a,b,maximum);
            break;
        }
        maximum++;
    }
    return 0;
}
