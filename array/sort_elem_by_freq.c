#include<stdio.h>
struct Map{
    int value;
    int occ;
};
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
int part_struct(struct Map k[],int low,int high){
    struct Map temp;
    int piv=k[low].occ,it1=low+1,it2=high;
    while(it1<=it2){
        while(it1<=high && k[it1].occ<=piv)
            it1++;
        while(it2>=low && k[it2].occ>piv)
            it2--;
        if(it1<it2){
            temp=k[it1];
            k[it1]=k[it2];
            k[it2]=temp;
        }
    }
    temp=k[low];
    k[low]=k[it2];
    k[it2]=temp;
    return it2;
}
void sort(int arr[],int l,int r){
    if(l<r){
        int p=part(arr,l,r);
        sort(arr,l,p-1);
        sort(arr,p+1,r);
    }
}
void struct_sort(struct Map a[],int l,int r){
    if(l<r){
        int id=part_struct(a,l,r);
        struct_sort(a,l,id-1);
        struct_sort(a,id+1,r);
    }
}
int main(){
    int n,idx=0;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements of array one by one.\n\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d:- ",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr,0,n-1);
    struct Map m[n];
    for(int i=0;i<n;i++){
        if(i==0||arr[i]!=arr[i-1]){
            m[idx].value=arr[i];
            m[idx].occ=1;
            idx++;
        }
        else
            m[idx-1].occ++;
    }
    struct_sort(m,0,idx-1);
    printf("\nSorted in terms of frequency.\n");
    for(int i=0;i<idx;i++)
        printf("%d occurs %d time(s).\n",m[i].value,m[i].occ);
    return 0;
}
