#include <stdio.h>
#include <stdlib.h>
int main()
{
intservice;
char city;
float allowance=0.0,bonus=0.0,gross,basicsal,sale;
printf ("Enter Basic Sallary: ");
scanf ("%f", &basicsal);
printf("YearsOf Experience: ");
scanf("%d", &service);
printf("Enter Monthly Sale: ");
scanf("%f", &sale);
printf("Enter The City (C for Colombo, 0 For Other): ");
scanf(" %c", &city);
if (service>5)
{
allowance+=0.1*basicsal;
}
if (city=='C')
{
allowance+=2500;
}
if (sale<=2500)
{
bonus=sale*0.1;
}
if (sale > 25000 && sale <= 50000)
{
bonus=sale*0.12;
}
else
{
bonus=sale*0.15;
}
gross=basicsal+allowance+bonus;
printf("Gross Monthly Remuneration: %.2f\n", gross);
return 0;
}
