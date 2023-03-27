#include<stdio.h>
int main() {
	float f, c;
	scanf("%f", &f);

	c = 5.0 / 9.0 * (f - 32);

	printf("%.3lf", c);
	return 0;
}
