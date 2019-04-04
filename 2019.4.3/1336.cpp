#include<stdio.h>
#include<stdlib.h>

int cmp(const void* a,const void* b){
	return *(int *)a-*(int *)b;
}

int add(int a,int b){
	if(a>=b){
		return a-b;
	}
	else{
		return b-a;
	}
}

int main(){
	int n, m, i, j, t, sum ;
	int a[10005];
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		for(i = 0; i < m; i++){
			scanf("%d",&a[i]);
		}
		qsort(a, m, sizeof(a[0]), cmp);
		t=a[(m - 1 ) / 2];
		sum = 0;
		for(i = 0;i < m/2; i++){
			if(a[i]==t)
				break;
		}
		for(j = 0; j < m; j++){
			sum+=add(a[j], t);
		}
		printf("%d %d",i,sum);
	}
	return 0;
} 
