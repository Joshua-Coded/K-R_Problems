/**
 *
 * Write a program to print maximum, minimum limits of char, int, long using calculation.
 * Author: Joshua Alana 
 */
 
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  /* ranges of various integers types through calculation */
  printf("Ranges of various integers types through calculations\n");

  printf("Minimum Signed Char %d\n", -(int)((unsigned char) ~0 >> 1) - 1);
  printf("Maximum Signed Char %d\n", (int)((unsigned char) ~0 >> 1));


  printf("Minimum signed short %d\n", -(int)((unsigned short) ~0 >> 1) - 1);
  printf("Maximum signed short %d\n", (int)((signed short) ~0 >> 1));

  printf("Minimum Signed Int %d\n", -(int)((unsigned int) ~0 >> 1) -1);
  printf("Maximum Signed Int %d\n", (int)((unsigned int) ~0 >> 1));

  printf("Minimum Signed Long %ld\n", -(long)((unsigned long) ~0 >> 1) - 1);
  printf("Maximum Signed Long %ld\n", (long)((unsigned long) ~0 >> 1));

  return 0;
}
