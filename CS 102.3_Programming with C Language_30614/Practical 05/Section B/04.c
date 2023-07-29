#include <stdio.h>
#include
<stdlib.h>
int main() {
int employeeNo, count = 0;
double basicSalary;
printf("Enter employee number and basic salary : \n");
while (1) {
scanf("%d", &employeeNo);
if (employeeNo == -999)
{ break;
}
scanf("%lf", &basicSalary);
if (basicSalary >=
5000) { count++;
}
}
printf("Number of employees with a basic salary >= 5000: %d\n", count);
return 0;
}
