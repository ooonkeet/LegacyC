#include<stdio.h>
#define MAX 1000
int main(){
    int ptr=0,ptr1=0;
    char str[MAX],strev[MAX];
    printf("Enter a string:- ");
    scanf("%[^\n]s",str);
    while(str[ptr]!='\0')
        ptr++;
    while(ptr!=0)
        strev[ptr1++]=str[--ptr];
    strev[ptr1]='\0';
    printf("\nReversed of '%s' is: '%s'.\n",str,strev);
    return 0;
}
