#include<stdio.h>
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
    int m,n;
    printf("Enter row number of matrix:- ");
    scanf("%d",&m);
    printf("Enter column number of matrix:- ");
    scanf("%d",&n);
    int x[m][n];
    printf("Enter the values of matrix.\n");
    input(m,n,x);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i<j && x[i][j]!=0){
                printf("It is not an upper triangular matrix!!");
                return 0;
            }
        }
    }
    printf("It is an upper triangular matrix, written in this form\n");
    display(m,n,x);
    return 0;
}
