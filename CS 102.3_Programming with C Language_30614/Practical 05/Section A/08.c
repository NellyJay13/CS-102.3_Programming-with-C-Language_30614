#include <stdio.h>
#include
<stdlib.h>
int main()
{
int no,originalno,remainder,result=0,n=0;
printf("Enter Number: ");
scanf("%d", &no);
originalno=no;
while(originalno != 0)
{
originalno /= 10;
++n;
}
originalno=no;
while(originalno != 0)
{
remainder=originalno%1
0; int power =1;
for(int i = 1; i <= n; ++i)
{
power += remainder;
}
result+=power;
originalno /=
10;
}
if (result==no)
printf("%d is an Armstrong Number \n", no);
else
printf("%d is not an Armstrong Number \n", no);
return 0;
}
