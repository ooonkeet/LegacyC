#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 1000
typedef struct Student{
    int roll;
    char name[SIZE];
    float marks;
}stud;
int main(){
    int n;
    stud *ptr;
    printf("Enter number of students: ");
    scanf("%d",&n);
    while(n<=0){
        printf("Correctly enter number of students: ");
        scanf("%d",&n);
    }
    ptr=(stud*)malloc(n*sizeof(stud));
    if(ptr==NULL){
        printf("Memory allocation fails");
        return 0;
    }
    printf("\nEnter info of each student one by one.");
    for(int i=0;i<n;i++){
        printf("\nDetails for Student %d.\n",i+1);
        printf("Enter Name = ");
        getchar();
        fgets(ptr[i].name, SIZE, stdin);
        ptr[i].name[strcspn(ptr[i].name, "\n")] = '\0';
        printf("Enter roll = ");
        scanf("%d",&(ptr+i)->roll);
        printf("Enter marks = ");
        scanf("%f",&(ptr+i)->marks);
    }
    printf("\nDisplay student Information.\n");
    for(int i=0;i<n;i++){
        printf("\nStudent %d.\n",i+1);
        printf("\tName:%s.\n",(ptr+i)->name);
        printf("\tRoll:%d.\n",(ptr+i)->roll);
        printf("\tMarks:%.2f.\n",(ptr+i)->marks);
    }
    free(ptr);
    ptr=NULL;
    return 0;
}
