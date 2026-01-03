#include<stdio.h>
int main(){
    float radius,area;
    printf("Enter radius of the circle:- ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("Area of the circle(corrected to 3 decimal places) = %.3f",area);
    return 0;
}
