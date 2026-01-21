#include<stdio.h>
#define OFFS 100000
#define SIZE 200000
//caution - values upto 1 lakh is acceptable, don't send anything above that.
//As C does not have its inbuilt hash-map, the limit is manually set up to 1 lakh on both ends - positive and negative
int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n],dupl[n],id=0,sum=0;
    printf("\nEnter elements of array one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    int vis[SIZE]={0};
    for(int i=0;i<n;i++){
        int idx=arr[i]+OFFS;
        if(!vis[idx])
            dupl[id++]=arr[i];
        vis[idx]++;
    }
    for(int i=0;i<id;i++){
        if(vis[dupl[i]+OFFS]%2==1)
            sum+=dupl[i];
    }
        printf("\nSum of odd frequency elements in array = %d.\n",sum);
    return 0;
}
