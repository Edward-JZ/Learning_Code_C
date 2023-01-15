//素数即质数（prime number）：自然数中，除了1和它本身不再有其他因数
#include<stdio.h>

int isPrime(int n){
	int flag = 0;
	
	for(int i = 2; i <= n/2; i++) {
		if(n % i == 0) {
			flag = 1;			//非素数，flag置为1
			break;
		}
	}
	return flag;
}
void checkPrime(int n1, int n2){
	while(n1 <= n2){
		int flag = 0;
		if(isPrime(n1)) {
			flag = 1;			//非素数，flag置为1
		}
		if(!flag) {
			printf("%d\n", n1);	//素数，输出
		}
		n1++;
	}
}

int main() {
	//判断num是否为素数
	int num;
	printf("请输入一个数字：\n");
	scanf("%d", &num);
	int flag = isPrime(num);
	if (flag){
		printf("%d不是素数\n", num);
	} else {
		printf("%d是素数\n", num);
	}
	//输出[n1, n2]内所有素数
	printf("请输入两个数字，以空格间隔：\n");
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	checkPrime(n1, n2);
	return 0;
}


