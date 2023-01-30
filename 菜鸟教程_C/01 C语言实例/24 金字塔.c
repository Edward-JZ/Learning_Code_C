#include<stdio.h>
int main() {
	int row;
	scanf("%d", &row);
	for (int i = 1; i <= row; i++) {			//控制行
		for (int j = 1; j <= row - i; j++) {	//控制空格列
			printf(" ");
		}
		for (int j = 1; j <= 2 * i - 1; j++) {	//控制字符列
			printf("*");
		}
		printf("\n");							//换行
	}
	return 0;
}
