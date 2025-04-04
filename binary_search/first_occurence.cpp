#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int x;
    cin>>x;
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=l+((h-l)/2);
        if(arr[mid]==x && arr[mid-1]!=x){
            cout<<mid<<endl;
            return 0;
            
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
}