#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int k;
    cin>>k;

    int maxsum=INT_MIN;
    int presum=0;
    for(int i=0;i<k;i++){
        presum=presum+arr[i];


    }
    maxsum=presum;
    int i=1;
    int j=k;
    while(j<n){
        int cursum=presum+arr[j]-arr[i-1];
        if(maxsum<cursum){
            maxsum=cursum;
        }
        presum=cursum;
        i++;
        j++;


    }
    cout<<maxsum<<endl;

}