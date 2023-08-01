/*Build a new program that prompts a user for data and
determines a commission using the following formula:
Commission = Rate * (Sales Price – Cost).*/

#include <stdio.h>

int main(){
  float fltCommission, fltRate, fltPrice, fltCost;

  printf("\t\t\t***** Commission calculator by Mohammed Alkoriey *****\n\n");

  printf("Rate(%): ");
  scanf("%f", &fltRate);

  printf("\nSales price: ");
  scanf("%f", &fltPrice);

  printf("\nCost: ");
  scanf("%f", &fltCost);

  fltCommission = (fltRate / 100) * (fltPrice - fltCost);
  printf("\nCommission: $%.2f\n", fltCommission);
}
