#include<stdio.h>

int max(int a, int b){
	
	return a > b ? a : b;

}

int main(){
	int y, x, n, i, j, k;
	
	int w, v, t, h;
	
	int good[302][4] = {0};
	int dp[101][101];
	
	scanf("%d %d %d",&n,&x,&y);
	
	for(i = 0; i < n; i++){
	
		scanf("%d %d %d %d",&good[i][0], &good[i][1], &good[i][2], &good[i][3]); 
	
	}
	
	for(k = 0; k < n; k++){
	
		for(i = x; i >= 0; i--){
	
			for(j = y; j >= 0; j--){
	
				w = good[k][0], v = good[k][1], t = good[k][2], h = good[k][3];
	
				if(w <= i && v <= j && h){
					dp[i][j] = max(dp[i][j], dp[i - w][j - v] + t);
				}
	
				if(w*h <= i && v*h <= j && h){
					dp[i][j] = max(dp[i][j], dp[i - w*h][j - v*h] + t*h);
				}
	
			}
	
		}
	
	}
	printf("%d",dp[x][y]);
	return 0;
}

