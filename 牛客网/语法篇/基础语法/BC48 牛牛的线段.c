#include<stdio.h>
#include<math.h>

int main() {
	int x1, y1, x2, y2;
	double length_square;
	scanf("%d %d\n%d %d", &x1, &y1, &x2, &y2);

	length_square = pow(x1 - x2, 2) + pow(y1 - y2, 2);
	
	printf("%.0lf\n", length_square);

	return 0;
}
