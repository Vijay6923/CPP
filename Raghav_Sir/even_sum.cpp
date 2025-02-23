#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        int a=n%10;
        if(a%2==0){
            sum +=a;
        }
        n /=10;
    }
    cout<<sum<<'\n';
    return 0;
}