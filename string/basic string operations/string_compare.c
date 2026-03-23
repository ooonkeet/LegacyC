#include<stdio.h>
#define LIMIT 1000
int main(){
    char str1[LIMIT],str2[LIMIT],str3[LIMIT];
    int ptr=0,ptr1=0;
    printf("Enter string 1:- ");
    scanf("%s",&str1);
    printf("Enter string 2:- ");
    scanf("%s",&str2);
    while(str1[ptr++]!='\0');
    while(str2[ptr1++]!='\0');
    if(ptr!=ptr1)
        printf("\n'%s' and '%s' are different strings.\n",str1,str2);
    else{
        ptr=0;
        while(ptr<ptr1){
            if(str1[ptr]!=str2[ptr]){
                printf("\n'%s' and '%s' are different strings.\n",str1,str2);
                return 0;
            }
            ptr++;
        }
        printf("\n'%s' and '%s' are same strings.\n",str1,str2);
    }
    return 0;
}
