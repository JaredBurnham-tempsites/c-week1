#include <stdio.h>

int main(){
 int choice = 0, num1, num2;
 printf("%d", choice);
 while(1 == 1){
  printf("welcome to simple calculator\nPlease use 1 - 4 to select operation type\n");
  scanf("%i",&choice);
  printf("%d", choice);
  if(choice == 1 || choice == 2 || choice == 3 || choice == 4){break;}
 };
 switch(choice){
  case 1:
   printf("you chose addition please select 2 numbers to add\n");
   scanf("%d", &num1);
   printf("first number is : %d", num1);
   scanf("%d", &num2);
   printf("%d + %d = %d", num1, num2, num1 + num2);
   break;
  case 2:
   printf("chose two numbers to subtract\n");
   scanf("%d", &num1);
   printf("\n num1: %d\n", num1);
   scanf("%d", &num2);
   printf("%d - %d = %d\n", num1 , num2, num1 - num2);
   break;
 case 3:
  printf("choose 2 numbers to multiply");
  scanf("%d", &num1);
  printf("%d is num1\n", num1);
  scanf("%d", &num2);
  printf("%d * %d = %d", num1, num2, num1 * num2);
  break;
 case 4:
  printf("choose 2 numbers to divide\n");
  scanf("%d", &num1);
  scanf("%d", &num2);
  if(num2 == 0){printf("cannot devide by zero\n"); return 1;}
  printf("%d / %d = %.2f\n", num1, num2,(float) num1/(float)num2);
  break;
 }
}
