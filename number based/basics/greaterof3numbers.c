#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter number 1:- ");
    scanf("%d",&a);
    printf("Enter number 2:- ");
    scanf("%d",&b);
    printf("Enter number 3:- ");
    scanf("%d",&c);
    if(a==b && a==c)
        printf("All numbers are equal to %d.",a);
    else if(a>=b && a>=c)
        printf("%d is greatest of all 3 numbers.",a);
    else if(b>=a && b>=c)
        printf("%d is greatest of all 3 numbers.",b);
    else
        printf("%d is greatest of all 3 numbers.",c);
    return 0;
}
