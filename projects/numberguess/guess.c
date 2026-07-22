#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
 srand(time(NULL));
 int raw_random = rand();
 int min = 1;
 int max = 100;
 int ranged_random = (rand() % (max - min + 1)) + min;
 int userguess = 0;
 printf("guess the correct number or never leave\n");
 printf("press enter to begin");
 getchar();
 do{
 printf("\e[1;1H\e[2J");
 if(userguess != 0){
  printf("%d is incorrect try again\n", userguess);
 }
 scanf("%d", &userguess);
 }while(userguess != ranged_random);
 printf("you win I would give you a dollar but alas your number guessing skill have no value to me at this time");
 return 0;
}
