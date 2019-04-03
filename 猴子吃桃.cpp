#include<stdio.h>
int main()
{
 int i,x;
 int y=1;
 for(i=10;i>1;i--)
 {
  x=(y+1)*2;
  y=x;
  printf("%d\n",x);
 }
    return 0;
 } 
