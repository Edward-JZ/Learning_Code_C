#include <stdio.h>

int main () {
    
	printf("int�洢�ֽڳ��ȣ�%llu\n", sizeof(int));
	printf("short�洢�ֽڳ��ȣ�%llu\n", sizeof(short));
	printf("long long�洢�ֽڳ��ȣ�%llu\n", sizeof(long long));
	
	printf("char�洢�ֽڳ��ȣ�%llu\n", sizeof(char));//�ַ��ͱ��� 
	
	printf("float�洢�ֽڳ��ȣ�%llu\n", sizeof(float));
	printf("double�洢�ֽڳ��ȣ�%llu\n", sizeof(double));
	printf("long double�洢�ֽڳ��ȣ�%llu\n", sizeof(long double));
	
	return 0;
}
