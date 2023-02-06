#include<stdio.h>
#include<string.h>

void reverseSentence_1(char *);

int main() {
	
	printf("请输入一个字符串：\n");
	char str[20];	
	reverseSentence_1(str);
	return 0;
}

void reverseSentence_1(char str[]) {
	gets(str);
	int len = strlen(str);
	while(len) {
		printf("%c", str[--len]);
	}
	printf("\n");
}

