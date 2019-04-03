#include<stdio.h>
int main(){
    int a[]={1,2,3,4};
    int b[]={4,5,6,7};
    int *p,*q;
    p=a;
    q=b;
    printf("%d %d",*p,*q);
    return 0;
}
