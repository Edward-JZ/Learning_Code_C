//输出乘法表
#include<stdio.h>

int main() {
	int num, sum;
	printf("请输入需要的乘法口诀表数：\n");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			sum = i * j;
			printf("%d x %d = %d\t", j, i, sum);
		}
		printf("\n");
	}
	return 0;
}
