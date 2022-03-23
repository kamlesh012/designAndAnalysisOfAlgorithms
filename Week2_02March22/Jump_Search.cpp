#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int cmp=0;
int jumpsearch(int a[],int n,int key){
	
	int jmp=sqrt(n),strt=0;
	while(true){
		cmp++;
		if(strt>n){
			int prev=strt-jmp;
			while(prev<n){
				cmp++;
				if(a[prev]==key)return prev;
				else prev++;
			}
			return -1;
		}
		else if(a[strt]==key){return strt;}
		else if(strt<n && a[strt]<key){
			strt+=jmp;
		}
		else if(strt<n && a[strt]>key){
			int prev=strt-jmp;
			while(prev<n && prev<=strt){
				if(a[prev]==key)return prev;
				else prev++;
				cmp++;
			}
			return -1;
		}
	}
	return -1;
}
void solve(){
	
	int n;cin>>n;
	int a[n];
	for(int &i:a)cin>>i;
	int key;cin>>key;
	
	sort(a,a+n);
	cmp=0;
	int ans=jumpsearch(a,n,key);
	cout<<ans<<" "<<cmp<<endl;
	// cout<<cmp<<endl;
	
}
int main(){
	int t;cin>>t;
	while(t--){
		solve();
	}
	
	return 0;
}
