#include<stdio.h>
#include<math.h>

int k[1005][1005]={0};
int cv[1005][1005]={0};
int dir[][2]={0,1,0,-1,1,0,-1,0};

int check(int x, int y){
	if(x >= 0 && y>= 0){
		return 1;
	}
	else if(x < 0 && y < 0){
		return 1;
	}
	else if(x > 0 && y < 0){
		return 0;
	}
	else if(x < 0 && y > 0){
		return 0;
	}
}

int main(){
	int n, m, i, j, x, y, l;
	int a, b, t;
	while(~scanf("%d %d",&n,&m),n,m){
		for(i = 1; i <= n; i++){
			for(j = 1; j <= m; j++){
				scanf("%d",&k[i][j]);
			} 
		}
		t = cv[0][0];
		for(i = 1; i <= n; i++){
			for(j = 1; j <= m; j++){
				for(l = 0; l < 4; ++l){
					x = i + dir[l][0];
					y = j + dir[l][1];
					if(check(k[i][j], k[x][y])){
						cv[i][j] -= abs(k[x][y]);
					}
					else{
 						cv[i][j] += abs(k[x][y]);
 					}
 				}
				if(cv[i][j] > t){
					t = cv[i][j];
					a = i;
					b = j;
				} 
			} 
		}	
		
		printf("%d %d %d\n",a,b,t);
	} 
	return 0;
}
