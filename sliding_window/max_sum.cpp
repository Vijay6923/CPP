#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=INT_MIN;
    int k;
    cin>>k;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum=sum+arr[j];
        }
        maxsum=max(sum,maxsum);
    }
    cout<<maxsum<<endl;
}