#include<stdio.h>

int main(){
	float n, m;
	scanf("%f%f", &n, &m);
	if(n != (int)n ){
		printf("%.1f khong la so nguyen \n", n);
	}
	else
		printf("%.1f la so nguyen \n", n);
	if(m != (int)m){
		printf("%.1f khong la so nguyen \n", m);
	}
	else
		printf("%.1f la so nguyen", m);
	if(n == m){
		printf("bang nhau");
	}
	else if(n < m){
		printf("so thu 1 nho hon so thu 2");
	}
	else printf("so thu 1 lon hon so thu 2");
}
