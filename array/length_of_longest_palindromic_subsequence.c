#include<stdio.h>
int findMax(int a,int b){
    if(a>=b)
       return a;
    else
        return b;
}
int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    while(n<1){
        printf("Enter the size correctly: ");
        scanf("%d",&n);
    }
    int arr[n];
    printf("\nEnter elements of array one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    int dp[n];
    for(int i=0;i<n;i++)
        dp[i]=1;
    for(int i=n-2;i>=0;i--){
        int prev=0;
        for(int j=i+1;j<n;j++){
            int temp=dp[j];
            if(arr[i]==arr[j])
                dp[j]=2+prev;
            else
                dp[j]=findMax(dp[j],dp[j-1]);
            prev=temp;
        }
    }
    int len=dp[n-1];
    printf("\nLength of longest palindromic subsequence = %d.\n",len);
    return 0;
}

