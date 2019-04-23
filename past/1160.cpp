#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(){
	int n, i, j;
	int a[200000];
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	qsort(a, n, sizeof(a[0]), cmp);
	int count = 1;
	for(i = 0; i < n; i++){
		if(a[i] == a[i + 1]){
			count++;
		}
		else{
			printf("%d %d\n",a[i], count);
			count = 1;
		}
	}
	return 0;
}
