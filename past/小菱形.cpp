#include<stdio.h>
int main()
{

    int i;
    int j;
    for(i = 1;i<=7;i=i+2)  //�ȴ�ӡ�ϰ벿�֡�(7Ϊ�����ӵ��*�ĸ���,+2ÿ�в���)
    {
        for(j=1;j<=7-i;j++)//��i��1��ʱ������6���ո�i��3��ʱ������4���ո�
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");//��i��1��ʱ������һ��*�ţ�i��3ʱ������3��*
            printf(" ");
        }
        printf("\n");
    }

    for(i = 5;i>=1 ;i=i-2)   //��ӡ�°벿�֡�(5��7-2;-2ÿ�еò���).
    {
        for(j=1;j<=7-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }

    return 0;

}
