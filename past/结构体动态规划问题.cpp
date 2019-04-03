#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int a,b;
}num;

void swap(int *a ,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int cmp(const void *x,const void *y){
    num *xx=(num *)x;
    num *yy=(num *)y;
    return (xx->a)-(yy->a);
}

int main(){
    int n;
    int dp[1005]={0};
    num stus[1005];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&stus[i].a,&stus[i].b);
    }
    for(int i=0;i<n;i++){
        if(stus[i].a<stus[i].b){
            swap(&stus[i].a,&stus[i].b);
        }
        dp[i]=1;
    }
    qsort(stus,n,sizeof(stus[0]),cmp);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(stus[i].a>stus[j].a&&stus[i].b>stus[j].b&&dp[i]<dp[j]+1){
                dp[i]=dp[j]+1;
            }
        }
    }
    printf("%d",dp[n-1]);
    return 0;
}
