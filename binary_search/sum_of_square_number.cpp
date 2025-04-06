#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_set<long long >square;
    for(int i=1;i*i<=n;i++){
        square.insert(i*i);
    }
    for(long long  x:square){
        if(square.count(n-x)){
            cout<<1<<endl;
            return 0;
        }


    }
    cout<<0<<endl;
    return 0;
}