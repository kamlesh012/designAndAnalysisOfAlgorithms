//Not working Properly
#include <bits/stdc++.h>

using namespace std;
//Trying out Merge sort
int *c;
int * merge(int a[],int b[],int n,int m){
    int i=0,j=0,k=0;
    // int c[n+m];
    c=new int[n+m];
    while(i<n && j<m){
        if(a[i]<b[j])c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<n)a[i++]=c[k++];
    while(j<m)b[j++]=c[k++];
    return c;
}

int * mergesort(int a[],int start,int end){
    if((end-start+1)==1)return a;
    else if((end-start+1)==2){
        if(a[0]>a[1])swap(a[0],a[1]);
        return a;
    }

    int m=(end-start+1)/2;
    int t=(end-start)-m;
    int arr1[]=mergesort(a,start,m);
    int arr2[]=mergesort(a,m+1,end);
    int *sorted;
    sorted=merge(arr1,arr2,m,t);
    return sorted;

}

int main(){

    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int *a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        a=mergesort(a,0,n);
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}












