#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1,b=1,sum=0;
    for(int i=1;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<b<<endl;
}