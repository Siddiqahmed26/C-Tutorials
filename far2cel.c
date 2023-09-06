#include<stdio.h>

float calcfar(float celcious);

int main(){
    float farenhiet=calcfar(37);

    printf("%f\n",farenhiet);
    return 0;

}

float calcfar(float celcious){

float farenhiet= celcious * (9.00/5.00)+32;
  
  return farenhiet;


    
}