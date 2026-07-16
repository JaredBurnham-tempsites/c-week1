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
	int threeD[][2][3] = {
			{
				{1,2,3},{21,22,23}
			},{
				{4,5,6},{41,42,43}
			}
			};
	int j,k;
	for(i = 0; i< 2;i++){
		for(j = 0; j < 2; j++){
			for(k = 0; k < 3; k++){
				printf("%d\n",threeD[i][j][k]);
			}
		}
	}

}
