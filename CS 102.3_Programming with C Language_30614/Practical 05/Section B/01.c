#include <stdio.h>
#include
<stdlib.h>
int main() {
int i, positiveCount = 0, negativeCount = 0, zeroCount = 0, numbers[10];
printf("Enter 10 numbers:\n");
for (i = 0; i < 10; i++) {
scanf("%d",
&numbers[i]);
}
for (i = 0; i < 10;
i++) { if
(numbers[i] > 0) {
positiveCount++;
} if (numbers[i] < 0)
{
negativeCount+
+;
} else {
zeroCount++;
}
}
printf("Positive numbers: %d\n", positiveCount);
printf("Negative numbers: %d\n", negativeCount);
printf("Zeros: %d\n", zeroCount);
return 0;
}
