#include<stdio.h>
#include<string.h>

int main(){
	int a[100];
	char *ptr;

	gets(a);
	ptr = a;
	for(int i = strlen(a) - 1; i >= 0; i--){
		printf("%c", *(ptr + i));
	}
	return 0;
}
