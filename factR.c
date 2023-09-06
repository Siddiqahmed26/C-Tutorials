#include<stdio.h>

int fact(int n);

int main(){
    printf("the factorial is %d",fact(10));


    return 0;
}

int fact(int n)
{
    if(n==1)
    return 1;

int fact1=fact(n-1);
int factN=fact1*n;
return factN;
}