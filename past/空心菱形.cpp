#include<stdio.h>
int main()
{
	int i,j,n;
	printf("ÇëÊäÈëĞĞÊı£º");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		for(j=0;j<2*i+1;j++){
			if(j==0||j==2*i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}printf("\n");
	} 
	for(i=1;i<n;i++){
		for(j=0;j<i+1;j++){
			printf(" ");
		}
		for(j=0;j<2*n-1-2*i;j++){
			if(j==0||j==2*n-2-2*i){
				printf("*");
			}
			else{
				printf(" "); 
			}
		}printf("\n");
	}
	return 0;
}
