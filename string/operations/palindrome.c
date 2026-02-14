#include<stdio.h>
#define LIMIT 1000
int main(){
    char str[LIMIT];
    int ptr=0;
    printf("Enter a string:- ");
    scanf("%s",&str);
    while(str[ptr++]!='\0');
    for(int i=0;i<=ptr/2;i++){
        if(str[i]!=str[ptr-i-2]){
            printf("\n'%s' is not a palindrome string.\n",str);
            return 0;
        }
    }
    printf("\n'%s' is a palindrome string.\n",str);
    return 0;
}
