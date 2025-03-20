#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    // satisfaction = [-1,-8,0,5,-9]
    int 
    sort(arr.begin(),arr.end());
    for(int i=n-1;i>=0;i--){
        sum=(arr[i]*(i+1));
        if(sum<0){
            break;
        }
        
    }
}