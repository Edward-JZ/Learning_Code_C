//阿姆斯壮数（Armstrong）：n位数的各位数的n次方之和等于该数 1634 = 1^4+6^4+3^4+4^4
#include<stdio.h>
#include<math.h>
int isArmstrong(int n) {
	int len = 0;
	int temp1 = n;
	while (temp1) {		//此循环求出n的位数
		temp1 /= 10;
		len++;
	}
	int temp2 = n;
	int m = 0;
	while (temp2) {		//求出n位数的各位数的n次方之和
		m = m + pow(temp2 % 10, len);
		temp2 /= 10;
	}
	if (n == m) {
		return 1;		//n是阿姆斯壮数
	} else {
		return 0;
	}
}
void checkArmstrong(int n1, int n2) {
	while (n1 <= n2) {
		if (isArmstrong(n1)) {
			printf("%d\n", n1);
		}
		n1++;
	}
}
int main() {
	//判断n是否为阿姆斯壮数
	int n;
	printf("请输入一个数字：\n");
	scanf("%d", &n);
	if (isArmstrong(n)) {
		printf("%d是阿姆斯壮数\n", n);
	} else {
		printf("%d不是阿姆斯壮数\n", n);
	}
	//输出[n1, n2]内的所有阿姆斯壮数
	int n1, n2;
	printf("请输入两个数字，以空格分隔：\n");
	scanf("%d %d", &n1, &n2);
	checkArmstrong(n1, n2);

	return 0;
}
