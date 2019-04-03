#include<stdio.h>
int a[1005]={0};
int binary(int *a,int key,int low,int high){
	int mid=(high-low)/2;
	int t=low+mid;
	if(a[t]==key){
		return t;
	}
    else if(a[t]>key){
    	high=low+mid-1;
	}
	else{
		low=low+mid+1;
	}
}
int  main(){
	int i,n,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	printf("%d",binary(a,m,0,n-1));
	return 0;
}
