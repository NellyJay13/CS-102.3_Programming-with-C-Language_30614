#include <stdio.h>
#include
<stdlib.h>
int main()
{
int main()
int array[10],i,count=0;
printf("Enter 10
Numbers:\n"); for (i = 0; i <
10; i++) {
scanf("%d", &array[i]);
}
for (i = 0; i < 10; i++) {
if (array[i] % 2 == 0) {
count++;
}
}
printf("The count of even numbers: %d\n", count);
return 0;
}
