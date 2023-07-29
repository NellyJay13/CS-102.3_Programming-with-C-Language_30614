#include <stdio.h>

int main() {
 char name[100];
 int birthYear, currentYear, age;
 printf("Enter the student's name: ");
 fgets(name, sizeof(name), stdin);
 printf("Enter the student's birth year: ");
 scanf("%d", &birthYear);
 time_t t = time(NULL);
 struct tm *currentTime = localtime(&t);
 currentYear = currentTime->tm_year + 1900;
 age = currentYear - birthYear;
 // Display the student's name and age
 printf("\nStudent's Name: %s", name);
 printf("Student's Age: %d\n", age);
 return 0;
}
