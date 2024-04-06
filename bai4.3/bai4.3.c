#include<stdio.h>

int main(){
	int phut;
	scanf("%d", &phut);
	float ngay = 1.0 *phut / 60 / 24;
	float nam = ngay / 365;
	printf("%.1f %.1f", ngay, nam);
	return 0;
}
