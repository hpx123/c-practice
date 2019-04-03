#include<stdio.h>
int main() 
{ int i,j;
  for(i=3;i<=200;i++)
  {
  for(j=1;j<i;j++) 
  {
  
   
   if(i%j==0&&i==j+i/j){
      printf("%d",i);
          }
       } 
	}  
  return 0;
}
