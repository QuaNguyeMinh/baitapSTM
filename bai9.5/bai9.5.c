#include<stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int *sum1, *sum2;
	sum1 = &a;
	sum2 = &b;
	int temp =0;
	temp = *sum1;
	*sum1 = *sum2;
	*sum2 = temp;
	printf("%d %d", a, b);
}
