#include<stdio.h>
void input(int row,int col,int mat[row][col]){
    printf("Enter value for the matrix.\n");
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
    int row,col;
    printf("Enter number of rows:- ");
    scanf("%d",&row);
    printf("Enter number of columns:- ");
    scanf("%d",&col);
    printf("\n\n");
    int a[row][col],b[row][col],c[row][col];
    input(row,col,a);
    printf("\n-------------------------------------\n");
    input(row,col,b);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("---------------------------------------\n\n");
    printf("First Matrix is\n");
    display(row,col,a);
    printf("\n");
    printf("Second Matrix is\n");
    display(row,col,b);
    printf("\n");
    printf("Sum of the matrices are\n");
    display(row,col,c);
    printf("----------------------------------------");
    return 0;
}
