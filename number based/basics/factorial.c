#include<stdio.h>
#include<string.h>
void mult(char a[],int f){
    int len=strlen(a),carry=0;
    for(int i=len-1;i>=0;i--){
        int digit=a[i]-'0';
        int prod=digit*f+carry;
        a[i]=(prod%10)+'0';
        carry=prod/10;
    }
    while(carry){
        for(int i=strlen(a);i>=0;i--)
            a[i+1]=a[i];
        a[0]=(carry%10)+'0';
        carry/=10;
    }
}
void factString(int n){
    char fact[1000];
    strcpy(fact,"1");
    for(int i=2;i<=n;i++)
        mult(fact,i);
    printf("Factorial of %d is %s.",n,fact);
}
int main(){
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    factString(n);
    return 0;
}
