#include<stdio.h>
#include<string.h>

//定义一个含所有大小写元音的字符串，通过判断该字符串是否含输入字母来判断元辅音

int main() {
	char *str = "AEIOUaeiou";
	printf("请输入一个字母：\n");
	char ch;
	ch = getchar();
//	int i = (int)strchr(str, ch);  	//在str所指字符串中，找出第一次出现字符c的位置，并返回找到的字符的地址，找不到返回NULL
//	int j = (int)strrchr(str, ch);	//在参数str所指向的字符串中搜索最后一次出现字符c的位置,返回 str 中最后一次出现字符 ch 的位置。如果未找到该值，则函数返回一个空指针。
//	char *str1 = strchr(str, ch); 	//地址在int型中发生强制转换
//	printf("%d, %d, %s", i, j, str1);

	printf("%c是%s\n", ch, strchr(str, ch) ? "元音" : "辅音");

	return 0;

}


