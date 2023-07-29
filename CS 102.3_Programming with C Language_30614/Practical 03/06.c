#include <stdio.h>
#include <stdlib.h>
int main()
{
char uppercase[]="ABC";
char lowercase[]="abc";
char digits[]="012";
char symbols[]="$*+/";
printf("Integer Equivalents of Uppercase Letters:\n");
for(int i = 0; i < 3 ;i++)
{
printf("%c: %d \n",uppercase[i],uppercase[i]);
}
printf("\n Integer Equivalents of Lowercase Letters: \n");
for(int i=0; i < 3; i++)
{
printf("%c: %d:\n",lowercase[i],lowercase[i]);
}
printf("\n Integer Equivalents of Digits:\n");
for(int i=0;i<3;i++)
{
printf("%c: %d \n", digits[i],digits[i]);
}
printf("\n Integer Equivalents of Special Symbols:\n");
for(int i=0;i<5;i++)
{
printf("%c: %d\n",symbols[i],symbols[i]);
}
return 0;
}
