/*Create a program that prompts a user for her name. Store the
user’s name using the scanf() function and return a greeting
back to the user using her name.*/

#include <stdio.h>

int main(){
  char chrName[25];

  printf("what's your name: ");
  scanf("%s", chrName);
  printf("\nHello, %s \n", chrName);
}
