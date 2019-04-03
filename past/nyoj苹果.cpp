#include<stdio.h>

int dp[1005][1005]={0};
int c[1005]={0, };
int w[1005]={0, };

int max(int a,int b){
	return a>b?a:b;
}

int main(){
	int i,n,v,j;
	scanf("%d %d",&n,&v);
	for(i=1;i<=n;i++){
		scanf("%d %d",&w[i],&c[i]);
	}
	for(i=1;i<=n;i++){
		for(j=0;j<=v;j++){
			if(w[i]>j){
				dp[i][j]=dp[i-1][j];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+c[i]);
			}
		}
	}
	printf("%d",dp[n][v]);
	return 0;
} 
