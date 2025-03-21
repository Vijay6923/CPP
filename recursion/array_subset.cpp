#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>&arr,vector<int>&ans,int idx,int n){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";

        }
        cout<<endl;
        return;
    }
    subset(arr,ans,idx+1,n);
    ans.push_back(arr[idx]);
    subset(arr,ans,idx+1,n);
    ans.pop_back();

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    // unordered_set<int>ans();
    subset(arr,ans,0,n);
}