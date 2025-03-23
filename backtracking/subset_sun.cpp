#include<bits/stdc++.h>
using namespace std;
void subsetsum(int arr[],int idx,int n,int ans){
    if(idx==n){
        cout<<ans<<endl;
        return;
    }
    int a=arr[idx];
    subsetsum(arr,idx+1,n,ans+a);
    subsetsum(arr,idx+1,n,ans);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    subsetsum(arr,0,n,ans);
}