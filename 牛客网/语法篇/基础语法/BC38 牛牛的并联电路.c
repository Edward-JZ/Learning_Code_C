#include<stdio.h>
int main() {
	double r1, r2, r;
	scanf("%lf %lf", &r1, &r2);
	
	r = 1 / ((1 / r1) + (1 / r2));
	
	printf("%.1lf\n", r);
	
	return 0;
}
