#include<stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	int n = num;
	int i = 0;
	while(num) {
		num /= 10;
		i++;
	}
	printf("%d是%d位数\n", n, i);
	
}
