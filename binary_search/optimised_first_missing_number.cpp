#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int ans=-1;
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=l+((h-l)/2);
        if(arr[mid]==mid){
            l=mid+1;
        }
        else{
            ans=mid;
            h=mid-1;
        }
    }
    cout<<ans<<endl;
}