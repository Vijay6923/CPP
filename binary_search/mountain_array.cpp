#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=1;
    int h=n-2;
    while(l<=h){
        int mid=l+((h-l)/2);
        if(arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1]){
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid]<arr[mid-1]){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }

        return 0;
}