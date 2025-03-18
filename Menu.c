#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
int main(void){
  
bool isValid = true;
uint8_t inputMenu;
do{
 printf("---Menu---\n");
 printf("1 to view the list of students\n");
 printf("2 to add the student or grade\n");
 printf("3 to delete the student or grade\n");
 printf("4 to exit the Menu\n");
 printf("Enter the number (range 1 to 4) : ");
  scanf("%hhu",&inputMenu);
// Switch case
switch(inputMenu){
  case 1:
  printf("Menu 1\n");
  break;
  case 2:
  printf("Menu 2\n");
  break;
  case 3:
  printf("Meniu 3\n");
  break;
  case 4:
   isValid = false;
   break;
  default:
  printf("Invalid number, try again\n");
}
} while(isValid);

return 0;
}

