#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car {
	char brand[50];
	int year;
};


int main(){
	struct Car *ptr = (struct Car*) malloc(sizeof(struct Car));
	if(ptr == NULL){printf("malloc failed");return 1;}
	strcpy(ptr->brand,"honda");
	ptr->year = 2022;
	printf("%s",ptr->brand);
	printf("%d", ptr->year);
	free(ptr);
	return 0;
}
