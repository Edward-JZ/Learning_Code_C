#include<stdio.h>

int main() {
	
	int num = 0;
	printf("please enter a natural number\n");
	if( scanf("%d", &num) == 1 ) {
		int sum = num * ( num + 1 ) / 2;
		printf("%d的前n项自然数之和为%d\n", num, sum);
	}
	return 0;
}
