#include<stdio.h>
int main()
{
  int a[]={3,1,2,5,4};
  int i,j,t;
  for(j=5;j>0;i--)
  {
   for(i=0;i<6;i++)
   if(a[j]<3&&a[i]>3)
   {
    t=a[j];
   	a[j]=a[i];
    a[i]=t;
   	}
  if(i==j)
  {
  	t=a[j];
  	a[j]=a[0];
  	a[0]=t; 
  }
  
	 }
  for(i=0;i<6;i++)printf("%d",a[i]);  
	 return 0;
}
