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
    int m,n,c=0,d=0;
    printf("Enter number of rows in matrix:- ");
    scanf("%d",&m);
    printf("Enter number of column in matrix:- ");
    scanf("%d",&n);
    int x[m][n],arr1[m],arr2[n];
    printf("\nEnter the values of matrix.\n\n");
    input(m,n,x);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c+=x[i][j];
        }
            arr1[i]=c;
            c=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                d+=x[j][i];
        }
            arr2[i]=d;
            d=0;
    }
    printf("\nIn matrix.\n");
    display(m,n,x);
    printf("\n");
    for(int i=0;i<m;i++)
        printf("Sum of elements of row %d is %d.\n",i+1,arr1[i]);
    printf("\n");
    for(int i=0;i<n;i++)
        printf("Sum of elements of column %d is %d.\n",i+1,arr2[i]);
    return 0;
}
