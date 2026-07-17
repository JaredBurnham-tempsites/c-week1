#include <stdio.h>

void myfunction();
void argumentative(char letsgo[]);
void s();
void c();
void coffee(void(*func)());
int ineeddata(int nums[2]);
int gotdata(int num);

int main(){
	void (*cofees[2])() = {c,s};
	myfunction();
	int (*fptr)(int) = gotdata;
	printf("using pointer as function %d\n", fptr(10));
	argumentative("hello\n");
	int b[2] = {1,2};
	int a = ineeddata(b);
	printf("data receied %d\n",gotdata(a));

	printf("passing functions\n\n");
	coffee(s);
	coffee(c);
	printf("function array");
	int i;
	for(i = 0; i < 2; i++){
		cofees[i]();
	}
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

void coffee(void (*func)()){
	func();
}

void s(){
	printf("starbucks\n");
}

void c(){
	printf("columbian\n");
}
