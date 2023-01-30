#include<stdio.h>
int main () {
	int a = 1234;
	printf("%#o %#X\n", a, a);	//格式控制串“%o”、“%X”分别输出八进制整数和十六进制整数，并使用修饰符“#”控制前导显示
}
