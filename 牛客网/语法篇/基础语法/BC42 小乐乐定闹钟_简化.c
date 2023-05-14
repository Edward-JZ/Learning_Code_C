#include<stdio.h>
int main() {
	
	int hour, minute, time;
	
	scanf("%d:%d %d", &hour, &minute, &time);
	
	hour = (hour + (time + minute) / 60) % 24;
	minute  = (minute + time) % 60;
	
	printf("%02d:%02d\n", hour, minute);
	
	
	return 0;
}
