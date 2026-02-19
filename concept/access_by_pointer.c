#include<stdio.h>
int main(){
    int n,*ptr;
    printf("Enter size of the array = ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter array elements one by one.\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    printf("\nAccessing elements through pointer.\n\n");
    for(int i=0;i<n;i++){
        printf("\tElement %d = %d.\n",i+1,*(ptr+i));
    }
    return 0;
}
