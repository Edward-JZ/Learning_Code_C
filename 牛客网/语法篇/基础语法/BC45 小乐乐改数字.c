// %10即取个位数出来，/10即去掉个位数
#include<stdio.h>
#include<math.h>

int main() {
	int n, m = 0, index;
	int digit[10];
	scanf("%d", &n);
	for (int i = 0; n > 0 ; i++){
		digit[i] = n % 10;
		n /= 10;
		if (digit[i] % 2 == 0){
			index = 0;
		} else {
			index = 1;
		}
		m += index * pow(10, i);
	}
	printf("%d\n", m);
	
	return 0;
}
