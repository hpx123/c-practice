#include<stdio.h>

unsigned long long dp[75] = {0};

int main(){
	int n, i, j;
	scanf("%d",&n);
	dp[0] = 1;
	dp[1] = 1; 
	for(i = 2; i <= n; i++){
		for(j = n - 1; j >= 0; j--){
			dp[i] += dp[j];
		}
	}
	printf("%llu",dp[n]);	

	return 0;
}
