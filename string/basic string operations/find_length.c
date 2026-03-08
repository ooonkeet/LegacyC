#include<stdio.h>
#define LIMIT 1000
int main(){
    char str[LIMIT];
    int ptr=0,c=0;
    printf("Enter a string:- ");
    scanf("%s",&str);
    while(str[ptr++]!='\0')
        c++;
    printf("\nLength of string %s is %d.\n",str,c);
    return 0;
}
