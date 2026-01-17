#include<stdio.h>
int main(){
    int m,n,sum=0;
    printf("Enter number of elements in array 1: ");
    scanf("%d",&n);
    printf("Enter number of elements in array 2: ");
    scanf("%d",&m);
    if(m!=n)
        printf("Arrays can not be same anymore!!\n");
    else{
        int arr1[n],arr2[m];
        printf("\nEnter elements of the array 1.\n\n");
        for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr1[i]);
        }
        printf("\nEnter elements of the array 2.\n\n");
        for(int i=0;i<m;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr2[i]);
        }
        for(int idx=0;idx<n;idx++)
            if(arr1[idx]!=arr2[idx]){
                printf("\nArrays are not same.\n");
                return 0;
            }
        printf("\nArrays are same!\n");
    }
     return 0;
}
