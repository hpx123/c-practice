#include<stdio.h>
int main()
{
  int a[]={};
  int i,k;
  printf("ÇëÊäÈë¾Å¸öÊı£º");
  for(i=0;i<10;i++)
  {   
   	  scanf("%d",&a[i]);
  }
  int change=1;
  int j,t;
  for(i=0;i<10;i++)
  {  change=0;
  	 for(j=0;j<10-i-1;j++)
  	 if(a[j]>a[j+1])
  	 {  t=a[j];
  	    a[j]=a[j+1];
  	    a[j+1]=t;
  	    change=1;
  	 }	
  }	
   for(i=0;i<10;i++)
	 {
	 printf("%d\n",a[i]); 
	 } 
  return 0;
}
