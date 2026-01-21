#include<stdio.h>
int main(){
    int m,n,len1=0,len2=0,idx=0;
    printf("Enter size of the array 1: ");
    scanf("%d",&m);
    printf("Enter size of the array 2: ");
    scanf("%d",&n);
    int arr1[m],arr2[n],merge[m+n];
    printf("\nEnter elements of array 1 one by one.\n\n");
    for(int i=0;i<m;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter elements of array 2 one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr2[i]);
    }
    while(len1<m && len2<n){
        if(arr1[len1]<=arr2[len2])
            merge[idx++]=arr1[len1++];
        else
            merge[idx++]=arr2[len2++];
    }
    while(len1<m)
        merge[idx++]=arr1[len1++];
    while(len2<n)
        merge[idx++]=arr2[len2++];
    printf("\nMerged sorted array:  ");
    for(int i=0;i<idx;i++)
        printf("%d  ",merge[i]);
    return 0;
}
