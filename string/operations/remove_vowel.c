#include<stdio.h>
#define LIMIT 1000
int main(){
    char str[LIMIT],str1[LIMIT];
    int ptr=0,ptr1=0;
    printf("Enter a string:- ");
    scanf("%s",&str);
    while(str[ptr]!='\0'){
        if(str[ptr]=='A' || str[ptr]=='a' || str[ptr]=='E'||str[ptr]=='e' ||str[ptr]=='I' ||str[ptr]=='i' ||str[ptr]=='O' ||str[ptr]=='o' ||str[ptr]=='U' ||str[ptr]=='u'){
            ptr++;
            continue;
        }
        str1[ptr1]=str[ptr];
        ptr++;
        ptr1++;
    }
    str1[ptr1]='\0';
    if(ptr1==0)
        printf("\nAll elements are vowels.\n");
    else
        printf("\nVowel Removed from '%s' is = '%s'.\n",str,str1);
    return 0;
}
