#include<stdio.h>
int main() {
	int arr[100];
	int n, max;
	printf("请输入元素个数:");
	scanf("%d", &n);	
	//输入数据
	for(int i = 0; i < n; i++) {
		printf("输入数字%d：", i+1);
		scanf("%d", &arr[i]);
	}
	//比较数据（核心）
	max = arr[0];
	for(int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	
	printf("输入元素中最大元素是%d", max);
	
	return 0;
}
