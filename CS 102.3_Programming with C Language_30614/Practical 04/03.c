) #include <stdio.h>
#include <stdlib.h>
int main()
{
 int choice;
 float radius;
 printf ("1)calculate the circumference of circle\n");
 printf ("2)calculate the Area of cirle\n");
 printf ("3)calculate the volume of a sphere\n");
 printf ("Enter your choice\n");
 scanf("%d",&choice);
 printf("Enter Radius:");
 scanf("%f",&radius);
 switch(choice)
{
 case 1:
 printf("The circumference of circle=%2f\n",2*3.14*radius);
 break;
 case 2:
 printf("The Area of circle=%2f\n",3.14*radius*radius);
 break;
 case 3:
 printf("Volume of spehere=%2f\n",4/3*radius*radius*radius);
 break;
 default:
 printf("Enter Valid Input\n");
 break;
}
return 0;
}
