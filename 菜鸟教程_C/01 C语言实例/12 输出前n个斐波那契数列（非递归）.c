// 输出斐波那契数列，从第三项开始，每项数字是前两项数字之和

#include<stdio.h>

int main() {
	int n, num1 = 0, num2 = 1, temp;
	
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%d\n", num1);	//num1用来按顺序输出 0 1 1 2 3 5 8
		temp = num2;			//temp用来暂存num2的值
		num2 = num1 + num2;		//num2的值按顺序遵循前两项和的规律，按顺序位移
		num1 = temp;			
	}
	
	return 0;
}
