#include<bits/stdc++.h>
using namespace std;
int tribonacci(int n){
    if(n==0) return 0;
    if(n==1||n==2) return 1;
    int a=0,b=1,c=1;
    int next;
    for(int i=3;i<=n;i++){
        next=a+b+c;
        a=b;
        b=c;
        c=next;

    }
    return next;
}
int main(){
    int n;
    cin>>n;
    cout<<tribonacci(n);
}