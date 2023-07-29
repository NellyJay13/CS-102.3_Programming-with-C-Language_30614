 #include <stdio.h>
#include <stdlib.h>
int main()
{
 int letter;
 printf("Enter the Letter : ");
 scanf("%c",&letter);
 switch(letter)
 {
 case 'A':
 case 'a':
 case 'E':
 case 'e':
 case 'I':
 case 'i':
 case 'O':
 case 'o':
 case 'u':
 printf("%c is a vowel",letter);
 break;
 default:
 printf("%c is not a vowel",letter);
 }
 return 0;
}
