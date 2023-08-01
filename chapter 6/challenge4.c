/*Modify the tic-tac-toe game to use a two-dimensional array
  instead of a single-dimension array*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

//Function Prototype ********************
int iDisplayBoard();
int iVerifySelection(int, int);
int iCheckForWin();
//Global Variables **********************
char cBoard[3][3];
int iRow, iCol, iEmpty, iWon, iCat;
//Main Function *************************
int main(){
  system("clear");
  iDisplayBoard();
  for(int i = 1; i > 0; i++){
    if(i % 2 == 0){
      printf("choose your o  place: ");
      scanf("%d %d", &iRow, &iCol);
      if(iVerifySelection(iRow,iCol) == 1){
	cBoard[iRow-1][iCol-1] = 'O';
	iDisplayBoard();
	if(iCheckForWin() == 1){
	  break;
	}
	iDisplayBoard();
      }else{
	printf("This palce is Not Empty\n");
	i++;
	continue;
      }
    }else{
      printf("choose your X  place: ");
      scanf("%d %d", &iRow, &iCol);
      if(iVerifySelection(iRow,iCol) == 1){
	cBoard[iRow-1][iCol-1] = 'X';
	iDisplayBoard();
	if(iCheckForWin() == 1){
	  break;
	}
	iDisplayBoard();
      }else{
	printf("This palce is Not Empty\n");
	i++;
	continue;
      }
    }
    iCat++;
    if(iCat == 9){
      printf("CAT Game\n");
      break;
    }
  }
}

//Function Definition *******************
int iDisplayBoard(){
  system("clear");
  printf("#########################\n");
  printf("#\t#\t#\t#\n");
  printf("#   %c\t#   %c\t#   %c\t#\n",cBoard[0][0],cBoard[0][1],cBoard[0][2]);
  printf("#\t#\t#\t#\n");
  printf("#########################\n");
  printf("#\t#\t#\t#\n");
  printf("#   %c\t#   %c\t#   %c\t#\n",cBoard[1][0],cBoard[1][1],cBoard[1][2]);
  printf("#\t#\t#\t#\n");
  printf("#########################\n");
  printf("#\t#\t#\t#\n");
  printf("#   %c\t#   %c\t#   %c\t#\n",cBoard[2][0],cBoard[2][1],cBoard[2][2]);
  printf("#\t#\t#\t#\n");
  printf("#########################\n");
}

int iVerifySelection(int Row, int Col){
  if(cBoard[Row - 1][Col - 1] != 'X' && cBoard[Row - 1][Col - 1] != 'O'){
    iEmpty = 1;
  }else{
    iEmpty = 0;
  }
  return iEmpty;
}

int iCheckForWin(){
  if(cBoard[0][0] == 'X' && cBoard[0][1] == 'X' && cBoard[0][2] == 'X'){
    printf("X won the game\n");
    iWon = 1;
  }else if(cBoard[0][0] == 'O' && cBoard[0][1] == 'O' && cBoard[0][2] == 'O'){
    printf("O won the game\n");
    iWon = 1;
  }else if(cBoard[1][0] == 'X' && cBoard[1][1] == 'X' && cBoard[1][2] == 'X'){
    printf("X won the game\n");
    iWon = 1;
  }else if(cBoard[1][0] == 'O' && cBoard[1][1] == 'O' && cBoard[1][2] == 'O'){
    printf("O won the game\n");
    iWon = 1;
  }else if(cBoard[2][0] == 'X' && cBoard[2][1] == 'X' && cBoard[2][2] == 'X'){
    printf("X won the game\n");
    iWon = 1;
  }else if(cBoard[2][0] == 'O' && cBoard[2][1] == 'O' && cBoard[2][2] == 'O'){
    printf("O won the game\n");
    iWon = 1;
  }else if(cBoard[0][0] == 'X' && cBoard[1][1] == 'X' && cBoard[2][2] == 'X'){
    printf("X won the game\n");
    iWon = 1;
  }else if(cBoard[0][0] == 'O' && cBoard[1][1] == 'O' && cBoard[2][2] == 'O'){
    printf("O won the game\n");
    iWon = 1;
  }else if(cBoard[0][2] == 'X' && cBoard[1][1] == 'X' && cBoard[2][0] == 'X'){
    printf("X won the game\n");
    iWon = 1;
  }else if(cBoard[0][2] == 'O' && cBoard[1][1] == 'O' && cBoard[2][0] == 'O'){
    printf("O won the game\n");
    iWon = 1;
  }
  return iWon;
}
