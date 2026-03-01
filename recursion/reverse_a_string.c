#include<stdio.h>
#define MAX 1000
void reverse(char str[],int l,int r){
    if(l>=r)
        return;
    char t=str[l];
    str[l]=str[r];
    str[r]=t;
    reverse(str,l+1,r-1);
}
int main(){
    int ptr=0,ptr1=0;
    char str[MAX],strev[MAX];
    printf("Enter a string:- ");
    scanf("%[^\n]s",str);
    while(str[ptr]!='\0')
        ptr++;
    printf("\nOriginal string: %s.\n",str);
    reverse(str,0,ptr-1);
    printf("\nReversed string: %s.\n",str);
    return 0;
}
