/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  int sub1, sub2;
  float avg;

  printf("Ener the subject 01 : ");
  scanf("%d", &sub1);
  printf("Enter the subject 02 : ");
  scanf("%d", &sub2);

  avg = (sub1 + sub2) / 2;

  printf("The average mark is %.2f", avg);
  return 0;
}
