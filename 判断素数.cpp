#include<stdio.h>
int main()
{
    int i,j;
    int flog=0;
    for(i=1;i<100;i++)
    {     flog=0;
    	for(j=2;j<i;j++)
    	{   
    	
    		if(i%j==0)
    		{
			    flog =1;
			    break;
			}
    		
    		
		}
		if(flog==0)
    		{
			    printf("%d isprime\n",i);
			}
	}
	return 0;
}
