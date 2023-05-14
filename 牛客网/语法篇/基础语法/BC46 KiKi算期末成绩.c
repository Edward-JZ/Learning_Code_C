#include<stdio.h>
int main() {
	int sc1, sc2, sc3, sc4;
	scanf("%d %d %d %d", &sc1, &sc2, &sc3, &sc4);
	
	double tsc = sc1 * 0.2 + sc2 * 0.1 + sc3 * 0.2 + sc4 * 0.5;
	
	printf("%.1lf\n", tsc);
		
	return 0;
}
