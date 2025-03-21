#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){
         string rev=arr[i];
        reverse(rev.begin(),rev.end());
        for(int j=i+1;j<n;j++){
            if(rev==arr[j]) count++;
        }
    }
    cout<<count;
}