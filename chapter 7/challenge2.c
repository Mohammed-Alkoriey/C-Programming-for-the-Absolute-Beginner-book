/*Create a program that allows a user to select one of the following
four menu options:
• Enter New Integer Value
• Print Pointer Address
• Print Integer Address
• Print Integer Value*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int iNumber, iChoice, *iPtrNumber;
  
  printf("\n Enter A Number: ");
  scanf("%d", &iNumber);
  iPtrNumber = &iNumber;
  
  system("clear");
  printf("Choose from this menue.\n\n");
  printf("1) Enter New Integer Value\n");
  printf("2) Print Pointer Address\n");
  printf("3) Print Integer Address\n");
  printf("4) Print Integer Value\n");
  printf("Choice is: ");
  scanf("%d",&iChoice);

  switch(iChoice){
  case 1:
    system("clear");
    printf("Enter New Number: ");
    scanf("%d", &iNumber);
    break;
  case 2:
    system("clear");
    printf("\nThe Pointer Address: %p\n", &iPtrNumber);
    break;
  case 3:
    system("clear");
    printf("\nThe Integer Address: %p\n", iPtrNumber);
    break;
  case 4:
    system("clear");
    printf("\nThe Integer Value: %d\n", *iPtrNumber);
    break;
  }
  system("./challenge2");
}
