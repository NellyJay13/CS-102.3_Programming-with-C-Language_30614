#include <stdio.h>
#include
<stdlib.h>
int main()
{
int n=10,fibo[n],i;
fibo[0]=0
;
fibo[1]=1
;
for(i=2;i<n;i++)
{
fibo[i]=fibo[i-1]+fibo[i-2];
}
printf("First 10 Numbers Of The Fibonacci Sequence
\n"); for(i=0;i<n;i++)
{
printf("%d", fibo[i]);
}
printf("\n");
return 0;
}
