/*Write a function prototype for the following components:
• A function that divides two numbers and returns the
remainder
• A function that finds the larger of two numbers and returns
the result
• A function that prints an ATM menu—it receives no
parameters and returns no value*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

//Function Prototype
int remainderOf(int, int);
int larger(int, int);
void atmMenue(void);

int main(){
  
}

//Function Definition
int remainderOf(int iNum1, int iNum2){
  return iNum1 % iNum2;
}

int larger(int iNum1, int iNum2){
  if(iNum1 > iNum2){
    return iNum1;
  }else if(iNum2 > iNum1){
    return iNum2;
  }
}

void atmMenue(){
  printf("\n\t1-Display balance\t\t3-Transfer funds");
  printf("\n\t2-Deposit funds\t\t4-Withdraw funds");
}
