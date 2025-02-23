#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    while(i<n){
        int correct_idx=arr[i]-1;
        if(i==correct_idx) i++;
        else swap(arr[i],arr[correct_idx]);
    }

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     
    
}