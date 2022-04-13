//Maybe valid only for positive numbers.
#include <iostream>
#include <algorithm>
using namespace std;
void solve(){
	
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    
    sort(a,a+n);
    int ank=n-1;
    while(ank>1){
    	
        int i=0,j=ank-1;
        while(i<j){
            if((a[i]+a[j])>a[ank])j--;
            else if((a[i]+a[j])<a[ank])i++;
            else {
            	cout<<i+1<<" "<<j+1<<" "<<ank+1<<endl;
            	// cout<<a[i]<<" "<<a[j]<<" "<<a[ank]<<endl;
            	return;
            }
        }
        ank--;   
    }
    cout<<"NO Sequence Found"<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}
