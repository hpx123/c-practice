#include<stdio.h>

int main(){
	int i, j, n, t;
	int a[100][100];
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sum = 0;
	t = n;
	for(i = 1; i <= n; i++){
		sum += a[i][i] + a[t][i];
		--t;
	}
	if(n % 2){
		sum -= a[n/2 + 1][n/2 + 1];
	}
	printf("%d",sum);
	return 0;
} 
