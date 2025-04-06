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
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=l+((h-l)/2);
        if(arr[mid]==k){
            cout<<true<<endl;
            return 0;
        }
        if(arr[l]==arr[mid]&& arr[mid]==arr[h]){
            l++;
            h--;
        }
        else if(arr[l]<=arr[mid]){
            if(arr[l]<=k && k<arr[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
    }
    cout<<false<<endl;
    return 0;
}