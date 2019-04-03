#include<stdio.h>
int main()
{

    int i;
    int j;
    for(i = 1;i<=7;i=i+2)  //先打印上半部分。(7为最多行拥有*的个数,+2每行差数)
    {
        for(j=1;j<=7-i;j++)//当i是1的时候，输入6个空格，i是3的时，输入4个空格
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");//当i是1的时候，输入一个*号，i是3时，输入3个*
            printf(" ");
        }
        printf("\n");
    }

    for(i = 5;i>=1 ;i=i-2)   //打印下半部分。(5是7-2;-2每行得差数).
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
