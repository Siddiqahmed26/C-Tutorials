#include<stdio.h>
int main(){
    int n;
    int fact=1;
    printf("enter a number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact= fact*i;
    }
    printf("factorial is :%d",fact);
    return 0;
}