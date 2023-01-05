#include<stdio.h>
#define MaxSize 10 		//定义最大长度 
typedef struct {
	int data[MaxSize]; 	//用静态的“数组”存放数据元素 
	int length;			//顺序表的当前长度 
}SqList;				//顺序表的类型定义 

void InitList(SqList &L){
	for(int i=0; i < MaxSize; i++){
		L.data[i]=0;	//将所有数据元素设置为默认初始值
	}
	L.length = 0;		//顺序表初始长度为0
}

void PrintList(SqList L) {
	for (int i = 0; i < MaxSize; i++)
		printf("data[%d]=%d\n", i, L.data[i]);
}

int main() {
	SqList L;			//声明一个顺序表 
	InitList(L);		//初始化顺序表 
	PrintList(L);
	return 0;
}