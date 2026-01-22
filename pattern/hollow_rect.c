#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length of hollow rectangle:- ");
    scanf("%d",&l);
    printf("Enter breadth of hollow rectangle:- ");
    scanf("%d",&b);
    printf("\nHOLLOW RECTANGLE\n\n");
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            if(i==0||i==l-1||j==0||j==b-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
