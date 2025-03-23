#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            for(int i=s;i<=e;i++){
                cout<<arr[i]<<" ";

            }
            cout<<endl;
        }
    }
    int ans=0;
    for(int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            int sum=0;
            for(int i=s;i<=e;i++){
                sum=sum+arr[i];

            }
            ans=ans+sum;
            cout<<ans<<endl;;
        }
    }

}