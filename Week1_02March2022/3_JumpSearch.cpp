#include <iostream>
#include <cmath>
//Jump Search
using namespace std;
int comparisons=1;

int jump(int a[],int n,int key){

    int steps=sqrt(n);
    int present=0;

    while(present<n)
    {
        if(a[present]==key)return present;
        else if(a[present]<key){
            comparisons++;
            present+=steps;
        }
        else if(a[present]>key){

            int start=present-steps;
            while(start <n && start<present){
                comparisons++;
                if(a[start]==key){
                        return start;
                }
                start++;
            }
        if(start==present)return -1;
        }
    }
    return -1;
}

void solve(){

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];

int key;
cin>>key;

bool ok=false;
int ans=jump(a,n,key);
if(ans==-1)cout<<"NOT PRESENT "<<comparisons<<endl;
else cout<<"Present Found at"<<ans<<" in "<<comparisons<<" comparisons"<<endl;
  

}

int main(){

int t;cin>>t;
while(t--){

    solve();
}

return 0;
}
