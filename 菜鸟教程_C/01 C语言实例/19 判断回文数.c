//回文数：各位数字反向排列值不变，如：1234321
#include<stdio.h>

int reverse(int oi){
	int ri = 0;
	int temp;
	while (oi){
		temp = oi % 10;			//12321 % 10 = 1，取个位数
		oi /= 10; 				//12321 / 10 = 1232，去个位数
		ri = ri*10 + temp;		//0*10 + 1 = 1，1*10 + 2 = 12...
	}
	return ri;
}

int main() {
	int OriginalInteger, ReverseInteger;
	scanf("%d", &OriginalInteger);
	ReverseInteger = reverse(OriginalInteger);
	if( OriginalInteger == ReverseInteger) {
		printf("%d是回文数\n", OriginalInteger);
	} else{
		printf("%d不是回文数\n", OriginalInteger);		
	}
	return 0;
}
