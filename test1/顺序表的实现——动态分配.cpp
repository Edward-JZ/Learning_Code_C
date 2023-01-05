#include<stdio.h>
#include<stdlib.h>

#define InitSize 10

typedef struct{
	int* data;		//ָʾ��̬���������ָ��
	int MaxSize;		//˳�����������
	int length;		//˳���ĵ�ǰ����
}SeqList;

void InitList(SeqList& L) {
	L.data = (int*)malloc(sizeof(int) * InitSize);	//��malloc��������һƬ�����Ĵ洢�ռ�
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