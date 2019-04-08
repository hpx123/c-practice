#include<stdio.h>

int is_leapyear(int n){
	if(n % 4 == 0 && n%100 != 0 || n%400 == 0){
		return 1;
	}
	return 0;
}

int month(int n){
	if(n==1||n==3||n==5||n==7||n==8||n==11 ){
		return 31;
	}
	else if(n==2){
		return 28;
	}
	else{
		return 30;
	}
}

int main(){
	int n, y, i;
	scanf("%d %d",&n,&y);
	if(is_leapyear(n) == 1 && y == 2){
		printf("%d",month(y)+1);
	}
	else{
		printf("%d",month(y));
	}
	return 0;
}
