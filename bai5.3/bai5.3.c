#include<stdio.h>

int main(){
	int nhietdo;
	scanf("%d", &nhietdo);
	if(nhietdo < 0){
		printf("thoi tiet lanh cong");
	}
	else if(nhietdo > 0 && nhietdo <=10){
		printf("thoi tiet rat lanh");
	}
	else if(nhietdo > 10 && nhietdo <=20){
		printf("thoi tiet lanh");
	}
	else if(nhietdo > 20 && nhietdo <=30){
		printf("thoi tiet tuyet voi");
	}
	else if(nhietdo > 30 && nhietdo <= 40){
		printf("thoi tiet nong");
	}
	else printf("thoi tiet rat nong");
}
