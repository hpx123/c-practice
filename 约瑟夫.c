#include<stdio.h>
int main(){
    int n,p,w,i,j,head,cont;
    int a[305];
    scanf("%d %d %d",&n,&p,&w);
    a[0]=1;
    for(i=1;i<n;i++){
        a[i]=a[i-1]+1;
    }
    cont=n;head=p-1;
    while(cont!=0){
        j=0;
        for(i=head%n;i<=n;i++){
            if(a[i]!=0)
                j++;
            if(j==w)
                break;
        }
        head=i;
        printf("%d",a[head]);
        printf(",");
        a[head]=0;
        head++;
        cont--;
    }
    return 0;
}
