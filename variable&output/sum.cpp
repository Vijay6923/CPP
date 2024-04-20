#include<iostream>
using namespace std;
int main(){
    int a, b;
    // cin>>a>>b;

    // cout<<"sum of numbers: "<<a+b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;



    return 0;
}