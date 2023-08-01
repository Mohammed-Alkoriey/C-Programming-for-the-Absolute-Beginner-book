/*Create a program that allows a user to enter up to five names
of friends. Use a two-dimensional array to store the friends’
names. After each name is entered, the user should have the
option to enter another name or print out a report that shows
each name entered thus far.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  system("clear");
  int x = 0, iChoice;
  char cName[10],cNames[5][1];
  for(int i = 0; i < 5; i++){
    printf("Name: ");
    scanf("%s", &cNames[i][10]);
    printf("\n1-continue\t2-Print Report\n");
    printf("choice is: ");
    scanf("%d", &iChoice);
    x++;
    switch(iChoice){
     case 1:
       continue;
     case 2:
       for(int y = 0; y < x; y++){
	 printf("%s\n", cNames[y][0]);
       }
       break;
     default:
       printf("please type 1 or 2");
    }
    break;
  }
  for(int y = 0; y < x; y++){
    printf("%s\n", cNames[y][10]);
  }
}
