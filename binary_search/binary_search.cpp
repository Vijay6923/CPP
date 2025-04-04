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
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(nums[mid]==target){
            cout<<mid<<endl;
            return 0;
        }
        else if(nums[mid]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
        cout<< -1<<endl;;
    
}