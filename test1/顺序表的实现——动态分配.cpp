#include<stdio.h>
#include<stdlib.h>

#define InitSize 10

typedef struct{
	int* data;		//指示动态分配数组的指针
	int MaxSize;		//顺序表的最大容量
	int length;		//顺序表的当前长度
}SeqList;

void InitList(SeqList& L) {
	L.data = (int*)malloc(sizeof(int) * InitSize);	//用malloc函数申请一片连续的存储空间
	L.length = 0;
	L.MaxSize = InitSize;
}

void IncreaseSize(SeqList& L, int len) {
	int* p = L.data;
	L.data = (int*)malloc(sizeof(int) * (L.MaxSize + len));
	for (int i = 0; i < L.length; i++) {
		L.data[i] = p[i];
	}
	L.MaxSize = L.MaxSize + len;
	free(p);
}


int main() {
	SeqList L;
	InitList(L);
	IncreaseSize(L, 5);
	return 0;
}