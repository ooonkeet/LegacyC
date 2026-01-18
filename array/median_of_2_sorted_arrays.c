#include<stdio.h>
#include<limits.h>
int minElem(int x,int y){
    if(x<=y)
        return x;
    return y;
}
int maxElem(int x,int y){
    if(x>=y)
        return x;
    return y;
}
float findMed(int a[],int b[],int x,int y){
    if(x>y)
        return findMed(b,a,y,x);
    int low=0,high=x,left=(x+y+1)/2,z=x+y;
    while(low<=high){
        int mid1=(low+high)>>1;
        int mid2=left-mid1;
        int l1=INT_MIN,l2=INT_MIN,r1=INT_MAX,r2=INT_MAX;
        if(mid1<x)
            r1=a[mid1];
        if(mid2<y)
            r2=b[mid2];
        if(mid1-1>=0)
            l1=a[mid1-1];
        if(mid2-1>=0)
            l2=b[mid2-1];
        if(l1<=r2 && l2<=r1){
            int max=maxElem(l1,l2);
            int min=minElem(r1,r2);
            if(z%2==1)
                return max;
            return (float)(max+min)/2.0;
        }
        else if(l1>r2)
            high=mid1-1;
        else
            low=mid1+1;
    }
    return 0;
}
int main(){
    int m,n;
    printf("Enter size of the array 1: ");
    scanf("%d",&m);
    printf("\nEnter size of the array 2: ");
    scanf("%d",&n);
    int arr1[m],arr2[n];
    printf("\nEnter elements of array 1, one by one.\n\n");
    for(int i=0;i<m;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter elements of array 2, one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr2[i]);
    }
    float median=findMed(arr1,arr2,m,n);
    printf("\nMedian of 2 sorted arrays = %f",median);
    return 0;
}
