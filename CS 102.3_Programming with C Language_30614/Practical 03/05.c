#include <stdio.h>
#include <stdlib.h>
int main()
{
int no1,no2;
printf("Enter Number 1: ");
scanf("%d", &no1);
printf("Enter Number 2: ");
scanf("%d", &no2);
if(no2%no1==0)
printf("%d Is a Multiple Of %d",no1,no2);
else
printf("%d Is Not a Multiple Of %d",no1,no2);
return 0;
}
