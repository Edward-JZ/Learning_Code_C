#include<stdio.h>

void printArray(int *, int);
void printReverseArray(int *, int);

int main() {
	int array[10];
	int status = 1;
	int len = 0;
	while (status) {
		printf("请输入数字（q结束）：\n");
		printf("%d.第%d个数字：", len + 1, len + 1);
		status = scanf("%d", &array[len++]);
	}
	printArray(array, len - 1);
	printReverseArray(array, len - 1);
	return 0;
}

void printArray(int *a, int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}
void printReverseArray(int *a, int len) {
	for (int i = len - 1; i >= 0; i--) {
		printf("%d ", *(a + i));
	}
	printf("\n");
}

