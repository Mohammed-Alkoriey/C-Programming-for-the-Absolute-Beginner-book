#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//Function Prototype ********************
int passByReference(const int *);
//Global Variables **********************

//Main Function *************************
int main(){
  int iNum;
  int *ptrNum;
  ptrNum = &iNum;
  printf("Enter a number: ");
  scanf("%d", &iNum);
  passByReference(ptrNum);
  printf("outside the reference function the x = %d\n", iNum);
}

//Function Definition *******************
int passByReference(const int *y){

  printf("inside the reference function the x = %d\n", *y);
}
