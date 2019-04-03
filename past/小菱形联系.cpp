#include<stdio.h>
int main()
{
	int i,j,n;
	printf("请输入*最大值：");
	scanf("%d",&n);
	for(i=1;i<=n;i+2){
		for(j=1;j<=7-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("*");
			printf(" ");
		}
		printf("\n");
	} 
	return 0;
}

