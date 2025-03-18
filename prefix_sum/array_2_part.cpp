#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n),prefix(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        prefix[i]=sum;

    }
    bool flag=false;
    for(int i=1;i<n;i++){
        if(2*prefix[i]==prefix[n-1]){
            flag=true;
            break;
        
        }

    }
    if(flag==true){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    
}