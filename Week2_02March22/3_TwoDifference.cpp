//Find two numbers with difference equal to k.
//Similar to Two Sum & THree SUm.
#include <iostream>
#include <algorithm>
using namespace std;
void solve(){
	
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int key;cin>>key;
    sort(a,a+n);
    int cnt=0;
    for(int x=0;x<n;x++){
    	
    	int i=x,j=n-1;
	    while(i<j){
	    	if((a[j]-a[i])>key)j--;
	    	else if((a[j]-a[i])<key)i++;
	    	else {
	    		cnt++;
	    		i++;
	    		j--;
	    	}
	    }
    }
    
    if(cnt)cout<<cnt<<endl;
    else cout<<"NO Such pair"<<endl;
}

int main(){
	
    int t;cin>>t;
    while(t--){
    	solve();
    }
    
    return 0;
}
