#include<stdio.h>

int is_leapyear(int n){
	if( (n%4 == 0 && n%100 != 0) || n%400 == 0){
		return 1;
	}
	else{
		return 0;	
	}
}

int main(){
	int n;
	scanf("%d",&n);
	if(is_leapyear(n)){
		printf("366");
	}
	else{
		printf("365");
	}
	return 0;
}
