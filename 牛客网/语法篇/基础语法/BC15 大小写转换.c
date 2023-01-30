#include <stdio.h>
int main() {
	//注意的就是我们应该注意如何进行多组输入 这个就是一个好的方法操作处理
	//scanf返回成功读入的数据项，文件结束EOF返回-1（EOF：crtl+z）
	char a;
	while (scanf("%c", &a) != EOF) {
		getchar();	//用于吃掉多余字符回车
		printf("%c\n", a + 32);
	}
	return 0;
}

