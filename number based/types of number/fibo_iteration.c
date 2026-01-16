#include<stdio.h>
int main(){
    int n;
    printf("Enter last term of series:- ");
    scanf("%d",&n);
    while(n<1){
        printf("Enter correctly,value should be greater than 0.\n");
        printf("Enter last term of series:- ");
        scanf("%d",&n);
    }
    printf("Series:  ");
    int a=1,b=0;
    for(int i=1;i<=n;i++){
        if(i>2){
            int current=a+b;
            b=a;
            a=current;
            printf("%d  ",current);
        }
        else if(i==1)
            printf("%d  ",b);
        else if(i==2)
            printf("%d  ",a);
    }
    return 0;
}
