#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements of array one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    int left=0,right=n-1;
    while(left<right){
        arr[left]+=arr[right];
        arr[right]=arr[left]-arr[right];
        arr[left]-=arr[right];
        left++;
        right--;
    }
    printf("\nReversed array elements are:  ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
