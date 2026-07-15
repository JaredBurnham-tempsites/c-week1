#include <stdio.h>

int main(){
	int allTheNumbers[] = {1,2,3,4,5,6,7,8,9};
	int i;
	for(i = 0; i <= 8; i++){
		printf("the number %d\n", allTheNumbers[i]);
	}
	allTheNumbers[3] = 33;
	printf("4 becomes %d mwahaha\n",allTheNumbers[3]);
	int sizedArray[4] = {10,20,30,40};// sized array important for known list size and saving memory

	for(i = 0; i < 4; i++){
	printf("the sized array is speaaaakkkiiing %d\n", sizedArray[i]);
	}

	printf("%zu is how big allTheNumbers do be\n", sizeof(allTheNumbers));
	int length = sizeof(allTheNumbers) / sizeof(allTheNumbers[0]);

	printf("actual length of allTheNumbers is %d", length);

	//better loop here we goooooo
	for(i = 0; i < length; i++){
	printf("%d\n", allTheNumbers[i]);
	}
	// toodoo multidimensional array maybe even 5 levels deep delving into the multiverse with that one eh

}
