#include<stdio.h>
int main()
{
 int a,b,c; //a,b,c�ֱ��ʾһ���������� 
 int n=0;
 for(a=0;a<=50;a++)
 {for(b=0;b<=25;b++)
 {for(c=0;c<=10;c++)
 {  
 	if(50==a+2*b+5*c)
	 {n++;
 	printf("%d��:%d��һԪ%d����Ԫ %d����Ԫ\n",n,a,b,c);
     }
} 
} 
} 
 return 0;
 } 
