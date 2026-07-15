#include <stdio.h>

int main(){
	int counter = 0;
	int counting = 100;
	while(counter < counting){
		printf("%d more times\n", counting);
		counting --;
	}

	do {
		if(counting == 5){break;}
		if(counting == 4){
			printf("%d look I broke at 5 and won't print 4", counting);
		}
		printf("do me pls until the statement is false\n");
		counting ++;
	}while(10 > counting);

	int i;
	for( i = 0; i < 3; i++){
		(i == 0 || 1 == 2)?printf("print %d more times \n", 2 - i):printf("print %d more time \n", 2 - i);
	}
	return 0;
}
