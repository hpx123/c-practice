#include<stdio.h>

int n,k=0;
//k�Ǽ�¼��������;
void js(int a);
//�ݹ麯��;
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
    //a==1ʱ����������(����);
    for(i=1;i<=a/2;i++)
        //��һ�������ܳ���ǰһ������һ��;
        js(i);//�ݹ�
}
