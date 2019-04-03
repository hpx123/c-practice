#include<stdio.h>
int main()
{
 int a[],t;
 int i,j;
 change =1;
 printf("请输入三个数：");
 for(i=0;i<3;i++)
 {
 	scanf("%d",&a[i]);
 }
 { change=0;
  for(j=0;j<3-i-1;j++)
  {if(a[j]>a[j+1])
    t=a[j];
    a[j]=a[j+1];
	a[j+1]=t; 
	chang=1;            }
	for(i=0,i<3,i++)printf("%d %d %d",a[i]);
 }   
   return 0;
 }

