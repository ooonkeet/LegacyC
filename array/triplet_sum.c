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
    int arr[n],k,trip[n][3],idx=0;
    printf("\nEnter elements of array one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter your target sum: ");
    scanf("%d",&k);
    sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        int l=i+1,r=n-1,target=k-arr[i];
        while(l<r){
            if(arr[l]+arr[r]==target){
                trip[idx][0]=arr[i];
                trip[idx][1]=arr[l];
                trip[idx][2]=arr[r];
                idx++;
                l++;
                r--;
            }
            else if(arr[l]+arr[r]<target)
                l++;
            else
                r--;
        }
    }
    if(idx==0)
        printf("\nThere exist no triplet which provide target sum %d.",k);
    else{
        printf("\nNo. of triplets = %d.\n",idx);
        for(int i=0;i<idx;i++){
            printf("\nTriplet %d =  ",i+1);
            for(int j=0;j<3;j++)
                printf("%d  ",trip[i][j]);
        }
    }
    return 0;
}
