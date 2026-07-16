#include <stdio.h>

void myfunction();
void argumentative(char letsgo[]);
int ineeddata(int nums[2]);
int gotdata(int num);

int main(){
	myfunction();

	argumentative("hello\n");
	int b[2] = {1,2};
	int a = ineeddata(b);
	printf("data receied %d\n",gotdata(a));
	return 0;
}


void myfunction(){
	printf("hello from my first c function\n");
}

void argumentative(char letsgo[]){
	printf("%s\nIs what you say\n NOOOOO \n",letsgo);
}

int ineeddata(int nums[2]){
	int r =nums[0] + nums[1];
	return r;
}

int gotdata(int num){
	return num;
}

