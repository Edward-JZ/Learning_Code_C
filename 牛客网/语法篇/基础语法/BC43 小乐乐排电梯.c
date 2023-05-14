#include<stdio.h>
int main() {
	
	int n, time;
	scanf("%d", &n);
	
	int t = n / 12;
	
	time = 4 * t + 2;
	
	printf("%d\n", time);
	
	return 0;
}
