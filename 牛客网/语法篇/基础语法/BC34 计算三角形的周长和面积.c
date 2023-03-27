#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	double circumference, area, s;
	circumference = a + b + c;
	s = circumference / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));	//海伦公式
	printf("circumference=%.2lf area=%.2lf", circumference, area);
	return 0;
}
