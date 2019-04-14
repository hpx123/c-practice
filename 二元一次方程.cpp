#include<stdio.h>

int main(){
	int x, y;
	int a1, b1, c1, a2, b2, c2;
	scanf("%d %d %d",&a1, &b1, &c1);
	scanf("%d %d %d",&a2, &b2, &c2); 
	if(a1 > a2){
		b2 *= a1 / a2;
		c2 *= a1 / a2;
		a2 = a1;
	}
	else if(a1 < a2){
		b1 *= a2 / a1;
		c1 *= a2 / a1;
		a1 = a2;
	}
	y = (c1 - c2) / (b1 - b2);
	x =(c1 - b1*y) / a1;
	printf("%d %d",x, y);
	return 0;
}
