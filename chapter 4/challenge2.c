/*Create a counting program that counts backward from 100 to 1
  in increments of 10.*/
#include <stdio.h>

int main(){
  int iNum = 100;

  while(iNum >= 1){
    printf("\n%d\n", iNum);
    iNum -= 10;
  }
}
