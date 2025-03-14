#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>v,vector<int>&arr,int n,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(v,arr,n,idx+1);
    v.push_back(arr[idx]);
    subset(v,arr,n,idx+1);

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    subset(v,arr,n,0);
}