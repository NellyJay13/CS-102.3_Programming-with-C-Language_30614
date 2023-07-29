#include <stdio.h>
#include
<stdlib.h>
int main()
{
int no,i;
printf("Enter a Positive
Number:"); scanf("%d", &no);
printf("Factors of %d are: ",
no); for(i=1;i<=no;++i)
{
if(no%i==0)
{
printf("%d",i);
}
}
printf("\n");
return 0;
}
