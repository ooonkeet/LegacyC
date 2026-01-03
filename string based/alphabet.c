#include<stdio.h>
int main(){
    char c;
    printf("Enter a character = ");
    scanf("%c",&c);
    if((c>=65 && c<=90) || (c>=97 && c<=126))
        printf("%c is an alphabet.",c);
    else
        printf("%c is not an alphabet",c);
}
