#include <stdio.h>

int main(){
	int myAge = 10000;

	printf("%d is my age\n",myAge);

	printf("%p is where my age is remembered\n", &myAge); 

	int* ageptr = &myAge;

	printf("%p my address again but a different way the user will never see XD \n", ageptr);
	printf("%d my age yet again a different passage there just like life \n",*ageptr);

// arrays and pointers
	int nums[4] = {5,19,400,125};
	int i;
	printf("%p array name is the pointer\n", nums);
	printf("%d %d num 1 and num 2\n", *nums, *(nums + 1));
	for(i = 0; i < 4; i++){
		printf("%d\n", nums[i]);
		printf("%p\n", &nums[i]);
	}

//pointer math hurts my brain

	int *p = nums;
	printf("%d\n",*p);
	p++;
	printf("%d\n",*p);
	p--;

	int *start = &nums[1];
	int *end = &nums[3];
	printf("%ld distance between", end - start);// long double oof

	for(i = 0; i < 4; i++){
		printf("%d\n",*p);
		p++;
	}
	p--;

	int **ptrtoptr = &p;
	printf("pointer to pointer address mucho complicado %d\n", **ptrtoptr);
}
