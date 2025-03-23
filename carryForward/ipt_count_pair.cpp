#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    int cg=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]=='g') cg++;
        else {
            if(arr[i]=='a'){
                ans +=cg;
            }
        }

    }
    cout<<ans<<endl;
}