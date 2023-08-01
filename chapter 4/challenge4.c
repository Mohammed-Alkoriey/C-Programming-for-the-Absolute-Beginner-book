/* Create a math quiz program that prompts the user for how many
questions to ask. The program should congratulate the player if
he or she gets the correct answer or alert the user of the correct
answer in the event the question is answered incorrectly.
The math quiz program should also keep track of how many
questions the player has answered correctly and incorrectly and
display these running totals at the end of the quiz.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(){
  int iQNumber, iAnswer, iNum1, iNum2,iCorrect, iIncorrect,iResult;
  srand(time(NULL));

  printf("\n**********Multiplication Quiz**********\n");
  printf("\nHow many questions do you want: ");
  scanf("%d", &iQNumber);

  for(int i = 1 ; i <= iQNumber ; i++){
    iNum1 = rand() % 100 + 1;
    iNum2 = rand() % 100 + 1;
    iResult = iNum1 * iNum2;

    printf("\n%d X %d = ", iNum1, iNum2);
    scanf("%d", &iAnswer);

    if(iAnswer == iResult){
      printf("*****Correct Answer*****\n");
      iCorrect++;
    }else{
      printf("Wrong Answer \nThe correct answer is %d\n", iResult);
      iIncorrect++;
    }
  }
  
  printf("You answered :- \n\t -%d correctly\n\t -%d incorrectly\nThanks for taking the quiz\n", iCorrect, iIncorrect);
}
