#include<stdio.h>
#include<math.h>
int main() {
	double num, n, res;
	scanf("%lf %lf", &num, &n);
	res = pow(num, n);
	printf("%f\n", res);
	return 0;
}
