#include<stdio.h>

void findFactor(int n) {
	for(int i = 1; i <= n; i++){
		if(n % i == 0) {
			printf("%d\n", i);
		}
	}
}


int main() {
	int n;
	scanf("%d", &n);
	findFactor(n);
	return 0;
}
