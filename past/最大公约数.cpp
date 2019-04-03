#include<stdio.h>
int main()
{
 int m,n;
 int t;
 scanf("%d %d",&m,&n);
 if(m%n==0&&m>n)
 {
 	printf("%d就是%d的最大公约数",m,n);
 }
 else
 {
  t=m%n;
  printf("%d就是%d和%d的最大公约数",t,m,n);
 }
   return 0;
 } 
