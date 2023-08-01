/*Create a program that uses this formula f = (a-b)(x-y) to output
the result; this time, however, prompt the user for the values
a, b, x, and y. Use appropriate variable names and naming
conventions.*/
#include <stdio.h>

int main(){
  int intNum1, intNum2, intNum3, intNum4, intResult;

  printf("\t\t\t Calculate this formula (a-b)(x-y) by Mohammed Alkoriey\n\n");

  printf("Enter the first number(a): ");
  scanf("%d", &intNum1);

  printf("\nEnter the second number(b): ");
  scanf("%d", &intNum2);

  printf("\nEnter the third number(x): ");
  scanf("%d", &intNum3);

  printf("\nEnter the fourth number(y): ");
  scanf("%d", &intNum4);

  intResult = (intNum1 - intNum2)*(intNum3 - intNum4);

  printf("\n(%d - %d)(%d - %d) = %d\n", intNum1, intNum2, intNum3, intNum4, intResult);
}
