#include<stdio.h>
#define OFFS 100000
#define SIZE 200000
//caution - values upto 1 lakh is acceptable, don't send anything above that.
//As C does not have its inbuilt hash-map, the limit is manually set up to 1 lakh on both ends - positive and negative
int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n],dupl[n],id=0;
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
    printf("\nFrequency of each elements are as follows.\n");
    for(int i=0;i<id;i++)
        printf("%d exists %d time(s).\n",dupl[i],vis[dupl[i]+OFFS]);
    return 0;
}
