#include<stdio.h>

int is_prime( int n){
	int i;
	if(n == 1 || n == 0) return 0;
	for(i = 2; i < n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

void factorial(int n){
	int i;
	while(1){
		if(n == 1){
		    break;
		}
		for(i = 2; i < n; i++){
			if(is_prime(i) != 0 && n % i == 0){
				if(n / i == 1){
					printf("%d",i);
					break;
				}
				printf("%d",i);
				printf("*");
				n = n / i;
				break;
			}
		}	
	}
}

int main(){
	int n;
	scanf("%d",&n);
	factorial(n);
	return 0;
}
