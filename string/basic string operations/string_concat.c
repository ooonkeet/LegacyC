#include<stdio.h>
#define LIMIT 1000
int main(){
    char str1[LIMIT],str2[LIMIT],str3[LIMIT];
    int ptr=0,ptr1=0;
    printf("Enter string 1:- ");
    scanf("%s",&str1);
    printf("Enter string 2:- ");
    scanf("%s",&str2);
    while(str1[ptr]!='\0'){
        str3[ptr]=str1[ptr];
        ptr++;
    }
    while(str2[ptr1]!='\0'){
        str3[ptr++]=str2[ptr1++];
    }
    str3[ptr]='\0';
    printf("\nOriginal String = '%s' and '%s'.\n",str1,str2);
    printf("\Concatenated string = '%s'.\n",str3);
    return 0;
}
