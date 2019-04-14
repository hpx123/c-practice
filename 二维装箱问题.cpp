#include<stdio.h>

int main(){
	int a[7];
	int i, left = 0, box = 0;
	while(1){
		for(i = 1; i <= 6; i++){
			scanf("%d",&a[i]);
		}
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0){
			break;
		}
		box = a[6] + a[5] + a[4] + a[3] / 4;
		if(a[3] % 4 == 1){
			left += 5;
			box++;
		}
		else if(a[3] % 4 == 2){
			left += 3;
			box++; 
		}
		else if(a[3] % 4 == 3){
			left += 1;
			box++;
		}
		if(left < a[2]){
			box += ((a[2] - left) + 8) / 9;
			left = 0;
		}
		else{
			left -= a[2];
		}
		left = 2 * left;
		left += 11 * a[5] + (((a[2] - left) + 8) * 4 - (a[2] - left) * 4);
		if(left < a[1]){
			box += ((a[1] - left) + 35) / 36;
		}
		printf("%d\n", box);
	}
	return 0;
}
