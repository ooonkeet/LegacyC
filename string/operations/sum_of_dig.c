#include<stdio.h>
#define LIMIT 1000
int main(){
    char str[LIMIT];
    int ptr=0,count=0;
    printf("Enter a string:- ");
    scanf("%[^\n]s",&str);
    while(str[ptr]!='\0'){
        if(str[ptr]>47 && str[ptr]<58)
            count+=str[ptr]-'0';
        ptr++;
    }

    printf("\nSum of digits from string '%s' is = %d.\n",str,count);
    return 0;
}
