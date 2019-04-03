#include<stdio.h>
int main()
{
	int i=0,j=0,n,m=1;
	int a[n][n];
	printf("请输入一个数：");
	scanf("%d",&n);
	for(j=0;j<n;j++){
		a[i][j]=m++;
		printf("%d " ,a[i][j]);
		
	}
	printf("\n");
	for(i=0;i<n;i++){
		a[i][n]=m++;
		printf("%d " ,a[i][j]);
	}
	printf("\n");
	for(j;j>-1;j--){
		a[i][j]=m++;
		printf("%d" ,a[i][j]);
	}
    printf("\n");
	for(i;i>0;i--){
		a[i][j]=m++;
		printf("%d" ,a[i][j]);
	}
	
	printf("\n");
	return 0;
}
