#include<stdio.h>
#define LIMIT 1000
int main(){
    char str[LIMIT],str1[LIMIT];
    int ptr=0,ptr1=0;
    printf("Enter a string:- ");
    scanf("%[^\n]s",&str);
    while(str[ptr]!='\0'){
        if(str[ptr]==' '){
            ptr++;
            continue;
        }
        str1[ptr1]=str[ptr];
        ptr++;
        ptr1++;
    }
    str1[ptr1]='\0';
    if(ptr1==0)
        printf("\nAll elements are spaces.\n");
    else
        printf("\nSpaces removed from '%s' is = '%s'.\n",str,str1);
    return 0;
}
