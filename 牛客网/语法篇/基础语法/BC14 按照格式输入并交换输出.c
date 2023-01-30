//1. 加减法
//缺点：这种方法遇到数据比较大的时候可能发生溢出且不易理解
//#include <stdio.h>
//int main() {
//	int a = 3;
//	int b = 5;
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("%d,%d\n", a, b);
//}
//2. 异或法
//理解 a^a 结果是 0，a^0结果是a，这种方法也是可以对负数交换的，当然，其他两种也可以。理解 a^a 结果是 0，a^0结果是a，这种方法也是可以对负数交换的，当然，其他两种也可以。
//#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d,%d\n",a,b);
//}

//3. 交换变量法
//利用中间变量完成交换，为了程序的可读性，可维护性，在实际应用中使用交换变量法。
#include <stdio.h>
int main() {
	int a = 3;
	int b = 5;
	int temp = 0;

	temp = a;
	a = b;
	b = temp;

	printf("%d,%d\n", a, b);
}
