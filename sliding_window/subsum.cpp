#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int ans=0;
    for(int i=0;i<n;i++){
        
        int s=i+1;
        int e=n-1;
        int occ=s*e;
        ans=ans+arr[i]*occ;

    }
    cout<<ans;
}