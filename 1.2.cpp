#include<bits/stdc++.h>
using namespace std;
bool check(vector<long long>a, vector<long long>b) {
	for (int i=0; i<a.size(); i++) {
		if (a[i]>b[i]) return true;
		else if (a[i]<b[i]) return false;
	}
	return true;
}
void khoangcach(vector<long long>a, vector<long long>b) {
	long long dem=0;
	do {
		long long check=0;
		for (int i=0; i<a.size(); i++) {
			if (a[i]!=b[i]) check=1;
		}
		if (!check) {
			cout<<dem<<endl;
			break;
		}
		dem+=1;
	} while (next_permutation(a.begin(), a.end()));
}
void baitap() {
	vector<long long>a,b;
	int n;
	cin>>n;
	for (int i=1; i<=n; i++) {
		long long x;
		cin>>x;
		a.push_back(x);
	}
	for (int i=1; i<=n; i++) {
		long long x;
		cin>>x;
		b.push_back(x);
	}
	if (check(a,b)) khoangcach(b,a);
	else khoangcach(a,b);
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		baitap();
	}
}