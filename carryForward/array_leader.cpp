#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    ans.push_back(arr[n-1]);
    int maxright=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=maxright){
            ans.push_back(arr[i]);
            maxright=arr[i];
        }

    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}