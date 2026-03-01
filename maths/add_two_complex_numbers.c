#include<stdio.h>
typedef struct complex{
    float real;
    float img;
}comp;

comp addNums(comp n1,comp n2){
    comp temp;
    temp.real=n1.real+n2.real;
    temp.img=n1.img+n2.img;
    return temp;
}
int main(){
    comp a,b,sum;
    printf("Enter values for first complex number.\n");
    printf("Enter real part: ");
    scanf("%f",&a.real);
    printf("Enter imaginary part: ");
    scanf("%f",&a.img);
    printf("\nEnter values for second complex number.\n");
    printf("Enter real part: ");
    scanf("%f",&b.real);
    printf("Enter imaginary part: ");
    scanf("%f",&b.img);
    sum=addNums(a,b);
    printf("\nSum of %.2f+%.2fi and %.2f+%.2fi is = %.2f+%.2fi.\n",a.real,a.img,b.real,b.img,sum.real,sum.img);
    return 0;
}

