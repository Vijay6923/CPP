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
    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];

    }
    int maxsum=INT_MIN;
    maxsum=sum;
    int i=1;int j=k;
    while(j<n){
        int currsum=sum-arr[i-1]+arr[j];
        if(currsum>maxsum){
            maxsum=currsum;
        }
        sum=currsum;
        i++;j++;

    }
    cout<<maxsum<<endl;

}