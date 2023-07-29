#include <stdio.h>
#include
<stdlib.h>
int main()
{
int base,exponent,result=1;
printf("Enter The Base Number: ");
scanf("%d", &base);
printf("Enter The Exponent Number: ");
scanf("%d", &exponent);
int i;
for(i=0; i<exponent; i++)
{
result*=base;
}
printf("%d to the power %d is: %d \n",base,exponent,result);
return 0;
