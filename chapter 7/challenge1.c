/*Build a program that performs the following operations:
• Declares three pointer variables called iPtr of type int,
cPtr of type char, and fFloat of type float.
• Declares three new variables called iNumber of int type,
fNumber of float type, and cCharacter of char type.
• Assigns the address of each non-pointer variable to the
matching pointer variable.
• Prints the value of each non-pointer variable.
• Prints the value of each pointer variable.
• Prints the address of each non-pointer variable.
• Prints the address of each pointer variable.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int *iPtr, iNumber;
  float *fPtr, fNumber;
  char *cPtr, cCharacter;
  iPtr = &iNumber;
  fPtr = &fNumber;
  cPtr = &cCharacter;

  printf("iNumber = %d, fNumber = %f and cCharacter = %c\n", iNumber, fNumber, cCharacter);
  printf("iPtr = %p, fPtr = %p and cPtr = %p\n", iPtr, fPtr, cPtr);
  printf("iNumber address = %p, fNumber address = %p and cCharacter address = %p\n", &iNumber, &fNumber,&cCharacter);
  printf("iPtr address = %p, fPtr address = %p and cPtr address = %p\n", &iPtr, &fPtr, &cPtr);
}
