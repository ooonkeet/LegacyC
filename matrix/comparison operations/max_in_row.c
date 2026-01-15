#include<stdio.h>
#include<limits.h>
void input(int row,int col,int mat[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter element (%d,%d):- ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
}
void display(int row,int col,int mat[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m,n,c=INT_MIN;
    printf("Enter number of rows in matrix:- ");
    scanf("%d",&m);
    printf("Enter number of columns in matrix:- ");
    scanf("%d",&n);
    int x[m][n],arr[m];
    printf("\nEnter the values of matrix.\n\n");
    input(m,n,x);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(c<x[i][j])
                c=x[i][j];
        }
            arr[i]=c;
            c=INT_MIN;
    }
    printf("\nIn matrix.\n");
    display(m,n,x);
    printf("\n");
    for(int i=0;i<m;i++)
        printf("Maximum element of row %d is %d.\n",i+1,arr[i]);
    return 0;
}
