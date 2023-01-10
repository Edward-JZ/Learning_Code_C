#include<stdio.h>

int main() {
	int a, b, t;
	a = 15;
	b = 30;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	t = a;
	a = b; 
	b = t;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}
