#include<stdio.h>

int is_odd_even(int n){
	if(n % 2 == 0){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	int n, count = 0;
	scanf("%d",&n);
	while(1){
		while(is_odd_even(n)){
			n = n * 3 + 1;
			count++;
		}
		while(n != 1 && is_odd_even(n) == 0){
			n = n/2;
			count++;
		}
		if(n == 1){
			break;
		}
	}
	printf("%d",count);
	return 0;
} 
