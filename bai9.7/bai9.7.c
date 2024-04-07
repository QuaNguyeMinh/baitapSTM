#include<stdio.h>
#include<string.h>

int main(){
	int a[100], b[100];
	char *ptr1, *ptr2;
	gets(a);
	gets(b);
	ptr1 = a;
	ptr2 = b;
	if(*ptr1 == *ptr2){
		printf("hai chuoi giong nhau");
	}
	else{
		printf("hai chuoi khong giong nhau");
	}
	return 0;
}
