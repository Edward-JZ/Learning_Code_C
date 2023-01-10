#include <stdio.h>

int main() {
	char c, str[100];
	enter(str);
	scanf("%c", &c);
	delete_string(str, c);
	print(str);
	return 0;
}
