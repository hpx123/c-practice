#include<stdio.h>

int main(){
	int n, i, sum = 0;
	int a[1005];
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	for(i = 0; i < n; i++){
		if(a[i] < 10){
			sum += 50;
		}
		else if(a[i] >= 10 && a[i] < 100){
			sum += 180;
		}
		else if(a[i] >= 100 && a[i] < 300){
			sum += 300;
		}
		else if(a[i] >= 300 && a[i] < 1000){
			sum += 1000;
		}
		else if(a[i] >= 1000 && a[i] < 3000){
			sum += 2000;
		}
		else{
			printf("Can't transport!");
			return 0;
		}
	}
	printf("%d",sum);
	return 0;
}
