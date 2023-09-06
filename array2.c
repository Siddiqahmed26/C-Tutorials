#include<stdio.h>
int main(){
    float item[3];
    printf("enter prices of 3 items\n");
    scanf("%f",&item[0]);

    scanf("%f",&item[1]);

  
    scanf("%f",&item[2]);

printf("item1=%f\n item2=%f\n item3=%f\n", (item[0]*0.18)+item[0],(item[1]*0.18)+item[1],(item[2]*0.18)+item[2]);


    return 0;
}
