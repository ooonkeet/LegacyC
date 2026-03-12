#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n],eve=0;
    printf("\nEnter elements of array one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            eve++;
    }
    printf("\nNo. of Even elements in the array = %d.",eve);
    printf("\nNo. of Odd elements in the array = %d.\n",n-eve);
    return 0;
}
