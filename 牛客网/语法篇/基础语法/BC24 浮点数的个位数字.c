#include<stdio.h>
int main() {
	float a;
	int b;
	scanf("%f", &a);
	b = (int)a % 10;
	printf("%d", b);
	return 0;
}
