#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n),pre(n),suf(n),ans(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pre[0]=1;
    int p=pre[0];
    for(int i=1;i<n;i++){
        pre[i]=p;
        p=p*arr[i];
    }
    suf[n-1]=1;
    int ps=suf[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=ps;
        ps=ps*arr[i];
    }
    for(int i=0;i<n;i++){
        ans[i]=pre[i]*suf[i];
        cout<<ans[i]<<" ";
    }

}