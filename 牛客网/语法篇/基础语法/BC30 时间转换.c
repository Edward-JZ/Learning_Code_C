#include<stdio.h>
int main() {
	//second(0-100000000)
	int second, minute, hour;
	scanf("%d", &second);
	hour = second / 3600;		//1h = 3600s
	minute = second / 60 % 60;	//1min = 60s, 1h = 60min, 此处60%是为了去掉上式算过的小时
	second = second % 60;
	printf("%d %d %d", hour, minute, second);
	return 0;
}
