/*Create a student GPA average calculator. The program should
prompt the user to enter up to 30 GPAs, which are stored in a
single-dimension array. Each time he or she enters a GPA, the
user should have the option to calculate the current GPA
average or enter another GPA. Sample data for this program is
shown below.
GPA: 3.5
GPA: 2.8
GPA: 3.0
GPA: 2.5
GPA: 4.0
GPA: 3.7
GPA Average: 3.25
Hint: Be careful to not calculate empty array elements into
your student GPA average.*/
#include <stdio.h>
#include <stdlib.h>
//Function Prototype **********

//Global Variables ************

//Main Function ***************
int main(){
  system("clear");
  int x = 0, iChoice;
  float fGrade, fGPA[30], fSum, fAverage;
  for(int i = 0; i < 30; i++){
    printf("GPA: ");
    scanf("%f", &fGrade);
    fGPA[i] = fGrade;
    printf("\n1-continue\t2-calcualte average\n");
    printf("choice is: ");
    scanf("%d", &iChoice);
    x++;
    switch(iChoice){
     case 1:
       continue;
     case 2:
       for(int y = 0; y < x; y++){
	 fSum += fGPA[y];
       }
       fAverage = fSum / x;
       printf("GPA Average: %.2f \n", fAverage);
       break;
     default:
       printf("please type 1 or 2");
    }
    break;
  }
}
//Function Definition
