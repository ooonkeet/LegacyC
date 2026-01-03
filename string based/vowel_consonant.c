#include<stdio.h>
int main(){
    char c;
    printf("Enter a character = ");
    scanf("%c",&c);
    if(c>=65 && c<=90){
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            printf("%c is Vowel.",c);
        else
            printf("%c is Consonant.",c);
    }
    else if(c>=97 && c<=126){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            printf("%c is Vowel.",c);
        else
            printf("%c is Consonant.",c);
    }
    else
        printf("%c is not an alphabet.",c);
    return 0;
}
