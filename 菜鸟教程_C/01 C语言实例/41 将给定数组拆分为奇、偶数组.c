#include<stdio.h>
int main() {
	int a[100];
	int n;
	printf("请输入数据个数：");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("%d.输入数%d为：", i+1, i+1);
		scanf("%d", &a[i]);
	}
	//将数组拆分为奇偶数组
	int odd[100], even[100];
	int j = 0, k = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			odd[j++] = a[i];
		} else {
			even[k++] = a[i];
		}
	}
	//输出奇偶数组
	printf("奇数组为：");
	for(int i = 0; i < j; i++) {
		printf("%d ", odd[i]);
	}
	printf("\n");
	printf("偶数组为：");
	for(int i = 0; i < k; i++) {
		printf("%d ", even[i]);
	}
	printf("\n");

	return 0;
}
