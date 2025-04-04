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
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=l+((h-l)/2);
        if(nums[mid]==x){
            cout<<nums[mid-1]<<endl;
            return 0;
        }
        else if(nums[mid]<x){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
        cout<< nums[h]<<endl;;
    
}