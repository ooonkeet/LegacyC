#include<stdio.h>
int main(){
    int n,k,sum=0;
    float f;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements of the array.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        f=sqrt(arr[i]);
        k=f;
        if(f==k)
            sum+=arr[i];
    }
    printf("\nSum of positive square elements in the array = %d.\n",sum);
    return 0;
}
