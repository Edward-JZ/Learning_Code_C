#include<stdio.h>

int factorial(int num) {
	if(num <= 1){
		return 1;
	}
	return factorial(num-1)*num;
}

int main() {
	int num = 0;
	scanf("%d", &num);
	
	printf("%d\n", factorial(num));
	
}


