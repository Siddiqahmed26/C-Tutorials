#include<stdio.h>
int main(){
    int a,b;
    printf("enter the two numbers\n");
    scanf("%d", &a);
    scanf("%d",&b);
    if(a<b){
        printf("sallest number is :%d",a);

    }
    else{
            printf("sallest number is :%d",b);
    }

return 0;
}