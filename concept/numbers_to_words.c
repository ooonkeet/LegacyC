#include<stdio.h>
void printWord(int d){
    switch(d){
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
    }
}
int main(){
    int n,rev=0,dig,t;
    printf("Enter a number:- ");
    scanf("%d",&n);
    t=n;
    if(n==0){
        printf("\nZero\n");
        return 0;
    }
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    printf("\n%d in words is = ",t);
    while(rev>0){
        dig=rev%10;
        printWord(dig);
        rev/=10;
    }
    printf("\n");
    return 0;
}
