#include<stdio.h>
void convertDecimalToHexadecimal(int decimalNumber);		//直接输出%#x即可
int convertHexadecimalToDecimal(int hexadecimalNumber);
//int convertDecimalToOctal(int decimalNumber);			//直接输出%#o即可
int convertOctalToDecimal(int octalNumber);
int convertDecimalToBinary(int decimalNumber);
int convertBinaryToDecimal(int binaryNumber);

int main() {
	int n;
	scanf("%d", &n);

	printf("%X\n", n);
	convertDecimalToHexadecimal(n);
	printf("\n%o\n", n);
//	printf("%d", convertOctalToDecimal(n));
//	printf("%d", convertDecimalToBinary(n));
//	printf("%d", convertBinaryToDecimal(n));

	return 0;
}

void convertDecimalToHexadecimal(int decimalNumber) {	//除基取余法(仅适用于正整数)
	char a[40] = "0123456789ABCDEF";
	char b[100] = {0};
	int cnt = 0;
	int n = decimalNumber;
	while (n) {
		b[cnt++] = a[n % 16];
		n /= 16;
	}
	for (int i = cnt - 1; i >= 0; i--) {
		printf("%c", b[i]);
	}
}

int convertHexadecimalToDecimal(int hexadecimalNumber);

int convertOctalToDecimal(int octalNumber);

int convertDecimalToBinary(int decimalNumber);

int convertBinaryToDecimal(int binaryNumber);
