#include <stdio.h>
#include
<stdlib.h>
int main()
{
int counter=1,total=0,marks;
float avg;
while(counter<=10)
{
printf("Enter %d Marks: ", counter);
scanf("%d", &marks);
total=total+marks;
counter++;
}
avg=(float)total/10;
printf("The Total Is: %d \n", total);
printf("The Average Is: %2f \n", avg);
if(avg>50)
printf("Pass \n");
else
printf("Fail \n");
return 0;
}
