#include<stdio.h>
#include<string.h>

void reverseSentence();

int main() {
	
	printf("请输入一个字符串：\n");
	reverseSentence();
	printf("\n");
	return 0;
}
void reverseSentence() {
	char c;
	scanf("%c", &c);
	/*
	  1、用户输入的字符，会以ASCII码形式存储在键盘缓冲区；
	  2、每调用一次scanf函数，就从键盘缓冲区读走一个字符，相当于清除缓冲区；
	  3、若用户一次输入n个字符，则前n次调用scanf函数都不需要用户再次输入，直到把缓冲区的数据全部读取(清除)干净；
	  4、调用scanf()函数时，用户最后输入的回车('\n')也会储存在键盘缓冲区；
	 */
	if(c != '\n') {
		reverseSentence();
		printf("%c", c);
	}
}
