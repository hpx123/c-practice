#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a,const void* b){
	return *(int *)a - *(int *)b;
}

int main(){
	int n, i;
	int a[105];
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	int sum = 0;
	qsort(a,n,sizeof(a[0]),cmp);
	for(i = 0; i < n; i++){
		sum += a[i];
	}
	printf("%d\n",sum);
	printf("%d\n",a[n-1]);
	printf("%d\n",a[0]);
	for(i = n-1; i >= 0; i--){
		while(a[i] == a[i-1]){
			i--;
		}
		printf("%d\n",a[i]);
	}
	return 0;
}
