#include<stdio.h>
#include<limits.h>
int find_min(int arr[],int n){
    int f1=INT_MAX,f2=INT_MAX;
    for(int i=0;i<n;i++){
        if(f1>arr[i]){
            f2=f1;
            f1=arr[i];
        }
        else if(f1<arr[i]&&f2>arr[i])
            f2=arr[i];
    }
    return f2;
}
int main(){
    int n,small;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    while(n<2){
    printf("Enter correctly number of elements in array(should be greater than 1): ");
    scanf("%d",&n);
    }
    int arr[n];
    printf("\nEnter elements of the array.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    small=find_min(arr,n);
    printf("\nSecond minimum element in the array is = %d.\n",small);
    return 0;
}
