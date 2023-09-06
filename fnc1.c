#include<stdio.h>

void printnamaste();
void printbonjur();

int main(){
printf("enter 'i' is indian & enter 'f' if french\n");
char ch;
scanf("%c",&ch);
if(ch=='i'){
    printnamaste();
if(ch=='f'){
    printbonjur();
}
}

else{
    printf("thank you\n");
}



    return 0;
}
 void printnamaste(){
    printf("namaste\n");
 }
 void printbonjur(){
    printf("bonjur\n");
 }