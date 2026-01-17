#include<stdio.h>
int main(){
    int low,high,sum=0;
    printf("Enter lower bound:- ");
    scanf("%d",&low);
    printf("Enter higher bound:- ");
    scanf("%d",&high);
    for(int i=low;i<=high;i++)
        sum+=i;
    printf("Sum of integers between %d and %d is %d",low,high,sum);
    return 0;
}
