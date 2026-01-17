#include<stdio.h>
#include<limits.h>
int main(){
    int n,max=INT_MIN,min=INT_MAX;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];
    }
    printf("Minimum element in array = %d.\n",min);
    printf("Maximum element in array = %d.\n",max);
    return 0;
}
