#include<stdio.h>
int main() {
	double array[100], sum = 0, avg;
	int n;
	printf("输入元素个数：");
	scanf("%d", &n);
	
	while(n > 100 || n <= 0) {
		printf("Error！数字需要在1-100之间。\n");
		printf("再次输入元素个数：");
	}
	
	for(int i = 0; i < n; i++){
		printf("%d.输入数字：", i+1);
		scanf("%lf", &array[i]);
		sum += array[i];
	}
	
	avg = sum / n;
	
	printf("平均值 = %.2lf", avg);
	
	
	return 0;
}
