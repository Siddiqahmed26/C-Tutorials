#include<stdio.h>
int main(){
    int a,b,c;
    float avg;
    printf("enter three numbers\n");
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    printf("enter third number\n");
    scanf("%d",&c);
    avg=a+b+c;
    printf("average of three numbers is: %f", avg/3);
    return 0;
}