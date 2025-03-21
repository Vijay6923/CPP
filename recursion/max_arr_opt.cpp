#include<bits/stdc++.h>
using namespace std;
int displayMax(int arr[],int idx,int n){
    if(idx ==n) return INT_MIN;
    else return max(arr[idx],displayMax(arr,idx+1,n));
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<displayMax(arr,0,n);
}