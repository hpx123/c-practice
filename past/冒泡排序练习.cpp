#include<stdio.h>

int main()
{
	int n;
	int m=1,i=0,j=0;
	scanf("%d",&n);
	int a[1000][100]={0};
	do{
		while(j<n&&a[i][j]==0){
			a[i][j]=m++;
			j++;
		}
		i++;
		j--;
		while(i<n&&a[i][j]==0){
			a[i][j]=m++;
			i++;
		}
		i--;
		j--;
		while(j>-1&&a[i][j]==0){
			a[i][j]=m++;
			j--;
		}
		j++;
		i--;
		while(i>0&&a[i][j]==0){
			a[i][j]=m++;
			i--;
		}
		i++;
		j++;
	}
	while(i!=j||i!=n/2);
	a[i][j]=m;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%3d",a[i][j]);
		
	}printf("\n");
	return 0;
}
