#include<stdio.h>
#define tien 12.00
#define thue 0.15
#define thue2 0.2
#define thue3 0.25


int main(){
	unsigned int hour;
	double luongGross;
	double luongquagio;
	double luongsauthue;
	scanf("%u", &hour);
	if(hour < 40){
		luongGross = tien * hour;
	}
	else{
		luongGross = tien * hour;
		luongquagio = (hour - 40) * (tien * 1.5);
		luongGross += luongquagio;
	}
	if(luongGross <= 300){
		luongsauthue = luongGross * thue;
	}
	else if(luongGross > 300 && luongGross <=450){
		luongsauthue = 300 * thue;
		luongsauthue += (luongGross - 450) * thue2;
	}
	else
	{
		luongsauthue = 300 * thue;
		luongsauthue += 150 * thue2;
		luongsauthue += (luongGross - 450) * thue3;
	}
	double netpay;
	netpay = luongGross - luongsauthue;
	printf("%.1lf\n", luongGross);
	printf("%.1lf\n", luongsauthue);
	printf("%.1lf", netpay);
}
