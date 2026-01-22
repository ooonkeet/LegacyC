#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length of solid rectangle:- ");
    scanf("%d",&l);
    printf("Enter breadth of solid rectangle:- ");
    scanf("%d",&b);
    printf("\nSOLID RECTANGLE\n\n");
    for(int i=0;i<l;i++){
        for(int j=0;j<b;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
