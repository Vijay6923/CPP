#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int max2=arr[0];
    int max3=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max3=max2;
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3){
            max3=arr[i];
        }
    }
    cout<<max<<" "<<max2<<" "<<max3<<endl;
}