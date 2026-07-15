#include <stdio.h>

int main(){
	int number = 3;

	switch(number){
		case 1:
			printf("variable assigned wrong");
			break;
		case 2:
			printf("variable is not 2 XD");
			break;
		case 3:
			printf("hey %d is the variable and switch case", number);
			break;
		case 4:
			printf("remember the break in case 3 yeah it prevents this line");
			break;
	}
}
