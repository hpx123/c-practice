#include<stdio.h>

int dp[10005][1005]={0};
int v[1000]={0,};
int w[1000]={0,};

int max (int a,int b){
    return a>b?a:b;
}

int main(){
    int N,n,m,i,j;
    scanf("%d",&N);
    while(N--){
        scanf("%d %d",&n,&m);
        for(i=1;i<=m;i++){
            scanf("%d %d",&v[i],&w[i]);
        }
        for(i=1;i<=m;i++){
            for(j=0;j<=n;j++){
                if(v[i]>j){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]+v[i]*w[i]);
                }
            }
        }
        printf("%d\n",dp[m][n]);
    }
    return 0;
}

