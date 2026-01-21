#include<stdio.h>
#define OFFS 100000
#define SIZE 200000
//caution - values upto 1 lakh is acceptable, don't send anything above that.
//As C does not have its inbuilt hash-map, the limit is manually set up to 1 lakh on both ends - positive and negative
int main(){
    int m,n;
    printf("Enter size of the array 1: ");
    scanf("%d",&m);
    printf("Enter size of the array 2: ");
    scanf("%d",&n);
    int arr1[m],arr2[n];
    printf("\nEnter elements of array one, one by one.\n\n");
    for(int i=0;i<m;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter elements of array two, one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr2[i]);
    }
    int vis[SIZE]={0};
    if(m>=n){
        for(int i=0;i<m;i++){
            int idx=arr1[i]+OFFS;
            vis[idx]++;
        }
        for(int j=0;j<n;j++){
            int idx=arr2[j]+OFFS;
            if(!vis[idx]){
                printf("\nArrays are not subset of each other.\n");
                return 0;
            }
        }
        if(m==n){
            printf("Arrays are equal with element(s):  ");
            for(int i=0;i<n;i++)
                printf("%d  ",arr2[i]);
        }
        else{
            printf("\nArray %d is subset of Array %d with common elements:  ",2,1);
            for(int i=0;i<n;i++)
                printf("%d  ",arr2[i]);
        }
    }
    else{
        for(int i=0;i<n;i++){
            int idx=arr2[i]+OFFS;
            vis[idx]++;
        }
        for(int j=0;j<m;j++){
            int idx=arr1[j]+OFFS;
            if(!vis[idx]){
                printf("\nArrays are not subset of each other.\n");
                return 0;
            }
        }
        printf("\nArray %d is subset of Array %d with common elements:  ",1,2);
        for(int i=0;i<m;i++)
            printf("%d  ",arr1[i]);
    }
    return 0;
}
