#include<stdio.h>
void printWord(int d,int f){
    switch(d){
        case 1:
            printf("\nJanuary has Thirty one days.\n");
            break;
        case 2:
            if(f==1)
                printf("\nFebruary has Twenty nine days - Leap year.\n");
            else if(f==0)
                printf("\nFebruary has Twenty eight days - Non Leap year.\n");
            else
                printf("Wrong choice.\n");
            break;
        case 3:
            printf("\nMarch has Thirty one days.\n");
            break;
        case 4:
            printf("\nApril has Thirty days.\n");
            break;
        case 5:
            printf("\nMay has Thirty one days.\n");
            break;
        case 6:
            printf("\nJune has Thirty days.\n");
            break;
        case 7:
            printf("\nJuly has Thirty one days.\n");
            break;
        case 8:
            printf("\nAugust has Thirty one days.\n");
            break;
        case 9:
            printf("\nSeptember has Thirty days.\n");
            break;
        case 10:
            printf("\nOchtober has Thirty one days.\n");
            break;
        case 11:
            printf("\nNovember has Thirty days.\n");
            break;
        case 12:
            printf("\nDecember has Thirty one days.\n");
            break;
        default:
            printf("\nWrong input.\n");
    }
}
int main(){
    int n,ch;
    printf("\nEnter 1 for January.");
    printf("\nEnter 2 for February.");
    printf("\nEnter 3 for March.");
    printf("\nEnter 4 for April.");
    printf("\nEnter 5 for May.");
    printf("\nEnter 6 for June.");
    printf("\nEnter 7 for July.");
    printf("\nEnter 8 for August.");
    printf("\nEnter 9 for September.");
    printf("\nEnter 10 for October.");
    printf("\nEnter 11 for November.");
    printf("\nEnter 12 for December.\n");
    printf("\nEnter your choice:- ");
    scanf("%d",&n);
    if(n==2){
        printf("\nPress 1 if it is Leap Year. ");
        printf("\nPress 0 if non leap year.\n");
        printf("\nEnter your choice:- ");
        scanf("%d",&ch);
    }
    printWord(n,ch);
    return 0;
}
