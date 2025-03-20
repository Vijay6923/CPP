#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>nums(n),queries(m);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<m;i++){
        cin>>queries[i];

    }
    vector<int>ans(m);
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i++){
        nums[i]=nums[i]+nums[i-1];
    }
        
    for(int i=0;i<m;i++){
        int len=0;
        for(int j=0;j<n;j++){
            if(nums[j]>queries[i]) break;
            else len++;
        }
        ans[i]=len;

    }

    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
}