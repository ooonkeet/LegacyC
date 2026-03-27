#include<stdio.h>
int main(){
    int n,new=0,pl=1;
    printf("Enter a number:- ");
    scanf("%d",&n);
    if(n==0){
        printf("Result integer = %d.\n",1);
        return 0;
    }
    while(n!=0){
        int dig=n%10;
        if(dig==0)
            dig=1;
        new=new+dig*pl;
        pl*=10;
        n/=10;
    }
    printf("\nResult integer = %d.\n",new);
    return 0;
}
