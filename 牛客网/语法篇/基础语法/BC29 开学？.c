#include<stdio.h>
int main() {
	//原计划x（1-7）；延期n（1-1000）
	//7+7=14 14%7 = 0；1+6=7 7%7 = 0；
	//一周的星期数相当于7进制，用0-6表示周一-周日，所给X为原计划星期数（需减一），N为延期天数
	//目标星期计算后，为符合题设表达，再加1
	int x, n;
	scanf("%d %d", &x, &n);
	int targetDate = (x - 1 + n) % 7 + 1; //x + 0-6, 结果：1-7
	printf("%d", targetDate);
	return 0;
}

