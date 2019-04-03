#include<stdio.h>
 int main()
 {
  int i,j;
  int sum=0;
  for(i=1;i<10000;i++)
  {
  for(j=1;j<i;j++)
  if(i%j==0)
  { 
   sum+=j;
  }
  if(i==sum)
  { 
  printf("%d\n",i);
  
    }
  }  
   return 0;
 }
