#include<stdio.h>
int main() {
	
	int hour, minute, time;
	
	scanf("%d:%d %d", &hour, &minute, &time);
	
	int hour1, minute1;
	
	if(time > 24*60)
		time %= 24*60;
	
	hour1 = time / 60;
	minute1 = time % 60;
	
	hour = hour + hour1;
	minute = minute + minute1;
	
	if(minute >= 60) {
		minute %= 60;
		hour++;
	}
	if(hour > 24) {
		hour %= 24;
	}
	
	printf("%02d:%02d\n", hour, minute);
	
	
	return 0;
}
