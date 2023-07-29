#include <stdio.h>
#include <stdlib.h>
int main()
{
float area,radius,diameter,circumference;
printf ("Enter Radius Of The Circle: ");
scanf("%f", &radius);
diameter=2*radius;
circumference=2*3.14*radius;
area=3.14*radius*radius;
printf("Diameter: %.2f\n", diameter);
printf("Circumference: %.2f \n", circumference);
printf("Area: %.2f \n", area);
return 0;
}
