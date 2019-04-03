#include<stdio.h>

int main(){
    int dp[1005]={0},f[1005]={0};
    int i,n,k,m;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++){
        scanf("%d",&m);
        f[m]=1;
    }
    dp[0]=1;
    if(f[1]==1){
        dp[1]=0;
    }
    else{
        dp[1]=1;
    }
    if(f[2]==1){
        dp[2]=0;
    }
    else{
        dp[2]=2;
    }
    for(i=3;i<=n;i++){
        if(f[i]==1)
            continue;
        else
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    printf("%d",dp[n]);
    return 0;
}
