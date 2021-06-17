#include <stdio.h>

/**
 *main- prints the size of my var types
 *
 *Return: 0
 */
int main(void)
{
  char chartype;
  int intType;
  long int lintType;
  long long int linType;
  float floatType;
  
printf("size of a char: %zu byte(s)\n", sizeof(charType));
printf("size of an int: %zu byte(s)\n", sizeof(intType));
printf("size of a long int: %zu byte(s)\n", sizeof(lintType));
printf("size of a long long int: %zu byte(s)\n", sizeof(linType));
printf("size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
