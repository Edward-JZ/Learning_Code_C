#include<stdio.h>
int main() {
	int need;
	need = 10 * 1000;
	int h, r;
	double v;
	
	scanf("%d %d", &h, &r);
	
	v = 3.14 * r * r * h;
	
	int res;
	
	res  =(int) need / v;
	
	if((need / v) > res) {
		res++;
	}
	
	printf("%d\n", res);
	
	return 0;
}
