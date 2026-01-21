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
    int dp[n][n];
    for(int i=0;i<n;i++)
        dp[i][i]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            int k=i+j-1;
            if(arr[j]==arr[k] && i==2)
                dp[j][k]=2;
            else if(arr[j]==arr[k])
                dp[j][k]=2+dp[j+1][k-1];
            else
                dp[j][k]=findMax(dp[j+1][k],dp[j][k-1]);
        }
    }
    int len=dp[0][n-1];
    int res[len];
    int start=0,end=len-1,i=0,j=n-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            res[start++]=arr[i];
            res[end--]=arr[j];
            i++;
            j--;
        }
        else if(dp[i+1][j]>dp[i][j-1])
            i++;
        else
            j--;
    }
    printf("\nLongest Palindromic Subsequence:  ");
    for(int i=0;i<len;i++)
        printf("%d  ",res[i]);
    return 0;
}
