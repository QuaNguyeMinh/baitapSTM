#include<stdio.h>

int main(){
	float a, b, c, d;
	scanf("%f%f%f%f", &a, &b, &c, &d);
	float sum = 0;
	sum = (1.0 * a + b + c + d) / 4;
	printf("%f", sum);
	return 0;
}
