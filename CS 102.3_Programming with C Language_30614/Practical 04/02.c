#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a,b,operate,num,sum,sub,mul,div;
 printf("Enter First Number :");
 scanf("%d%d",&a,&b);
 printf("Select an Operator\n 1.Sum \n 2.Substraction\n 3.Multiply\n 4.Divide\n Enter Your
Choice Number\n");
 scanf("%d",&operate);
 switch(operate) {
 case 1:
 printf("%d+%d=%d",a,b,a+b);
 break;
 case 2:
 printf("%d-%d=%d",a,b,a-b);
 break;
 case 3:
 printf("%d*%d=%d",a,b,a*b);
 break;
 case 4:
 printf("%d/%d=%d",a,b,a/b);
 break;
 default:
 printf("Invalid Data");
 break;
 }
}
