#include<stdio.h>
void input(int row,int col,int mat[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter element (%d,%d):- ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
}
int boundary_display(int row,int col,int mat[row][col],int sum){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==0||j==0||i==row-1||j==col-1){
                printf("%d\t",mat[i][j]);
                sum+=mat[i][j];
            }
            else
                printf(" \t");
        }
        printf("\n");
    }
    return sum;
}
int main(){
    int m,n,sum;
    printf("Enter number of rows in matrix:- ");
    scanf("%d",&m);
    printf("Enter number of columns in matrix:- ");
    scanf("%d",&n);
    int x[m][n];
    printf("\nEnter the values of matrix.\n\n");
    input(m,n,x);
    printf("\nBoundary elements of matrix are:-\n");
    sum=boundary_display(m,n,x,0);
    printf("\nSum of boundary elements = %d.\n",sum);
    return 0;
}
