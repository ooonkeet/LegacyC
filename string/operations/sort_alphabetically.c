#include<stdio.h>
#define LIMIT 1000
int part(char a[LIMIT],int left,int right){
    char piv=a[left],temp;
    int i=left+1,j=right;
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
void sort(char arr[LIMIT],int l,int r){
    if(l<r){
        int p=part(arr,l,r);
        sort(arr,l,p-1);
        sort(arr,p+1,r);
    }
}

int main(){
    char str[LIMIT];
    int ptr=0;
    printf("Enter a string:- ");
    scanf("%s",str);
    while(str[ptr++]!='\0');
    printf("\nOriginal string: '%s'.",str);
    sort(str,0,ptr-2);
    printf("\nSorted string: '%s'.\n",str);
    return 0;
}
