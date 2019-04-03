#include<stdio.h>
int main()
{
 int a,b,c; //a,b,c分别表示一块两块三块 
 int n=0;
 for(a=0;a<=50;a++)
 {for(b=0;b<=25;b++)
 {for(c=0;c<=10;c++)
 {  
 	if(50==a+2*b+5*c)
	 {n++;
 	printf("%d种:%d个一元%d个两元 %d个五元\n",n,a,b,c);
     }
} 
} 
} 
 return 0;
 } 
