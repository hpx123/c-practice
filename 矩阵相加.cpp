#include<stdio.h>
#define MAX 10000

int main(){
	int n, a[MAX], i;
	scanf("%d",&n);
	a[1] = 1;
	a[2] = 1;
	int ans = 0;
	for(i = 3; ; i++){
		a[i] += a[i - 1] + a[i - 2];
		if(a[i] > n){
			break;
		}
		ans++;
	}
	printf("%d\n",a[i - 1]);
	printf("%d",ans);
}
