#include<stdio.h>
int main()
{
 int m,n;
 int t;
 scanf("%d %d",&m,&n);
 if(m%n==0&&m>n)
 {
 	printf("%d����%d�����Լ��",m,n);
 }
 else
 {
  t=m%n;
  printf("%d����%d��%d�����Լ��",t,m,n);
 }
   return 0;
 } 
