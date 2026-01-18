#include<stdio.h>
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
    int ptr=0;
    while(ptr<n/2){
        arr[ptr]+=arr[n-ptr-1];
        arr[n-ptr-1]=arr[ptr]-arr[n-ptr-1];
        arr[ptr]-=arr[n-ptr-1];
        ptr++;
    }
    printf("\nReversed array elements are:  ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}
