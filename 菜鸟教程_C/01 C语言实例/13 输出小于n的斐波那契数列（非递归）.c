#include<stdio.h>

int main() {
	
	int n, num1 = 0, num2 = 1, temp;
	scanf("%d", &n);
	for(; num1 <= n; ) {
		printf("%d\n", num1);
		temp = num2;
		num2 = num2 + num1;
		num1 = temp;
	}
	return 0;
}
