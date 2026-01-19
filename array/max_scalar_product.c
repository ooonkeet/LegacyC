#include<stdio.h>
int part(int a[],int left,int right){
    int piv=a[left],i=left+1,j=right,temp;
    while(i<=j){
        while(i<=right && a[i]<=piv)
            i++;
        while(j>=left && a[j]>piv)
            j--;
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[left];
    a[left]=a[j];
    a[j]=temp;
    return j;
}
void sort(int arr[],int l,int r){
    if(l<r){
        int p=part(arr,l,r);
        sort(arr,l,p-1);
        sort(arr,p+1,r);
    }
}
int main(){
    int n,prod=0;
    printf("Enter size of the vectors: ");
    scanf("%d",&n);
    int arr[n],arr1[n];
    printf("\nEnter elements of vector one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr,0,n-1);
    printf("\nEnter elements of vector two by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr1[i]);
    }
    sort(arr1,0,n-1);
    for(int i=0;i<n;i++)
        prod+=arr[i]*arr1[i];
    printf("\nMaximum scalar product of two vectors = %d.\n",prod);
    return 0;
}
