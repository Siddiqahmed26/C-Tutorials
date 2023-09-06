#include<stdio.h>
int fib(int n);

int main(){
    printf("%d",fib(2));
    return 0;

}
int fib(int n){
    if(n==1){
        return 1;
    }
if(n==0){
    return 0;
}
    int fib1=fib(n-1);
    int fibn=fib(n-2);
    int fibN=fib1+fibn;
    return fibN;
}