#include <stdio.h>

int main()
{

	float a = 9;//implicit type conversion
	printf("%f\n", a);
	int b = 9.99;
	printf("%i\n", b);//implicit type conversion

	int c = 2, d = 5;
	float e = (float) d / c;
	printf("%.1f\n", e);

	return 0;
}
