#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	vector<int> nd;
	nd.push_back(a[0]);
	for(int  i=0;i<n-1;i++){
		if(a[i]!=a[i+1])nd.push_back(a[i+1]);
	}
	for(int i:nd)cout<<i<<" ";
	cout<<endl;
}

int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
