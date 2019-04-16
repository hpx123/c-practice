#include<stdio.h>
#include<math.h>

int main(){
	char s;
	int a = 0, b = 0, c = 0, d = 0, i = 0, j;
	int win[1005], lose[1005];
	while(s != 'E'){
		scanf("%c",&s);
		if(s == 'W'){
			a++;
			c++;
		}
		else if(s == 'E'){
			b++;
			d++;
		}
		if((a >= 11 || b >= 11) && abs(a - b) >= 2){
			printf("%d:%d\n",a, b);
			a = 0;
			b = 0;
		}
		if((c >= 11 || d >= 11) && abs(c - d) >= 2){
			win[i] = c;
			lose[i] = d;
			c = 0;
			d = 0;
			i++;
		}
	}
	for(j = 0; j < i; j++){
		printf("%d:%d\n",win[i], lose[i]);
	}
	return 0;
}
