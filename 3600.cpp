#include<stdio.h>

int main(){
	int n, m;
	scanf("%d %d",&n, &m);
	if(n % m == 0){
		printf("0");
	}
	else{
		if(n > m){
			n = n % m;
		}
		if(m % n == 0 ){
			printf("%d", m - n);
		}
		else{
			printf("%d",m - 1);
		}
	}
	return 0;
}
