#include<stdio.h>
#define LIMIT 1000
int main(){
    char str[LIMIT],str1[LIMIT];
    int ptr=0;
    printf("Enter a string:- ");
    scanf("%s",&str);
    while(str[ptr]!='\0'){
        if(str[ptr]>=65 && str[ptr]<=90)
            str1[ptr]=str[ptr]+32;
        else if(str[ptr]>=97 && str[ptr]<=122)
            str1[ptr]=str[ptr]-32;
        else
            str1[ptr]=str[ptr];
        ptr++;
    }
    str1[ptr]='\0';
    printf("Toggled %s is = %s",str,str1);
    return 0;
}
