#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the side a\n");
    scanf("%d",&a);
       printf("enter the side b\n");
    scanf("%d",&b);
       printf("enter the side c\n");
    scanf("%d",&c);

  if(a>=10 || b>=10 || c>=10){

   printf("invalid input\n");


  }
    else if(a==b && b==c){
        printf("it is equilateral \n");
    }
    
    else if(a!=b && b!=c && c!=a){
        
        printf("it is scalene \n");
    }

    
     else {
        
        printf("it is isosceles \n");
     }
     
     return 0;
}