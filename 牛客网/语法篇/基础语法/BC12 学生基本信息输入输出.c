#include<stdio.h>
int main() {
	int id;
	float sc1, sc2, sc3;
	scanf("%d;%f,%f,%f", &id, &sc1, &sc2, &sc3);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, sc1, sc2, sc3);
	return 0;
}
