#include<stdio.h>
#include <ctype.h>
#define SIZE 256 //ascii range
#define LIMIT 1000
int main(){
    char str[LIMIT];
    int ptr=0;
    printf("Enter a string:- ");
    scanf("%[^\n]s",str);
    int vis[SIZE]={0};
    while(str[ptr]!='\0'){
        unsigned char ch = (unsigned char)str[ptr];
        if (isalpha(ch))
            ch = tolower(ch);

        vis[ch]++;
        ptr++;
    }
    printf("\nFrequency of each characters are as follows.\n");
    for(int i=0;i<256;i++){
        if(vis[i]>0 && i==32)
            printf("SPACE exists %d time(s).\n",vis[i]);
        else if(vis[i]>0)
            printf("%c exists %d time(s).\n",i,vis[i]);
    }
    return 0;
}
