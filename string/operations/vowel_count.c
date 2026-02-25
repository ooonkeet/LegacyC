#include<stdio.h>
#define LIMIT 1000
int main(){
    char str[LIMIT];
    int ptr=0,c=0;
    printf("Enter a string:- ");
    scanf("%s",&str);
    while(str[ptr]!='\0'){
        if(str[ptr]=='A' || str[ptr]=='a' || str[ptr]=='E'||str[ptr]=='e' ||str[ptr]=='I' ||str[ptr]=='i' ||str[ptr]=='O' ||str[ptr]=='o' ||str[ptr]=='U' ||str[ptr]=='u')
            c++;
        ptr++;
    }
    printf("\nNumber of vowels in %s is %d.\n",str,c);
    return 0;
}
