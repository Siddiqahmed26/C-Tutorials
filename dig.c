#include<stdio.h>
// TERNARY OPERATION IS USED 
int main()
{
    char ch;
printf("enter the charecter\n");
scanf("%c",&ch);
//TERNARY OPERATOR
ch>='0' && ch<='9'? printf("%C IT IS DIGIT ",ch) : printf("%c IT IS NOT DIGIT ",ch);




return 0;

}