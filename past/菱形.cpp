#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("请输入菱形行数：");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		for(j=0;j<2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*n-2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
