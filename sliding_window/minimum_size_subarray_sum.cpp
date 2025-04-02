#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
    int i=0;
    int j=0;
    int minLen=INT_MAX;
    int len;
    int sum=0;
    while(j<n){
        sum=sum+nums[j];
        while(sum>=target){
            len=j-i+1;
            minLen=min(minLen,len);
            sum-=nums[i];
            i++;
        }
        j++;
    }
    if(minLen==INT_MAX) {
        cout<<0<<endl;
    }    
    else{
        cout<<minLen<<endl;
    }
    
}
