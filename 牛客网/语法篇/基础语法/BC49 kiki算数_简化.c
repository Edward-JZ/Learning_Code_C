//%10即模10取得个位数，%100即模100取得百位数，即得到不大于100的数
#include<stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = a + b;
	int res = sum % 100;
	printf("%d\n", res);

	return 0;
}
