#include<stdio.h>

long long GCD(long long, long long);
long long LCM(long long, long long);
int main() {
	long long n, m, gcd, lcm;
	scanf("%lld %lld", &n, &m);
	gcd = GCD(n, m);
	lcm = LCM(n, m);
	printf("%lld\n", gcd + lcm);
	return 0;
}

long long GCD(long long a, long long b) {
	if (a % b == 0) {
		return b;	
	}
	return GCD(b, a%b);
}
long long LCM(long long a, long long b) {
	return a * b / GCD(a, b);
}
