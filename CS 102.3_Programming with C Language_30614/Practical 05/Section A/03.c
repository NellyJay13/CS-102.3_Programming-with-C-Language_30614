#include <stdio.h>
#include
<stdlib.h>
int main()
{
int number,factorial=1;
printf("Enter a Number:
"); scanf("%d",
&number);
if(number < 0)
{
printf("Negative Number. \n");
}
else
{
for(int i = 1; i<=number; i++)
{
factorial*=i;
}
printf("Factorial of %d is %d. \n",number,factorial);
}
return 0;
}
