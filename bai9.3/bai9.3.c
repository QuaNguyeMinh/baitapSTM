#include <stdio.h>

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int *num1, *num2;
	num1 = &a;
	num2 = &b;
	if(*num1 > *num2){
		printf("%d", *num1);
	}
	else{
		printf("%d", *num2);
	}
	return 0;
}
