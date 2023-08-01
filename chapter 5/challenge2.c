#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/********************************************
FUNCTION PROTOTYPES
********************************************/
int sportsQuestion(void);
int geographyQuestion(void);
int webDevQuestion(void);
void pause(int);
/*******************************************/
/********************************************
GLOBAL VARIABLE
********************************************/
int giResponse = 0;
int correctCount = 0;
int incorrectCount = 0;
/*******************************************/
int main()
{
 do {
 system("clear");
 printf("\n\tTHE TRIVIA GAME\n\n");
 printf("1\tSports\n");
 printf("2\tGeography\n");
 printf("3\tWeb Development\n");
 printf("4\tQuit\n");
 printf("\n\nEnter your selection: ");
 scanf("%d", &giResponse);
 switch(giResponse) {
 case 1:
   if (sportsQuestion() == 4){
 printf("\nCorrect!\n");
 correctCount++;}
   else{
 printf("\nIncorrect\n");
 incorrectCount++;}
 pause(2);
 break;
 case 2:
   if (geographyQuestion() == 2){
 printf("\nCorrect!\n");
 correctCount++;
   }else{
 printf("\nIncorrect\n");
 incorrectCount++;
   }
 pause(2);
 break;
 case 3:
   if(webDevQuestion() == 1){
     printf("\nCorrect!\n");
     correctCount++;
   }else{
     printf("\nIncorrect\n");
     incorrectCount++;
   }
   pause(2);
   break;
   
 } //end switch
 } while ( giResponse != 4 );
 printf("\nYou answered %d correctly and %d incorrectly\n", correctCount, incorrectCount);
} //end main function
/**********************************************************
FUNCTION DEFINITION
**********************************************************/
int sportsQuestion(void)
{
 int iAnswer = 0;
 system("clear");
 printf("\tSports Question\n");
 printf("\nWhat University did NFL star Deon Sanders attend? ");
 printf("\n\n1\tUniversity of Miami\n");
 printf("2\tCalifornia State University\n");
 printf("3\tIndiana University\n");
 printf("4\tFlorida State University\n");
 printf("\nEnter your selection: ");
 scanf("%d", &iAnswer);
 return iAnswer;
} //end sportsQuestion function
/**********************************************************
FUNCTION DEFINITION
**********************************************************/
int geographyQuestion(void)
{
 int iAnswer = 0;
 system("clear");
 printf("\tGeography Question\n");
 printf("\nWhat is the state capitol of Florida? ");
 printf("\n\n1\tPensecola\n");
 printf("2\tTallahassee\n");
 printf("3\tJacksonville\n");
 printf("4\tMiami\n");
 printf("\nEnter your selection: ");
 scanf("%d", &iAnswer);
 return iAnswer;
} //end geographyQuestion function
/***********************************************************
FUNCTION DEFINITION
************************************************************/
int webDevQuestion(void)
{
 int iAnswer = 0;
 system("clear");
 printf("\tWeb Development Question\n");
 printf("\nWhat is HTML? ");
 printf("\n\n1\tHypertext Markup Language\n");
 printf("2\tJavaScript\n");
 printf("3\tCascading Stylesheet\n");
 printf("4\tJson\n");
 printf("\nEnter your selection: ");
 scanf("%d", &iAnswer);
 return iAnswer;
}
/***********************************************************
FUNCTION DEFINITION
************************************************************/
void pause(int inNum)
{
 int iCurrentTime = 0;
 int iElapsedTime = 0;
 iCurrentTime = time(NULL);
 do {
 iElapsedTime = time(NULL);
 } while ( (iElapsedTime - iCurrentTime) < inNum );
} // end pause function
