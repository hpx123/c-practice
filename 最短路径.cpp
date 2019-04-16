#include<stdio.h> 
#define MAX 0x77777

int min(int a,int b){
	return a > b ? a : b;
}

int main(){
	int road[58][58]; 
	int b[10005] = {0};
	int i, j, m, w, x, y, k, t;
	char s[10];
	for(i = 0; i < 58; i++){
		for(j = 0; j < 58; j++){
			road[i][j] = MAX;
		}
	}
	scanf("%d",&m);
	while(m--){
		getchar();
		gets(s);
        x = s[0] - 'A'; 
        y = s[2] - 'A'; 
        if(x >= 0 && x < 25) b[x] = 1;  
        if(y >= 0 && y < 25) b[y] = 1;  
        road[x][y] = min(road[x][y], s[4] - '0');
		road[y][x] = min(road[y][x], s[4] - '0');  
		
	}
	for(k = 1; k <= 58; k++){
		for(i = 1; i <= 58; i++){
			for(j = 1; j <= 58; j++){
				if(i != j && road[i][j] > road[k][j] + road[i][k]){
					road[i][j] = road[k][j] + road[i][k];
				}
			} 
		}
	}
	int min = MAX;
	for(i = 0; i < 58; i++){
		if(road[25][i] < min && b[i]){
			min = road[25][i];
			t = i + 'A';
		}
	}
	printf("%c %d",t , min);
	return 0;
}
