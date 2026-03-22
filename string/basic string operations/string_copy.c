#include<stdio.h>
#define LIMIT 1000
int main(){
    char str[LIMIT],cpy[LIMIT];
    int ptr=0;
    printf("Enter a string:- ");
    scanf("%s",&str);
    while(str[ptr]!='\0'){
        cpy[ptr]=str[ptr];
        ptr++;
    }
    cpy[ptr]='\0';
    printf("\nOriginal String = '%s'.\n",str);
    printf("\Copied string = '%s'.\n",cpy);
    return 0;
}
