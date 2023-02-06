#include <stdio.h>
#include <math.h>

int convertBinaryToDecimal(long long n);

int main() {
	long long n;
	printf("输入一个二进制数: ");
	scanf("%lld", &n);
	printf("二进制数 %lld 转换为十进制为 %d", n, convertBinaryToDecimal(n));
	return 0;
}

int convertBinaryToDecimal(long long n) {
	int decimalNumber = 0, i = 0, remainder;
	//二进制数，数码与位权的乘积和即十进制数
	while (n != 0) {
		remainder = n % 10;	//取个位数码
		n /= 10;			//删个位数码
		decimalNumber += remainder * pow(2, i);	//数码与位权相乘，再依次相加，幂pow是指数运算的结果
		++i;				//递增位权
	}
	return decimalNumber;
}
