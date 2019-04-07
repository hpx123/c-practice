#include<stdio.h>
#include<math.h>

int k[1005][1005]={0};
int cv[1005][1005]={0};

int add(int n){
	if(n>=0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int n, m, i, j;
	int a, b, t;
	while(~scanf("%d %d",&n,&m)){
		for(i = 1; i <= n; i++){
			for(j = 1; j <= m; j++){
				scanf("%d",&k[i][j]);
			} 
		}
		for(i = 1; i <= n; i++){
			for(j = 1; j <= m; j++){
				if(add(cv[i][j])!=0){
					printf("%d",cv[i][j]);
				}	
			} 
		}	
	} 
	return 0;
}
