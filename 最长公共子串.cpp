#include<stdio.h>
#include<string.h>

char s[20][256];

int main(){
	int n, i, j, k, t = 0, l, flag;
	scanf("%d", &n);
	int minlen = 256, minstr = 0;
	char min[256], last[256];
	for(i = 0; i < n; i++){
		scanf("%s",s[i]);
		if(strlen(s[i])< minlen){
			minlen = strlen(s[i]);
			minstr = i;
		}
	}
	for(i = 0; i < minlen; i++){
		for(j = 0; j < minlen - i + 1; j++){
			strncpy(min, s[minstr]+i,j);
			min[j] = '\0';
			flag = 1;
			for(k = 0; k < n; k++){
				if(strstr(s[k], min) == NULL && k != minstr){
					flag = 0;
				}	
			}
			if(flag == 1 && strlen(min) > t){
					t = strlen(min);
					strcpy(last, min);
			}
		}
	}
	for(i = 0; i < strlen(last); i++){
		printf("%c",last[i]);
	}
	return 0;
}
