#include <stdio.h>
#include
<stdlib.h>
int main() {
int employeeNo, count = 0, overtimeCount = 0;
double hoursWorked, overtimePayment, totalOvertimePayment
= 0.0; printf("Enter employee number and hours worked :\n");
scanf("%d", &employeeNo);
while (employeeNo != -999) {
scanf("%lf", &hoursWorked);
if (hoursWorked > 40) {
overtimePayment = 150 * 40 + 200 * (hoursWorked - 40);
} else {
overtimePayment = 150 * hoursWorked;
}
printf("Employee number: %d\n", employeeNo);
printf("Overtime payment: %.2lf\n", overtimePayment);
totalOvertimePayment +=
overtimePayment; count++;
if (overtimePayment > 4000) {
overtimeCount++;
}
scanf("%d", &employeeNo);
}
double percentageExceeding4000 = (double) overtimeCount / count * 100;
printf("\nSummary:\n");
printf("Total employees: %d\n", count);
printf("Total overtime payment: %.2lf\n", totalOvertimePayment);
printf("Percentage of employees with overtime payment exceeding Rs. 4000: %.2lf%%\n",
percentageExceeding4000);

}
