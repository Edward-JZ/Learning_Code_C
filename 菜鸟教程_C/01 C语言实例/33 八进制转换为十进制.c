#include <stdio.h>
#include <math.h>

int convertOctalToDecimal(int octalNumber);

int main() {
	int octalNumber;

	printf("输入一个八进制数: ");
	scanf("%d", &octalNumber);

	printf("八进制数 %d  转换为十进制为 %d", octalNumber, convertOctalToDecimal(octalNumber));

	return 0;
}

int convertOctalToDecimal(int octalNumber) {
	int decimalNumber = 0, i = 0;

	while (octalNumber != 0) {
		decimalNumber += (octalNumber % 10) * pow(8, i);
		++i;
		octalNumber /= 10;
	}

	return decimalNumber;
}
