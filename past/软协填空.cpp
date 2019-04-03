#include<stdio.h>
int max(int *a,int *b){
 int *t;
 t=a;
 a=b;
 b=t;
}
int main(){
    int n,m,i,a[1000],b[1000],c[1000];
    scanf("%d",&n);
    do{
       for(i=0;i<3;i++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        }
        n--;
    }
    while(n--);{
        for(i=0;i<3;i++){
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        }

    }
}
