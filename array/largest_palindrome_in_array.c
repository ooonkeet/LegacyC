#include<stdio.h>
int is_palin(int a){
    int temp=a,rev=0;
    while(temp!=0){
        rev=rev*10+(temp%10);
        temp/=10;
    }
    if(a==rev)
        return 1;
    else
        return 0;
}
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
    int arr[n];
    printf("\nEnter elements of array one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr,0,n-1);
    for(int i=n-1;i>=0;i--){
        if(is_palin(arr[i])){
            printf("\nLargest palindrome in array is = %d.",arr[i]);
            return 0;
        }
    }
    printf("\nNo palindromes are present in array!!!");
    return 0;
}
