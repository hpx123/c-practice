#include<stdio.h>

int a[1005];
int dp[1005]={0};

int main(){
    int n,i,j,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    dp[0]=a[0];
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[j]<a[i]&&dp[i]<dp[j]+a[i]){
                dp[i]=dp[j]+a[i];

            }
        }
    }
    printf("%d",dp[n-1]);
    return 0;
}
