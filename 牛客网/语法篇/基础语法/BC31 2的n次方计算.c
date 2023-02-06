#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int res = 1;
	//算术左移1位(<<)，实现乘以2的功能
	for(int i = 0; i < n; i++) {
		res <<= 1;
	}
	printf("%d", res);
	return 0;
}
