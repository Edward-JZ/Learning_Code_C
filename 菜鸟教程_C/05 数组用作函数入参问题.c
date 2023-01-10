#include <stdio.h>

void getSize(int a[]) {
	int i = 0;
	i = sizeof(a);//这里的i在linux中是4，在Windows中也是4，是int *的大小，不管你传入的a有几个元素
	printf("%d\n", i);
	int b = 0;
	b = sizeof(a) / sizeof(a[0]); //逻辑没错，a的大小除以元素的大小得到长度，可是sizeof(a)并不是数组占的空间，而是指针,也就是i
	printf("%d\n", b);
}
int main() {
	int a[] = {1, 2, 3, 4, 5};
	printf("sizeof(a) = %llu, sizeof(a[0]) = %llu\n", sizeof(a), sizeof(a[0]));
	getSize(a);
}
