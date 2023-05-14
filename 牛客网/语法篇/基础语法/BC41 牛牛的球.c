#include<stdio.h>
#include<math.h>
#define PI 3.14
int main() {
	
	int r;
	double v;
	scanf("%d", &r);
	
	v = 4.0 / 3.0 * PI * pow(r, 3); //4/3此处需表示为小数，不然无法得到浮点数
	
	printf("%.2lf\n", v);
	
	return 0;
}
