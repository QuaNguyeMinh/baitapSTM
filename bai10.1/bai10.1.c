#include <stdio.h>

struct staff{
	char name[50];
	int id;
	float pay;
};
int main(){
	struct staff nv;
	gets(nv.name);
	scanf("%d", &nv.id);
	scanf("%f", &nv.pay);

	printf("%s\n", nv.name);
	printf("%d\n", nv.id);
	printf("%.2f", nv.pay);
}
