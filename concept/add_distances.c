#include<stdio.h>
typedef struct height{
    int feet;
    float inch;
}ht;
void add(ht h1,ht h2,ht *res){
    res->feet=h1.feet+h2.feet;
    res->inch=h1.inch+h2.inch;
    while(res->inch>=12.0){
        res->inch-=12.0;
        res->feet++;
    }
}
int main(){
    ht first,second,res;
    printf("For first distance.\n");
    printf("Enter feet(s): ");
    scanf("%d",&first.feet);
    printf("Enter inch(es): ");
    scanf("%f",&first.inch);
    printf("\nFor second distance.\n");
    printf("Enter feet(s): ");
    scanf("%d",&second.feet);
    printf("Enter inch(es): ");
    scanf("%f",&second.inch);
    add(first,second,&res);
    printf("\nSum of %d feet %.2f inches and %d feet %.2f inches is = %d feet and %.2f inches.",first.feet,first.inch,second.feet,second.inch,res.feet,res.inch);
    return 0;
}
