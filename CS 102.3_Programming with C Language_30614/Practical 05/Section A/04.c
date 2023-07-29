#include <stdio.h>
#include
<stdlib.h>
int main()
{
int no,sum=0;
printf("Enter a Number: ");
scanf("%d", &no);
int remainder;
while(no>0)
{
remainder =
no%10; sum +=
remainder; no /=
10;
}
printf("Sum Of Digits: %d \n", sum);
return 0;
}
