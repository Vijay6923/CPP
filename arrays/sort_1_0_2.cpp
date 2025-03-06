#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int >arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0;int m=0;int h=n-1;
    while(m<=h){
        if(arr[m]==2){
            int temp=arr[m];
            arr[m]=arr[h];
            arr[h]=temp;
            h--;
        }
        if(arr[m]==0){
            int temp=arr[m];
            arr[m]=arr[l];
            arr[l]=temp;
            l++;
            m++;
        }
        else{
            m++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}