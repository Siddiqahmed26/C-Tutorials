#include<stdio.h>

int sum(int n);

int main(){
    printf("sum is ; %d\n",sum(10));


    return 0;

}
int sum(int n){
if(n==1){
    return 1;
}
    int sumn1= sum(n-1);
    int sumN= sumn1+n;
    return sumN;

}

