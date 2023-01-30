#include<stdio.h>
int main() {
	int row;
	scanf("%d", &row);
	int n = 1;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= i; j++, n++) {
			printf("%5d", n);
		}
		printf("\n");
	}
	return 0;
}
