#include <stdio.h>

int main() {
	int a = 2;
	int b = 4;
	printf("a = %d  b = %d\n", a, b);
	a = a ^ b;  			//异或运算^，同假异真
	b = a ^ b;
	a = a ^ b;
	printf("a = %d  b = %d\n", a, b);
	return 0;
}
