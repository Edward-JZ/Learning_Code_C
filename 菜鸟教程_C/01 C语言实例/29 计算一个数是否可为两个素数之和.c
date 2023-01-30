#include<stdio.h>
#include<math.h>
int checkPrime(int n);

int main() {
	int n, flag = 0;
	scanf("%d", &n);
	for (int i = 2; i <= n / 2; i++) {
		if (checkPrime(i)) {
			if (checkPrime(n - i)) {
				printf("%d + %d = %d\n", i, n - i, n);
				flag = 1;
			}
		}
	}

	if (flag == 0) {
		printf("%d不是两素数之和\n", n);
	}

	return 0;
}

int checkPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;

}
