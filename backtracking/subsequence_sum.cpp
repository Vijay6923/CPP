#include<bits/stdc++.h>
using namespace std;
int countsub(int arr[],int idx,int n,int sum,int k){
    if(idx==n){
        if(sum==k) return 1;
        return 0;
    }
    int x=countsub(arr,idx+1,n,sum+arr[idx],k);
    int y=countsub(arr,idx+1,n,sum,k);
    return x+y;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int k;cin>>k;
    cout<<countsub(arr,0,n,sum,k)<<endl;
}