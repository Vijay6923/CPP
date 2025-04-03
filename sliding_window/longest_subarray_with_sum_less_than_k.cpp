#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int i=0;
    int j=0;
    int maxlen=0;
    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
        while(sum>=k){
            sum-=arr[i];
            i++;
        }
        maxlen=max(maxlen,j-i+1);
    }
    cout<<maxlen<<endl;
}