#include<stdio.h>

int add(int a,int b){
    if((a-b)>=0){
        return a-b;
    }
    else{
        return b-a;
    }
}

int main(){
    int a[1005];
    int dp[1005]={0};
    int n , m ,i,j;
    scanf("%d", &n);
    int t=10000,k;
    while(n--){
        scanf("%d", &m);
        for(i = 0;i < m; i++){
            scanf("%d", &a[i]);
        }
        for(i=0;i<m;i++){
            for(j=0;j<m;j++){

                dp[i]+=add(a[i],a[j]);
            }
        }
        if(dp[i]<t){
            t=dp[i];
            k=i;
        }
        printf("%d %d",k,t);
   }
   return 0;
}
