#include<stdio.h>
int a[100000];
int main(){
    int i,j,head,tail,start,n,m,p;
    scanf("%d %d %d",&n,&p,&m);
    a[0]=0;
    for(i=1;i<=n;i++){
        a[i]+=a[i-1]+1;
    }
    head=p;tail=n;start=1;
    while(head<tail){
        head+=m-1;
        printf("%d,",a[head]);
        head++;
        for(i=start;i<head;i++){
            a[++tail]=a[i];
        }
        start=head;
        if((tail-head)<m)
            break;
    }

    return 0;
}
