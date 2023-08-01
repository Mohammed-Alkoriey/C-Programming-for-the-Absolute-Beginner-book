/*Create a new program that prompts a user for numbers and
determines total revenue using the following formula: Total
Revenue = Price * Quantity.*/

#include <stdio.h>

int main(){
  float flPrice, flRevenue;
  int intQuantity;

  printf("Price: ");
  scanf("%f", &flPrice);

  printf("\nQuantity: ");
  scanf("%d", &intQuantity);

  flRevenue = flPrice * intQuantity;
  printf("$\nRevenue = $%.2f\n", flRevenue);
}
