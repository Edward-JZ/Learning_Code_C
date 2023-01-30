#include<stdio.h>
int main() {
	int row, coef = 1;
	scanf("%d", &row);
	
	for (int i = 0; i < row; i++) {			//控制行数，循环row-i遍
		for (int j = 1; j <= row - i; j++) {	//控制空格列，循环row-i遍
			printf("  ");
		}
		for (int j = 0; j <= i; j++) {		//控制数字列，循环i-0+1遍
			if ( j == 0 || i == 0) {		//若是第一行或者第一列，则系数为1
				coef = 1;					
			} else {						//其他行列，则系数为1
				coef = coef * ( i - j + 1) / j;
			}
			printf("%4d", coef);
		}
		printf("\n");
	}
	return 0;
}

