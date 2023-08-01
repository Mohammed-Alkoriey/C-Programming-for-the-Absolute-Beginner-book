/*Modify the Concentration Game to use a main menu. The menu
should allow the user to select a level of difficulty and/or quit
the game (a sample menu is shown below). The level of difficulty
could be determined by how many separate numbers the user
has to concentrate on and/or how many seconds the player has
to concentrate. Each time the user completes a single game of
Concentration, the menu should reappear allowing the user to
continue at the same level, at a new level, or simply quit the
game.
1 Easy (remember 3 numbers in 5 seconds)
2 Intermediate (remember 5 numbers in 5 seconds)
3 Difficult (remember 5 numbers in 2 seconds)
4 Quit*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(){
  char cPlay;
  int iResult1, iResult2, iResult3, iResult4, iResult5, iAnswer1, iAnswer2, iAnswer3, iAnswer4, iAnswer5, iCurrentTime, iElaspedTime, iMenueChoice;
  srand(time(NULL));

  printf("\nPlay a game of Concentration?(y or n): ");
  scanf("%c", &cPlay);
  do{
   if(cPlay == 'y'){
     printf("\n1- Easy");
     printf("\n2- Intermediate");
     printf("\n3- Difficult");
     printf("\n4- Quit\n");
     printf("\nChoose: ");
     scanf("%d", &iMenueChoice);

     switch(iMenueChoice){
       case 1:
 	 iResult1 = rand() % 100 + 1;
	 iResult2 = rand() % 100 + 1;
	 iResult3 = rand() % 100 + 1;

         printf("\nthe numbers you have to Concentrate: ");
         printf("\n%d %d %d\n", iResult1, iResult2, iResult3);
	 iCurrentTime = time(NULL);
	 do{
	   iElaspedTime = time(NULL);
	 }while(iElaspedTime - iCurrentTime < 5);
	 system("clear");

	 printf("\nEnter the three numbers separated with one space\nThe Numbers: ");
	 scanf("%d %d %d", &iAnswer1, &iAnswer2, &iAnswer3);
	 if(iAnswer1 == iResult1 && iAnswer2 == iResult2 && iAnswer3 == iResult3){
	   printf("You Answered it correctly\n");
	   continue;
	 }else{
	   printf("\nTry Again\n");
	   continue;
	 }
	 break;
       case 2:
	 iResult1 = rand() % 100 + 1;
	 iResult2 = rand() % 100 + 1;
	 iResult3 = rand() % 100 + 1;
	 iResult4 = rand() % 100 + 1;
	 iResult5 = rand() % 100 + 1;

         printf("\nthe numbers you have to Concentrate: ");
         printf("\n%d %d %d %d %d\n", iResult1, iResult2, iResult3, iResult4, iResult5);
	 iCurrentTime = time(NULL);
	 do{
	   iElaspedTime = time(NULL);
	 }while(iElaspedTime - iCurrentTime < 10);
	 system("clear");

	 printf("\nEnter the three numbers separated with one space\nThe Numbers: ");
	 scanf("%d %d %d %d %d", &iAnswer1, &iAnswer2, &iAnswer3, &iAnswer4, &iAnswer5);
	 if(iAnswer1 == iResult1 && iAnswer2 == iResult2 && iAnswer3 == iResult3 && iAnswer4 == iResult4 && iAnswer5 == iResult5){
	   printf("You Answered it correctly\n");
	   continue;
	 }else{
	   printf("\nTry Again\n");
	   continue;
	 }
	 break;
       case 3:
	 iResult1 = rand() % 100 + 1;
	 iResult2 = rand() % 100 + 1;
	 iResult3 = rand() % 100 + 1;
	 iResult4 = rand() % 100 + 1;
	 iResult5 = rand() % 100 + 1;

         printf("\nthe numbers you have to Concentrate: ");
         printf("\n%d %d %d %d %d\n", iResult1, iResult2, iResult3, iResult4, iResult5);
	 iCurrentTime = time(NULL);
	 do{
	   iElaspedTime = time(NULL);
	 }while(iElaspedTime - iCurrentTime < 5);
	 system("clear");

	 printf("\nEnter the three numbers separated with one space\nThe Numbers: ");
	 scanf("%d %d %d %d %d", &iAnswer1, &iAnswer2, &iAnswer3, &iAnswer4, &iAnswer5);
	 if(iAnswer1 == iResult1 && iAnswer2 == iResult2 && iAnswer3 == iResult3 && iAnswer4 == iResult4 && iAnswer5 == iResult5){
	   printf("You Answered it correctly\n");
	   continue;
	 }else{
	   printf("\nTry Again\n");
	   continue;
	 }
	 break;
       case 4:
	 break;
       default:
	 printf("\nplease choose from the menue(1 - 4)\n");
	 break;
     }break;
   }else if(cPlay == 'n' || cPlay == 'N'){
     printf("Okay,as you want.\n");
     break;
   }else{
     printf("\nYou have to enter the question.\n");
     break;
   }
  }while(1);
}
