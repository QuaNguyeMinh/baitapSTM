#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int *sum1, *sum2;

	sum1 = &a;
	sum2 = &b;

	int sum = 0;
	sum = *sum1 + *sum2;
	printf("%d", sum);
	return 0;
}
