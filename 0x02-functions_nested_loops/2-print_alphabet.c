  1 #include "main.h"
  2 /**
  3  * print_alphabet_x10 - a function that print 10 times the alphabet
  4  *
  5  * Return: x10 a-z
  6  */
  7 void print_alphabet_x10(void);
  8 {
  9         int i, j;
 10 
 11         i = 0;
 12 
 13         while (i < 10)
 14         {
 15                 for (j = 'a'; j <= 'z'; j++)
 16                 {
 17                         _putchar(j);
 18                 }
 19                 i++;
 20                 _putchar('\n');
 21         }
 22 }
