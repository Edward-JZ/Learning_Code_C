#include<stdio.h>
int main() {
	int age;
	scanf("%d", &age);
	int time;
	//一年有3.156×10的7次方秒 = 3156×10^4秒
	time = age * 3156;
	printf("%d0000", time);	//计算的结果再补最后的四个0
	
	return 0;
}
