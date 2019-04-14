#include<stdio.h>

int main(){
	int l, v1, v2, v3, t, sum = 0;
	scanf("%d %d %d %d",&l, &v1, &v2, &v3);
	while(l > 0){
		t = l / (v1 + v2);
		sum += v3 * t;
		l = l - (v1 + v2) * t;
	}
	printf("%d",sum);
	return 0;
}
