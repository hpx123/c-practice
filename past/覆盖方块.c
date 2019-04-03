#include<stdio.h>

int n,k=0;
//k是记录方案总数;
void js(int a);
//递归函数;
int main(){
    scanf("%d",&n);
    js(n);
    printf("%d",k);
    return 0;
}
void js(int a){
    int i;
    k++;
    if(a==1)
        return ;
    //a==1时返回主函数(结束);
    for(i=1;i<=a/2;i++)
        //下一个数不能超过前一个数的一半;
        js(i);//递归
}
