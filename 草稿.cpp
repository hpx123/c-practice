#include <stdio.h>

#define M 302

 

int main() {

	int n=0,x=0,y=0;    //nΪ��Ʒ����Ŀ��xΪ���أ�yΪǮ��

	int goods[M][4]={0};  //goods��������������Ʒ����Ϣ

	int dp[101][101]={0};  //��Ϊ���أ���Ϊʣ���Ǯ��

	int i=0,j=0,k=0;

	int ww=0,vv=0,tt=0,hh=0;  //���ڽ���ÿ����Ʒ���������۸񣬼�ֵ����Ŀ

	scanf("%d %d %d",&n,&x,&y);

	for(i=0;i<n;i++)

	{

		scanf("%d %d %d %d",*(goods+i),*(goods+i)+1,*(goods+i)+2,*(goods+i)+3);

	}

	

	for(i=0;i<n;i++)

	{

		for(j=x;j>=0;j--)  //����

		{

			for(k=y;k>=0;k--)  //ʣ���Ǯ��

			{

				ww = goods[i][0],vv = goods[i][1],tt = goods[i][2],hh = goods[i][3];

				if(hh&&j>=ww&&k>=vv&&dp[j][k]<dp[j-ww][k-vv]+tt)  //��һ��

					dp[j][k] = dp[j-ww][k-vv]+tt;

				if(hh&&j>=ww*hh&&k>=vv*hh&&dp[j][k]<dp[j-ww*hh][k-vv*hh]+tt*hh)  //��h��

					dp[j][k] = dp[j-ww*hh][k-vv*hh]+tt*hh;

			}

		}

	}

	printf("%d\n",dp[x][y]);

	return 0;

}

