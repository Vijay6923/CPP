#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='a'){
            for(int j=i+1;j<n;j++){
                if(arr[j]=='g'){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}