#include<stdio.h>
#include<math.h>

int main()
{
    int n, i;
    long int sum = 0;
    int a[32] = {0};
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
        //sum += a[i] * pow(2,n-i-1);
    }
    printf("%ld",sum);
    return 0;
}

