#include <stdio.h>

int main () {
    
	printf("int存储字节长度：%llu\n", sizeof(int));
	printf("short存储字节长度：%llu\n", sizeof(short));
	printf("long long存储字节长度：%llu\n", sizeof(long long));
	
	printf("char存储字节长度：%llu\n", sizeof(char));//字符型变量 
	
	printf("float存储字节长度：%llu\n", sizeof(float));
	printf("double存储字节长度：%llu\n", sizeof(double));
	printf("long double存储字节长度：%llu\n", sizeof(long double));
	
	return 0;
}
