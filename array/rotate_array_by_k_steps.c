#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n],k;
    printf("\nEnter elements of array one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter how many steps it need to be rotated circular:- ");
    scanf("%d",&k);
    if(k<0)
        printf("\nBetter luck next time!!");
    else if(k==0 || k==n){
        printf("\nRotated array is:  ");
        for(int i=0;i<n;i++)
            printf("%d  ",arr[i]);
    }
    else{
        k%=n;
        printf("\nRotated array is:  ");
        for(int i=k;i<n;i++)
            printf("%d  ",arr[i]);
        for(int i=0;i<k;i++)
            printf("%d  ",arr[i]);
    }
    return 0;
}
