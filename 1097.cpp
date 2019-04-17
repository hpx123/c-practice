#include<stdio.h>

int main()

{

    int l,m,a[100][2];

    int count=0,s,i,j,k;

    scanf("%d %d",&l,&m);

    int b[10005] = {0};

    for (j=0;j<m;j++)

    {

        scanf("%d %d",&a[j][0], &a[j][1]);

        for(i = a[j][0]; i <= a[j][1]; i++)//ÒÆ³ýÊ÷

        {
            b[i] = 1;

        }

    }

    for(int k=0;k<l+1;k++)//¼ÆËãÃ»ÓÐÒÆ³ýµÄÊ÷

    {

        if(b[k] == 0)

        {

            count++;

        }

    }

    printf("%d",count);

    return 0;

}

 

