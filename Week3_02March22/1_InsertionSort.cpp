#include <iostream>
using namespace std;
//Insertion Sort with no. of swaps
//Need to add no. of comparisons and shifts
void solve(){

    //Taking Input
    int  n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int comparisons=0,shifts=0;
    //Insertion Sort Begins
    for(int i=1;i<n;i++){
        int selected=a[i];
        int j=i-1;
        while(j>=0 && a[j]>selected){
            shifts++;
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=selected;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
}

int main(){

    int t;cin>>t;
    while(t--)solve();

    return 0;
}
