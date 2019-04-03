#include<iostream>
using namespace std;
typedef long long LL;
LL df(LL n){
	if(n==1) {
	cout<<1;}
	else{
		df(n-1);
		cout<<n;
		df(n-1);
	}


}
int main() {
    LL n;
    cin>>n;
    df(n);
    return 0;
}
