/*Build a program that uses a single-dimension array to store
10 numbers input by a user. After inputting the numbers, the
user should see a menu with two options to sort and print the
10 numbers in ascending or descending order.
2*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void vSortAsc();
void vSortDesc();
int main(){
  int iNumbers[10];
  int iNumber, iChoice;
  for(int x = 0;x < 10;x++){
    printf("enter the nummber: ");
    scanf("%d", &iNumber);
    iNumbers[x] = iNumber;
  }
  system("clear");
  printf("1-\tprint ascending\n");
  printf("2-\tprint descending\n");
  printf("choose: ");
  scanf("%d", &iChoice);
  if(iChoice == 1){
    vSortAsc(iNumbers);
  }else if(iChoice == 2){
    vSortDesc(iNumbers);
  }
  for(int x = 0; x < 10; x++){
    printf("%d ", iNumbers[x]);
  }
  printf("\n");
}
void vSortAsc(int nums[]){
  for(int i = 0; i < 10; i++){//i = 0
    for(int j = 0; j < 10; j++){//j = 1
      if(nums[j] > nums[j + 1]){
	int temp = nums[j];
	nums[j] = nums[j+1];
	nums[j+1] = temp;
      }
    }
  }
}

void vSortDesc(int nums[]){
  for(int i = 0; i < 10; i++){//i = 0
    for(int j = 0; j < 10; j++){//j = 1
      if(nums[j] < nums[j + 1]){
	int temp = nums[j];
	nums[j] = nums[j+1];
	nums[j+1] = temp;
      }
    }
  }
}
