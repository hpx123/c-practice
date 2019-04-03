#include<stdio.h>

int a[1005];

int f(int n){
    if(n==1){
        return 1;
    }
    else{
        f(n-1);
        printf("%d%d%d",n-1,n,n-1);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    f(n);
}
