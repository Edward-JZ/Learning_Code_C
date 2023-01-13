#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c; //ax^2+bx+c=0
	printf("请输入一元二次方程的三个系数（以空格分隔）：\n");
	scanf("%d %d %d", &a, &b, &c);
	int delta = b * b - 4 * a * c;
	double x1, x2;

	if (delta < 0) {
		printf("方程无实数解。\n");
	} else {
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		printf("x1 = %4.2f, x2 = %4.2f", x1, x2);
	}

	return 0;
}
