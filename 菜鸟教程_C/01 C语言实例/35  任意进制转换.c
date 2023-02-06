/*
  srcNum:	原进制下的数
  srcBase:	原进制下的基
  tarNum:	目标进制下的数
  tarBase:	目标进制下的基
 */
#include<stdio.h>
#include<math.h>

long long convert(long long srcNum, int srcBase, int tarBase);

int main() {
	long long srcNum;
	int srcBase, tarBase;

	printf("请输入 原进制 及 需要转换的数 与 目标进制，用空格隔开：\n");
	scanf("%d %lld %d", &srcBase, &srcNum, &tarBase);

	printf("%d进制下的数%lld转换为%d进制后为%lld\n", srcBase, srcNum, tarBase, convert(srcNum, srcBase, tarBase));

	return 0;
}

long long convert(long long srcNum, int srcBase, int tarBase) {
	long long tarNum = 0;
	int i = 0;

	while (srcNum) {
		tarNum += (srcNum % tarBase) * pow(srcBase, i++);
		srcNum /= tarBase;
	}

	return tarNum;
}

