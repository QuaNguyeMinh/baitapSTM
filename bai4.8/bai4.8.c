#include<stdio.h>

int main(){
	unsigned int id, gio, luong;
	scanf("%u%u%u", &id, &gio, &luong);
	int tienluong = gio * luong;
	printf("%u %d", id, tienluong);
	return 0;
}
