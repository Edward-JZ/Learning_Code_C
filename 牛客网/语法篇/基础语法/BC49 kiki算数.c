//%10即模10取得个位数，%100即模100取得百位数，即得到不大于100的数
#include<stdio.h>
#include<math.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = a + b;
	int res = 0, digit[1];
	for (int i = 0; i < 2; i++) {
		digit[i] = sum % 10;
		sum /= 10;
		res += digit[i] * pow(10, i);
	}
	printf("%d\n", res);

	return 0;
}
