#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	double score[n];
	//录入n科成绩，空格分隔
	for (int i = 0; i < n; i++) {
		scanf("%lf", &score[i]);
	}
	//计算最高分、最低分、平均分
	double maxScore, minScore, aveScore;
	maxScore = score[0];
	for (int i = 1; i < n; i++) {
		if (score[i] > maxScore){
			maxScore = score[i];
		}
	}
	
	minScore = score[0];
	for (int i = 1; i < n; i++) {
		if (score[i] < minScore){
			minScore = score[i];
		}
	}
	
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		sum += score[i];
	}
	aveScore = sum / n;
	//输出最高分、最低分、平均分，保留两位，空格分隔
	printf("%.2lf %.2lf %.2lf\n", maxScore, minScore, aveScore);	
	
	return 0;
}
