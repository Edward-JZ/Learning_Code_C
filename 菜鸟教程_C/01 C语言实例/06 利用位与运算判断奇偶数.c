#include <stdio.h>

int main() {
	int number;

	printf("请输入一个整数: ");
	scanf("%d", &number);

	// 判断这个数最后一位是1这为奇数
	if (number & 1)
		printf("%d 是奇数。", number);
	else
		printf("%d 是偶数。", number);

	return 0;
}
