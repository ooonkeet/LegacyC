#include<stdio.h>
#define OFFS 100000
#define SIZE 200000
//caution - values upto 1 lakh is acceptable, don't send anything above that.
//As C does not have its inbuilt hash-map, the limit is manually set up to 1 lakh on both ends - positive and negative
int main(){
    int n,idx=0;
    printf("Enter number of pairs of the array: ");
    scanf("%d",&n);
    int pair[n][2];
    for(int i=0;i<n;i++){
        printf("\nEnter values for pair %d.\n",i+1);
        for(int j=0;j<2;j++){
            printf("Value %d = ",j+1);
            scanf("%d",&pair[i][j]);
        }
    }
    int visited[SIZE][2]={0};
    printf("\n");
    for(int i=0;i<n;i++){
        int a=pair[i][0]+OFFS,b=pair[i][1]+OFFS;
        if(visited[b][a])
            printf("Symmetric Pair %d = (%d,%d) and (%d,%d).\n",++idx,pair[i][1],pair[i][0],pair[i][0],pair[i][1]);
        else
            visited[a][b]=1;
    }
    if(idx==0)
        printf("No symmetric pairs present!!\n");
    return 0;
}
