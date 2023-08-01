/*Build a number guessing game that uses input validation
(isdigit() function) to verify that the user has entered a digit
and not a non-digit (letter). Store a random number between
1 and 10 into a variable each time the program is run. Prompt
the user to guess a number between 1 and 10 and alert the user
if he was correct or not.*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
  int intRandomNumber, intResponse;

  srand(time(0));
  intRandomNumber = rand() % 10 + 1;

  printf("\nGuess a number between (1 - 10): ");
  scanf("%d", &intResponse);
  
  if( isdigit(intResponse)){
    printf("\nPlease enter a number\n");
  }else{
    if(intResponse > 0 && intResponse <= 10){
      if(intResponse == intRandomNumber){
	printf("\n*****You guessed the number correctly*****\n");
	printf("\nThanks For Playing\n");
      }else{
	printf("\nYou guessed the number incorrectly");
	printf("\nThe correct number is %d\n", intRandomNumber);
	printf("\nThanks for playing\n");
      }
    }else{
      printf("\nPlease enter a number and the number must be between (1 - 10)\n");
    }
  }
}
