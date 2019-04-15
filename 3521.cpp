#include<stdio.h>
#define MAX 1000000

int main(){
	int n, i;
	long int s[MAX];
	scanf("%d",&n);
	s[1] = 1;
	s[2] = 1;
	int ans = 2;
	for(i = 3; ;i++){
		s[i] = s[i - 1] + s[i - 2];
		if(s[i] > n){
			printf("%d\n",ans);
			printf("%ld",s[i - 1]);
			break;
		}
		ans++;
	}
	return 0;
} 
