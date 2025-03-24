#include<bits/stdc++.h>
using namespace std;
int countways(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    int pre2=1;
    int pre1=2;
    for(int i=3;i<=n;i++){
        int cur=pre1+pre2;
        pre2=pre1;
        pre1=cur;
    }
    return pre1;
}
int main(){
    int n;
    cin>>n;
    cout<<countways(n);
}