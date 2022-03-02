/*
3
10
235 235  278 278  763 764 875 875 981 981
981
7
1 2 3 4 5 6 6
6
1
9
1 2 3 4 5 6 7 8 9 0
*/

//Given a sorted array of no. find a given element in the given array.
//if present also find the number of occurences of the given element
#include <iostream>
using namespace std;

int first(int a[],int n,int k){
    int mid,l=0,h=n-1,ans=-1;
    while(l<=h){
        mid=(h-l)/2+l;
        if(a[mid]==k){
            ans=mid;
            h=mid-1;
        }
        else if(a[mid]>k){
            h=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}

int last(int a[],int n,int k){
    int mid,l=0,h=n-1,ans=-1;
    while(l<=h){
        mid=((h-l)/2)+l;
        if(a[mid]==k){
            ans=mid;
            l=mid+1;
        }
        else if(a[mid]>k){
            h=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}

void solve()
{
    int n=100;
    cin>>n;

    int a[100]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
   
    }
    int x;
    cin>>x;
    //O(logn)-Optional
    // /*
   
    int a1=first(a,n,x);
    int a2=last(a,n,x);

    cout<<a1<<" "<<a2<<endl;

    if(a1==a2 && a1==-1)cout<<"NOT Found"<<endl;
    else cout<<x<<" "<<a2-a1+1<<endl;

    // */ 
    //O(n)-Mandatory

    /* 
   int start=-1,end=-1;
   for(int i=0;i<n;i++)
   {
       if(a[i]==x){
           if(start==-1)start=i;
           end=i;
       }
   }
   if(start==-1)cout<<"NOT Found"<<endl;
   else cout<<x<<" "<<end-start+1<<endl;
*/
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
