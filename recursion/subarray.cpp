#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int k=i;k<n;k++){
            for(int j=i;j<=k;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }


    }
}