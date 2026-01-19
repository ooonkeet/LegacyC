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
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n],dupl[n],idx=0;
    printf("\nEnter elements of array one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr,0,n-1);
    dupl[idx]=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]!=dupl[idx])
            dupl[++idx]=arr[i];
    }
    printf("\nDistinct elements are:  ");
    for(int i=0;i<=idx;i++)
        printf("%d  ",dupl[i]);
    return 0;
}
