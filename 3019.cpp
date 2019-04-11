#include<stdio.h>

long long a[105] = {0};
long long m;

long long strange(int n){
	if(a[n] != 0){
		return a[n];
	}
	if(n == 1){
		return 0;
	}
	else if(n == 2){
		return 1;
	}
	else if(n == 3){
		return 0;
	}
	else{
		m = strange(n - 1) + strange(n - 2) + strange(n - 3) + 1;
	}
	a[n] = m;
	return m;
}

int main(){
	int n;
	long long t;
	scanf("%d",&n);
	t = strange(n);
	printf("%lld",t);
	return 0;
} 
