//辗转相除法（欧几里得算法）求最大公约数，含递归与非递归版本
//两个整数的最大公约数等于其中较小的那个数和两数相除余数的最大公约数
//最大公约数（Greatest Common Divisor）缩写为GCD
//以除数和余数反复做除法运算，当余数为 0 时，取当前算式除数为最大公约数
#include<stdio.h>
int GCD(int, int);				//迭代法，循环的过程中不断优化过程
int MaxCommonFactor(int, int);	//递归法，其实就是用递归函数的方式，代替了循环
int GCD_BL(int a3, int b3);		//遍历法，通过循环，一个一个数字的确认最大公因数
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", GCD(a, b));
	printf("%d\n", MaxCommonFactor(a, b));
	printf("%d\n", GCD_BL(a, b));
	return 0;
}
int GCD(int a1, int b1) {
	int temp;
	while ( a1 % b1 != 0 ) {	//以余数为0为判断条件
		temp = b1;
		b1 = a1 % b1;		//b1中存余数
		a1 = temp;
	}
	return b1;
}
int MaxCommonFactor(int a2, int b2) {
	if ( a2 % b2 == 0) {
		return b2;
	}
	return MaxCommonFactor(b2, a2 % b2);	//此处的return不能少
}
int GCD_BL(int a3, int b3) {
	int gcd, i;
	for (i = 1; i <= b3; i++) {
		if ((a3 % i == 0) && (b3 % i == 0)) {
			gcd = i;
		}
	}
	return gcd;
}
