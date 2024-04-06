#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int dich = n | (1<<4);
	printf("%d", dich);
	return 0;
}
