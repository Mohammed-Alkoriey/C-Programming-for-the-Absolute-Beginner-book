/*Create a counting program that counts from 1 to 100 in
  increments of 5.*/
#include <stdio.h>

int main(){
  int iNum;
  iNum = 1;
  while(iNum <= 100){
    printf("\n%d\n", iNum);
    iNum += 5;
  }
}
