/*Create a counting program that prompts the user for three
inputs (shown next) that determine how and what to count.
Store the user’s answers in variables. Use the acquired data to
build your counting program with a for loop and display the
results to the user.
• Beginning number to start counting from
• Ending number to stop counting at
• Increment number*/
#include <stdio.h>
#include <ctype.h>

int main(){
  int iBegin, iEnd, iStep;

  printf("\nPrint from: ");
  scanf("%d", &iBegin);
  printf("\nTo: ");
  scanf("%d", &iEnd);
  printf("\nIncrease number: ");
  scanf("%d", &iStep);

  if(iBegin < iEnd && isdigit(iBegin) == 0 && isdigit(iEnd) == 0 && isdigit(iStep) == 0){
    while(iBegin <= iEnd){
      printf("%d - ", iBegin);
      iBegin += iStep;
    }
  }else{
    printf("the first number must be less than the second number");
  }
  printf("\n");
}
