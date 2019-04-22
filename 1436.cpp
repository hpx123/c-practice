#include<stdio.h>

int is_prime(int n){
	int i;
	if(n == 1 || n == 0){
		return 0;
	}
	for(i = 2; i < n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int m, n, i, count = 0;
	scanf("%d %d",&m, &n);
	for(i = 0; i <= m; i++){
		if(is_prime(i) && is_prime(i + n) && i + n <= m){
			printf("%d %d\n",i, i + n);
			count++;
			i += n - 1;
		}
	}
	printf("Total Is:%d",count);
	return 0;
}
