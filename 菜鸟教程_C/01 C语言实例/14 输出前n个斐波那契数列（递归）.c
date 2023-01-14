#include<stdio.h>

int fibonacci(int);

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++){		//依次输出肯定要有for循环，逃不掉
		printf("%d\n", fibonacci(i)); 	
	}

	return 0;
}

int fibonacci(int num) {
	if (num == 0) {
		return 0;		//递归出口
	} 
	if (num == 1) {
		return 1;
	}
	return fibonacci(num - 1) + fibonacci(num - 2);
}
