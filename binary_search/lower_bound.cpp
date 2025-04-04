#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(nums[i]>x){
            cout<<nums[i-1];
            break;
        }
    } 
}