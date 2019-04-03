#include<stdio.h>

int w[1005];
int dp[1005][1005];

int cmp(int a,int b){
    return a>b?a:b;
}

int main(){
    int n,v,i,j;
    scanf("%d",&v);
    scanf("%d",&n);
    dp[0][0]=0;
    for(i=1;i<=n;i++){
        sanf("%d",&w[i]);
    }
    for(i=1;i<=n;i++){
        for(j=0;j<=v;j++){
            if(w[i]>v){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=cmp(dp[i-1][j],dp[i-1][j-w[i]]+w[i]);
            }
        }
    }
    printf("%d",dp[n][v]);
    return 0;
}

