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
    int m,n,c=0;
    printf("Enter number of rows in matrix:- ");
    scanf("%d",&m);
    printf("Enter number of columns in matrix:- ");
    scanf("%d",&n);
    int x[m][n],arr[m*n];
    printf("\nEnter the values of matrix.\n\n");
    input(m,n,x);
    int top=0,left=0,bottom=m-1,right=n-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++)
            arr[c++]=x[top][i];
        top++;
        for(int i=top;i<=bottom;i++)
            arr[c++]=x[i][right];
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--)
                arr[c++]=x[bottom][i];
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--)
                arr[c++]=x[i][left];
            left++;
        }
    }
    printf("\nFor matrix.\n");
    display(m,n,x);
    printf("\nSpiral element order of matrix:  ");
    for(int i=0;i<m*n;i++)
        printf("%d  ",arr[i]);
    return 0;
}
