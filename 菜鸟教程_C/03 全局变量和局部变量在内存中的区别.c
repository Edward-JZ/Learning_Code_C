#include <stdio.h>
#include <stdlib.h>
int k1 = 1;
int k2;
static int k3 = 2;
static int k4;
int main( )
{  static int m1=2, m2;
	int i=1;
	char *p;
	char str[10] = "hello";
	char *q = "hello";
	p= (char *)malloc( 100 );
	free(p);
	printf("ջ��-������ַ  i��%p\n", &i);
	printf("                p��%p\n", &p);
	printf("              str��%p\n", str);
	printf("                q��%p\n", &q);
	printf("������ַ-��̬���룺%p\n", p);
	printf("ȫ���ⲿ�г�ֵ k1��%p\n", &k1);
	printf("    �ⲿ�޳�ֵ k2��%p\n", &k2);
	printf("��̬�ⲿ�г�ֵ k3��%p\n", &k3);
	printf("    �⾲�޳�ֵ k4��%p\n", &k4);
	printf("  �ھ�̬�г�ֵ m1��%p\n", &m1);
	printf("  �ھ�̬�޳�ֵ m2��%p\n", &m2);
	printf("���ֳ�����ַ    ��%p, %s\n",q, q);
	printf("��������ַ      ��%p\n",&main);
	return 0;
}
