#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
        sum+=arr[i];
    printf("Sum of elements of the array: %d",sum);
    return 0;
}
