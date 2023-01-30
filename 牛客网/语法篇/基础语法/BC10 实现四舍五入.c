#include <stdio.h>

void sswr(double a) {
	if (a >= 0) {
		int b = a + 0.5;
		printf("%d\n", b);
	}else {
		int b = a - 0.5;
		printf("%d\n", b);
	}
}

int main() {
	double n;
	scanf("%lf", &n);
	printf("%.0lf\n", n);
	sswr(n);
	return 0;
}


