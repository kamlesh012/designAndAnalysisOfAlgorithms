#include <iostream>
#include <algorithm>
//Selection Sort
//Need to add no. of comparisons & swaps
using namespace std;
void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    //Selection Sort Begins
    for(int i=0;i<n;i++){
        int mn=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[mn]){
                mn=j;
            }
        }
        if(mn!=i){
            swap(a[i],a[mn]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int t;cin>>t;
    while(t--)solve();
    return 0;
}
