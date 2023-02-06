#include <stdio.h>
#include <math.h>

int convertDecimalToOctal(int decimalNumber);
int main() {
	int decimalNumber;

	printf("输入一个十进制数: ");
	scanf("%d", &decimalNumber);

	printf("十进制数 %d 转换为八进制为 %d", decimalNumber, convertDecimalToOctal(decimalNumber));

	return 0;
}
//除基取余法
int convertDecimalToOctal(int decimalNumber) {
	int octalNumber = 0, i = 1, step = 1;

	while (decimalNumber != 0) {
		octalNumber += (decimalNumber % 8) * i;
		printf("step %d: %d/8，余数 = %d，商 = %d\n", step++, decimalNumber, decimalNumber % 8, decimalNumber / 10);
		decimalNumber /= 8;
		i *= 10;
	}

	return octalNumber;
}
