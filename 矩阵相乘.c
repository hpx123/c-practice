#include<stdio.h>
int main()
{
	int i,j,t,n,m,e,f,x,y;
	int sum=0;
	int a[n][m];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int b[e][f];
	scanf("%d %d",&e,&f); 
	for(x=0;x<e;x++){
		for(y=0;y<f;y++){
			scanf("%d",&b[x][y]);
		}
	}
	int q[i][y];
	/*for(i=0;i<n;i++){
		for(j=0;j<m;j++)
		for(y=0;y<f;y++){
			for(x=0;x<e;x++)
			sum+=a[i][j]*b[x][y];
		}
		q[i][y]=sum;
	}*/
	for(i=0;i<n;i++){
		for(y=0;y<f;y++)
		printf("%d",q[i][y]);
		printf("\n");
	   } 
	return 0;
}

