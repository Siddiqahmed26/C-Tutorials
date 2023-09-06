#include <stdio.h>
int main() {
 int n,c,r,arm=0;
 printf("enter three digit integer\n");
 scanf("%d",&n);
 c=n;
 while(c!=0) {
    r=c%10;
    arm+= r*r*r;
    c/=10;
    
 }
if(arm==n){
    printf("%d is armstrong",n);
}
else{
    printf("%d not armstrong",n);
}
return 0;
}