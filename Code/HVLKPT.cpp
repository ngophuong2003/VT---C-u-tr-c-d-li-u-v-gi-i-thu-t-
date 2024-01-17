#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fibo[92];
int main(){
	fibo[0]=0;
	fibo[1]=1;
	for (ll i=2; i<92; i++){
		fibo[i]=fibo[i-2]+fibo[i-1];
	}
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<fibo[n]<<endl;
	}
}