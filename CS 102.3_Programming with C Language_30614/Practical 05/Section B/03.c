#include <stdio.h>
#include
<stdlib.h>
int main() {
double prices[10],total =
0.0; int i, count = 0;
printf("Enter prices of 10 items:\n");
for (i = 0; i < 10; i++) {
scanf("%lf",
&prices[i]); total +=
prices[i];
if (prices[i] > 200)
{ count++;
}
}
double average = total / 10;
printf("Average value of an item: %.2lf\n", average);
printf("Number of items with price > 200: %d\n", count);
return 0;
}
