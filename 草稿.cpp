#include <stdio.h>

#define M 302

 

int main() {

	int n=0,x=0,y=0;    //n为商品的数目，x为负重，y为钱数

	int goods[M][4]={0};  //goods数组用来接收商品的信息

	int dp[101][101]={0};  //行为负重，列为剩余的钱数

	int i=0,j=0,k=0;

	int ww=0,vv=0,tt=0,hh=0;  //用于接收每个商品的重量，价格，价值和数目

	scanf("%d %d %d",&n,&x,&y);

	for(i=0;i<n;i++)

	{

		scanf("%d %d %d %d",*(goods+i),*(goods+i)+1,*(goods+i)+2,*(goods+i)+3);

	}

	

	for(i=0;i<n;i++)

	{

		for(j=x;j>=0;j--)  //负重

		{

			for(k=y;k>=0;k--)  //剩余的钱数

			{

				ww = goods[i][0],vv = goods[i][1],tt = goods[i][2],hh = goods[i][3];

				if(hh&&j>=ww&&k>=vv&&dp[j][k]<dp[j-ww][k-vv]+tt)  //买一个

					dp[j][k] = dp[j-ww][k-vv]+tt;

				if(hh&&j>=ww*hh&&k>=vv*hh&&dp[j][k]<dp[j-ww*hh][k-vv*hh]+tt*hh)  //买h个

					dp[j][k] = dp[j-ww*hh][k-vv*hh]+tt*hh;

			}

		}

	}

	printf("%d\n",dp[x][y]);

	return 0;

}

