/*Given a = 5, b = 1, x = 10, and y = 5, create a program that
outputs the result of the formula f = (a - b)(x - y) using a
single printf() function.*/

#include <stdio.h>

int main(){
  int a = 5, b = 1, x = 10, y = 5, f = (a - b)*(x - y);
  printf("(a - b)(x - y) = %d\n",f);
}
