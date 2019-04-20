#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a, const void* b){
	return *(int *)a - *(int *)b;
}

int main(){
	int w, n, a[30005], i;
	scanf("%d",&w);
	scanf("%d",&n);
	int head = 0, tail = n - 1;
	int count = 0;
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	qsort(a, n, sizeof(a[0]), cmp);
	while(head < tail){
		if(a[head] + a[tail] <= w){
			count++;
			++head;
			--tail;
			continue;
		}
		count++;
		--tail;
	}
	if(head == tail){
		count++;
	}
	printf("%d",count);
	return 0;
} 
