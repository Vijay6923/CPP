#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1;
    if(n<=0){
        cout<<"please enter the positive number"<<endl;

    }
    else if(n==1){
        cout<<a<<endl;

    }
    else{
        cout<<a<<" "<<b<<" ";
        for(int i=3;i<=n;i++){
            int next=a+b;
            cout<<next<<" ";
            a=b;
            b=next;
            
        }
        return 0;
    }
}