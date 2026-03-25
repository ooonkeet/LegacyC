#include<stdio.h>
#include<ctype.h>
#define LIMIT 1000

void buildLPS(char pat[LIMIT],int lps[LIMIT]){
    int len=0;
    lps[0]=0;
    for(int i=1;pat[i]!='\0';){
        if(tolower((unsigned char)pat[i])==tolower((unsigned char)pat[len]))
            lps[i++]=++len;
        else if(len!=0)
            len=lps[len-1];
        else
            lps[i++]=0;
    }
}
int main(){
    char str[LIMIT],substr1[LIMIT],substr2[LIMIT],result[LIMIT];
    int lps[LIMIT];
    printf("Enter string:- ");
    scanf(" %[^\n]",str);
    printf("Enter substring you want to replace:- ");
    scanf(" %[^\n]",substr1);
    printf("Enter substring you want to replace with:- ");
    scanf(" %[^\n]",substr2);
    buildLPS(substr1,lps);
    int x=0,y=0,res=0;
    while(str[x]!='\0'){
        if(tolower((unsigned char)str[x])==tolower((unsigned char)substr1[y])){
            x++;
            y++;
            if(substr1[y]=='\0'){
                for(int k=0;substr2[k]!='\0';k++)
                    result[res++]=substr2[k];
                y=lps[y-1];
            }
        }else{
            if(y!=0){
                result[res++]=str[x-y];
                y=lps[y-1];
            }

            else
                result[res++]=str[x++];
        }
    }
    while(y>0){
        result[res++]=str[x-y];
        y--;
    }
    result[res]='\0';
    printf("Original string: %s",str);
    printf("\nChanged substring '%s' with '%s' in string %s results in: %s.",substr1,substr2,str,result);
    return 0;
}
