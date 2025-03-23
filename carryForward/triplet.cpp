#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    int ta=0;
    int lca=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='a') ta++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]=='a') lca++;
        if(arr[i]=='g'){
            int rca=ta-lca;
            ans=ans+lca*rca;
        }
    }
    cout<<ans<<endl;
}