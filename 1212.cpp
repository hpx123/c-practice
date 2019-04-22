#include<stdio.h>

int gongyue(int a, int b){
	int i;
	for(i = a; i > 0; i--){
		if(b % i == 0 && a % i == 0){
			return i;
		}
	}
}

int main(){
	int a, b;
	scanf("%d %d",&a, &b);
	if(a < b){
		printf("%d",gongyue(a,b));
	}
	else{
		printf("%d",gongyue(b, a));
	}
	return 0;
}
