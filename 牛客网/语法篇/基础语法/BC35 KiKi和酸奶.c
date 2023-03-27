#include<stdio.h>
int main() {
	int n, h, m;
	scanf("%d %d %d", &n, &h, &m);

	int res, temp;
	if (m % h == 0) {
		temp = m / h;
	} else {
		temp = m / h + 1;
	}
	res = n - temp;
	printf("%d\n", res);
	return 0;
}
