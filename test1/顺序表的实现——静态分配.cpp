#include<stdio.h>
#define MaxSize 10 		//������󳤶� 
typedef struct {
	int data[MaxSize]; 	//�þ�̬�ġ����顱�������Ԫ�� 
	int length;			//˳���ĵ�ǰ���� 
}SqList;				//˳�������Ͷ��� 

void InitList(SqList &L){
	for(int i=0; i < MaxSize; i++){
		L.data[i]=0;	//����������Ԫ������ΪĬ�ϳ�ʼֵ
	}
	L.length = 0;		//˳����ʼ����Ϊ0
}

void PrintList(SqList L) {
	for (int i = 0; i < MaxSize; i++)
		printf("data[%d]=%d\n", i, L.data[i]);
}

int main() {
	SqList L;			//����һ��˳��� 
	InitList(L);		//��ʼ��˳��� 
	PrintList(L);
	return 0;
}