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
    int m,n,x,y;
    printf("Enter row number of matrix 1:- ");
    scanf("%d",&m);
    printf("Enter column number of matrix 1:- ");
    scanf("%d",&n);
    printf("Enter row number of matrix 2:- ");
    scanf("%d",&x);
    printf("Enter column number of matrix 2:- ");
    scanf("%d",&y);
    printf("-----------------------------------------------------\n");
    if(n!=x){
        printf("Multiplication not possible!!\n");
        printf("-----------------------------------------------------\n");
    }
    else{
        int m1[m][n];
        int m2[x][y];
        printf("Enter the values of matrix 1.\n");
        input(m,n,m1);
        printf("-----------------------------------------------------\n");
        printf("Enter the values of matrix 2.\n");
        input(x,y,m2);
        printf("----------------------------------------------------- \n");
        int r[m][y];
        for(int i=0;i<m;i++){
            for(int j=0;j<y;j++){
                r[i][j]=0;
                for(int k=0;k<x;k++){
                    r[i][j]+=m1[i][k]*m2[k][j];
                }
            }
        }
        printf("Matrix 1.\n");
        display(m,n,m1);
        printf("-----------------------------------------------------\n");
        printf("Matrix 2.\n");
        display(x,y,m2);
        printf("-----------------------------------------------------\n");
        printf("Product of matrices.\n");
        display(m,y,r);
        printf("-----------------------------------------------------\n");
    }
    return 0;
}
