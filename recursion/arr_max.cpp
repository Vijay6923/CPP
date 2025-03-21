#include<bits/stdc++.h>
using namespace std;
void displayMax(int arr[],int idx,int n,int max){
    if(idx==n){
        cout<<max<<endl;
        return ;
    }
    if(max<arr[idx]){
        max=arr[idx];
    }
    displayMax(arr,idx+1,n,max);

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    displayMax(arr,0,n,INT_MIN);
}