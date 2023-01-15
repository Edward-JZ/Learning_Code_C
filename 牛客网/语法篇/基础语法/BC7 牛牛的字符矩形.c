#include <stdio.h>
int main() {
	char a = 0;
	scanf("%c", &a);
	int i = 0;
	for (i = 0; i < 3; i++) { //这里负责实现换行以及提供行数。
		int b = 0;
		for (b = 0; b < 3; b++) { //负责实现同一行里有几个字符数。
			printf("%c", a);
		}
		printf("\n");//换行要放在打印三个字符完之后
	}
	return 0;
}

