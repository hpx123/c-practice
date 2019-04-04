#include<stdio.h>
#include<stdlib.h>

int cmp(const *void a,const *void b){
	return (int *)a-(int *)b;
}

int add(int a,int b){
	if(a>=b){
		return a-b; 
	}
	else{
		return b-a;
	}
}

int find(int n){
	
}

int main (){
	int n, m, i, j;
	int a[10005]={0};
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		for(i = 0; i < m; i++){
			scanf("%d",&a[i]);
		}
		qsort(a,m,sizeof(a[0]),cmp);
		
	}
}
