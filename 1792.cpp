#include<stdio.h>

int is_prime( long int n){
	long int i;
	if(n == 1 || n == 0) return 0;
	for(i = 2; i < n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int a[10000], ans = 0;

void factorial(long int n){
	long int i;
	for(i = 2; i < n; i++){
		if(i == n-1){
			a[ans++] = n;
			break;
		}
		while(n % i ==0 && is_prime(i) != 0){
			a[ans++] = i; 
			n = n / i;
		}
	}
}

int main(){
	long int n, i;
	scanf("%d",&n);
	factorial(n);
	printf("%d=",n);
	for(i = 0; i < ans-1; i++){
		printf("%d",a[i]);
		printf("*");
	}
	printf("%d",a[i]);
	return 0;
}
