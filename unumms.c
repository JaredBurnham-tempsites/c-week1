#include <stdio.h>

enum conslist {
	LOW,
	MEDIUM,
	DEATH = 10000,
	HIGH,
	TAXES
};

int main(){
	enum conslist var = LOW;

	printf("%d", var);
}
