#include<stdio.h>
#include<math.h>

int a[1005];

int is_prime(int n){
    int i;
    if(n==0||n==1){
        return 0;
    }
    else{
        for(i=2;i<sqrt(n);i++){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}

int dfs(int)

int main(){
    int n,k,i;
    int cont=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++){
        if(a[i]+=a[i])
    }
}
