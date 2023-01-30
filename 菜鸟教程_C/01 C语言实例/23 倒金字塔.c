//倒金字塔，可以与金字塔组合形成菱形
#include<stdio.h>
int main() {
	int rows, i, j, space;

	printf("行数: ");
	scanf("%d", &rows);

	for (i = rows; i >= 1; --i) {	//for循环中，带等号，循环n-i+1次
		for (space = 0; space < rows - i; ++space)
			printf("  ");

		for (j = 0; j < 2 * i - 1; ++j)	//for循环中，不带等号，循环n-i次
			printf("* ");

//		for (j = 0; j < i - 1; ++j)
//			printf("* ");

		printf("\n");
	}

	return 0;
}
