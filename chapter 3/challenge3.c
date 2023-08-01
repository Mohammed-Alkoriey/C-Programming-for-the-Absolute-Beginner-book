/*Create a dice game that uses two six-sided dice. Each time the
program runs, use random numbers to assign values to each die
variable. Output a “player wins” message to the user if the sum
of the two dice is 7 or 11. Otherwise output the sum of the two
dice and thank the user for playing.*/
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
  int iDie1, iDie2, iSum;
  srand(time(0));
  iDie1 = (rand() % 7) + 1;
  iDie2 = (rand() % 7) + 1;
  iSum = iDie1 + iDie2;
  if(iSum == 7 || iSum == 11){
    printf("\n**********Player wins**********\n");
  }else{
    printf("\n|%d| , |%d| >>>>> %d\n", iDie1 , iDie2, iSum);
  }
  printf("Thanks for playing\n");
}
