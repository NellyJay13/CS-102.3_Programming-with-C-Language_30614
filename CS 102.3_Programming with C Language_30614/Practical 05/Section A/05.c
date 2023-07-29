#include <stdio.h>
#include
<stdlib.h>
int main()
{
int no,reverseno=0,remainder;
printf("Enter a Number: ");
scanf("%d", &no);
do
{
remainder=no%10;
reverseno=reverseno*10+remainder;
no=no/10;
}while(no != 0);
printf("Reversed Number Is %d \n", reverseno);
return 0;
}
