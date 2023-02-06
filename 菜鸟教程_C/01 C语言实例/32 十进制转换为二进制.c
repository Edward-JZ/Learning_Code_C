#include <stdio.h>
#include <math.h>

long long convertDecimalToBinary(int n);

int main() {
	int n;
	printf("输入一个十进制数: ");
	scanf("%d", &n);
	printf("十进制数 %d 转换为二进制位 %lld", n, convertDecimalToBinary(n));
	return 0;
}
//整数：除基取余法；小数：乘基取整法
long long convertDecimalToBinary(int n) {
	long long binaryNumber = 0;
	int remainder, i = 1, step = 1;

	while (n != 0) {
		remainder = n % 2;		//取余
		printf("Step %d: %d/2, 余数 = %d, 商 = %d\n", step++, n, remainder, n / 2);
		n /= 2;					//除基留商
		//将余数逆序列出的代码写法
		binaryNumber += remainder * i;
		i *= 10;
	}
	return binaryNumber;
}
