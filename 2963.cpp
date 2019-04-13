#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a,const void* b){
	return *(int *)a - *(int *)b;
}

int main(){
	int a[100005];
	int b[100005];
	int n, i, m;
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	qsort(a, n, sizeof(a[0]), cmp);
	b[0] = a[0];
	m = 1;
	for(i = 1; i < n; i++){
		b[m++] = a[i];
		if(a[i] == a[i - 1]){
			m--;	
		}
	}
	printf("%d\n",m);
	for(i = 0; i < m; i++){
		printf("%d ",b[i]);
	}
	return 0;
}
