 #include <stdio.h>
int main() {
 int intValue;
 float floatValue;
 double doubleValue;
 char charValue;

 printf("Enter an integer value: ");
 scanf("%d", &intValue);
printf("Enter a float value: ");
 scanf("%f", &floatValue);
printf("Enter a double value: ");
 scanf("%lf", &doubleValue);
printf("Enter a character value: ");
 scanf(" %c", &charValue);
 printf("\nInteger value: %d\n", intValue);
 printf("Float value: %.2f\n", floatValue);
 printf("Double value: %.2lf\n", doubleValue);
 printf("Character value: %c\n", charValue);
 return 0;

