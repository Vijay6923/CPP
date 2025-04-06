#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i*i<=n;i++){
        int count=0;
        while(n%i==0){
            count++;
            n/=i;
        }
        if(i%4==3 && count%2!=0){
            cout<<0<<endl;
            return 0;
        }
            
        
    }
    cout<<(n%4!=3)<<endl;
}