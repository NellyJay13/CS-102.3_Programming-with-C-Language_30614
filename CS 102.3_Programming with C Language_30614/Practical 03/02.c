#include <stdio.h>
#include <stdlib.h>
int main()
{
int no1,no2,no3,largest,smallest;
printf("Enter Number 1: ");
scanf("%d", &no1);
printf("Enter Number 2: ");
scanf("%d", &no2);
printf("Enter Number 3: ");
scanf("%d", &no3);
largest=no1;
smallest=no1;
if(no2>largest)
{
largest=no2;
}
if(no3>largest)
{
largest=no3;
}
if(no2<smallest)
{
smallest=no2;
}
if(no3<smallest)
{
smallest=no3;
}
printf("The Largest Number Is %d \n", largest);
printf("The Smallest Number Is %d \n",smallest);
return 0;
}
