#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s,e;
    cin>>s>>e;
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
}