//求最小公倍数（Least Common Multiple），可以通过最大公约数法或者遍历法来计算
//a x b = gcd(a, b) x lcm(a,b)
#include<stdio.h>

int LCM_1(int n1, int n2) {		//遍历法
	int multiple = n1 > n2 ? n1 : n2;
	while(1) {
		if(multiple % n1 == 0 && multiple % n2 == 0){
			break;
		}
		multiple++;
	}
	return multiple;
}
int GCD(int a, int b) {
	if(a % b == 0){
		return b;
	}
	return GCD(b, a%b);
}
int LCM_2(int n1, int n2) {		//最大公约数法计算
	int gcd = GCD(n1, n2);
	return n1 * n2 / gcd;		//最小公倍数 = 两数乘积 / 最大公约数
}
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d\n%d\n", LCM_1(num1, num2), LCM_2(num1, num2));
	return 0;
}
