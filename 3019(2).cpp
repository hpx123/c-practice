#include<stdio.h>

long long a[75] = {0, 0, 1, 0};
long long sum = 0;

int main(){
	int n, i;
	scanf("%d",&n);
	for(i = 4; i <= n; i++){
		a[i] = a[i - 1] + a[i - 2] + a[i - 3] + 1;
	}
	printf("%lld",a[n]);
	return 0;
}
