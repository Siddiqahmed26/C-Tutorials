#include<stdio.h>

int square(int side);
int rectangle(int a, int b);
int circle(int rad);

int main (){
    int a=3;
    int b= 5;
    int rad=6;
    int side=5;

    printf("square %d\n",square(side));
    printf("rectangle %d\n",rectangle(a,b));
    printf("circle %d\n",circle(rad));

    return 0;

}
int square(int side){
    return side*side;

}
int rectangle(int a, int b){
    return a*b;

}
int circle(int rad){
    return 3.14*rad*rad;
}