#include<stdio.h>
int main(){
    char a[2005];
    int i,n,mid,t=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<5;i++){
        scanf("%c",&a[i]);
    }
    mid=(n-1)/2;
    printf("%c",a[mid]);
    if(n%2!=0){
        while((mid-t)>0){
            t+=1;
            printf("%c",a[mid-t]);
            printf("%c",a[mid+t]);
        }
    }
    else£»{
        while((mid-t)>0){
            t+=1;
            printf("%c",a[mid+t]);
            printf("%c",a[mid-t]);
        }
        printf("%c",a[n-1]);
    }
    return 0;
}
