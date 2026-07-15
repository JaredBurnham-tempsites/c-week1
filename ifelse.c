#include <stdio.h>

int main(){
	int a = 1, b = 2,  c = 3;

	if(a > b){
		printf("%d is bigger than %d\n", a, b);
	}else if(b < c){
		printf("%d is smaller than %d\n", b, c);
	}
	else {
		//this shouldn't run since the second statement is running
		printf("%d is not bigger than %d\n", a, b);
	}

	(c >= a + b) ? printf("%d is equal to or larger than %d and %d combined\n", c, a, b): printf("my math is wrong");
}
