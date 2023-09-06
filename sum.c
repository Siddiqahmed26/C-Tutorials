#include<stdio.h>

int sum(int a, int b);

int main(){
    int a;
    int b;

    printf("enter a \n");
    scanf("%d",&a);
        printf("enter b \n");
    scanf("%d",&b);

    int s=sum(a,b);
    printf("sum is : %d",s);

}

int sum(int a, int b){
    return a+b;
}